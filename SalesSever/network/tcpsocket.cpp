#include "tcpsocket.h"
#include <QBuffer>
#include <QFileDialog>
#include <QTimer>
#include <QTime>
#include <QDebug>

TcpSocket::TcpSocket(QTcpSocket *socket, QObject *parent) : QObject(parent)
{
    qDebug() << "TcpSocket::TcpSocket(QTcpSocket *socket, QObject *parent) : QObject(parent)";
    m_tcpBlockSize = 0;

    m_socket = socket;
    connect(m_socket, SIGNAL(disconnected()),
            m_socket, SLOT(deleteLater()));
    connect(m_socket, SIGNAL(readyRead()),
            this, SLOT(slotReadyRead()));

    m_msgType = MsgType_Text;
}


TcpSocket::~TcpSocket()
{
    delete m_socket;
}

///接受客户端发过来的数据并判断
void TcpSocket::slotReadyRead()
{
    qDebug() << "TcpSocket::slotReadyRead()";
    QDataStream in(m_socket);
    in.setVersion(QDataStream::Qt_4_6);

    if(m_tcpBlockSize == 0)
    {
        if(m_socket->bytesAvailable()<sizeof(quint16))
            return;

        in >> m_tcpBlockSize;
    }

    if(m_socket->bytesAvailable() < m_tcpBlockSize)
        return;

    QString msg;
    in >> m_msgType;

    if(m_msgType == MsgType_Text)
    {
        in >> msg;
        qDebug() << "Server Recv: " << msg;

        if(msg.at(0) == CMD_UserLogin_L)
        {
            parseUserLogin(msg);
        }else if(msg.at(0) == CMD_UserExit_X)
        {
            parseUserExit(msg);
        }else if(msg.at(0) == CMD_UserInsert_W)
        {
            parseUserInsert(msg);
        }else
        {
            GlobalVars::g_msgQueue.enqueue(msg);
        }
    }else
    {
        int i;
        QString id;
        in >> id;
        QStringList l_id = id.split('|');
        QImage image;
        QByteArray byteArray;
        in >> byteArray;
        image.loadFromData(byteArray);//这个就是存进去的QImage了
        if(image.isNull())
        {
            qDebug() << "NULL";
        }else
        {
            for(i = 0; i < GlobalVars::g_commodityInfoList->length(); i++)
            {
                if(l_id.at(1) == GlobalVars::g_commodityInfoList->at(i).getID())
                {
                    qDebug() << "Commodity: ";
                    GlobalVars::CommodityImageMap.insert(l_id.at(1), image);
                    QString msg = QString(CMD_SendImageS_E)
                            % QString("#!|");
                    this->slotSendMsg(msg);
                }
            }
            if(i >= GlobalVars::g_commodityInfoList->length())
            {
                qDebug() << "User:" << l_id.at(0);
                qDebug() << image.size();
                GlobalVars::UserImageMap.insert(l_id.at(0), image);
                QString msg = QString(CMD_SendImage_P)
                        % QString("#!|")
                        % l_id.at(0);
                emit signalUpdateUserImage(l_id.at(0), true);
                this->slotSendMsg(msg);
            }else
            {
                QString msg = QString(CMD_SendImage_P)
                        % QString("#?")
                        % l_id.at(0);
                emit signalUpdateUserImage(l_id.at(0), false);
                this->slotSendMsg(msg);
            }
        }
    }
    m_tcpBlockSize = 0;
}

void TcpSocket::parseUserLogin(QString msg)
{
    qDebug() << "TcpSocket::parseUserLogin" << msg;

    QStringList list = msg.remove("L#").split("|");
    QString id = list.at(0);
    QString pswd = list.at(1);

    if(GlobalVars::g_userInfoMap.contains(id))
    {
        UserInfoList::iterator it = GlobalVars::g_userInfoMap[id];
        it->display();
        if(it->getPswd() == pswd)
        {
            QString msg = QString(CMD_UserLogin_L)
                    % QString("#!|") % it->getID()
                    % "|" % it->getPswd()
                    % "|" % it->getType()
                    % "|" % it->getTime();
            this->slotSendMsg(msg);
            emit signalRegisterSocket(id, this);
        }else
        {
            QString msg = QString(CMD_UserLogin_L)
                    % QString("#?|") % QString("Error: UID Or Pswd!");
            this->slotSendMsg(msg);
        }
    }else
    {
        QString msg = QString(CMD_UserLogin_L)
                % QString("#?|") % QString("Error: UID Or Pswd!");
        this->slotSendMsg(msg);
    }
}

void TcpSocket::parseUserInsert(QString data)
{
    QStringList list = data.remove("W#").split("|");

    QDateTime *DateTime = new QDateTime(QDateTime::currentDateTime());
    QString str = DateTime->toString("yyyy-MM-dd hh:mm:ss");

    QTime timeone = QTime::currentTime();
    QString tid;
    tid = tr("%1").arg(timeone.toString());
    QStringList ttid = tid.split(':');
    QString id = QDate::currentDate().toString(tr("yyMMdd"))
            % ttid.at(0) % ttid.at(1) % ttid.at(2);
    qDebug() << id;

    UserInfo l_userinfo;
    l_userinfo.setID(list.at(0));
    l_userinfo.setPswd(list.at(1));
    l_userinfo.setType(list.at(2));
    l_userinfo.setTime(str);

    if(ExecSQL::addNewUserInfo(l_userinfo))
    {
        ClientInfo l_clientinfo(NULL, NULL, NULL, NULL, NULL, NULL);
        if(l_userinfo.getType() == "顾客")
        {
            QString filename;
            QString cliimid = "CS0000";
            PhotoInfo l_photoinfo;
            l_photoinfo.setID(QString("GK%1").arg(id));
            l_photoinfo.setName("顾客");
            filename = ExecSQL::searchPhotoSite(cliimid);
            l_photoinfo.setSite(filename);
            if(ExecSQL::addNewPhotoInfo(l_photoinfo))
            {
                l_clientinfo.setID(l_userinfo.getID());
                l_clientinfo.setImid(l_photoinfo.getID());
                l_clientinfo.setTime(str);
                ExecSQL::addNewClientInfo(l_clientinfo);
            }

        }else if(l_userinfo.getType() == "商家")
        {
            QString filename;
            QString merimid = "CS0001";
            PhotoInfo l_photoinfo;
            l_photoinfo.setID(QString("SJ%1").arg(id));
            l_photoinfo.setName("商家");
            filename = ExecSQL::searchPhotoSite(merimid);
            l_photoinfo.setSite(filename);
            if(ExecSQL::addNewPhotoInfo(l_photoinfo))
            {
                MerchantInfo l_merchantinfo(NULL, NULL, NULL, NULL, NULL, NULL);
                l_merchantinfo.setID(list.at(0));
                l_merchantinfo.setImid(l_photoinfo.getID());
                l_merchantinfo.setTime(str);
                ExecSQL::addNewMerchantInfo(l_merchantinfo);
            }
        }

        QString msg = QString(CMD_UserInsert_W) % QString("#!");
        this->slotSendMsg(msg);
        emit signalInsertUser(true);
    }else
    {
        QString msg = QString(CMD_UserInsert_W) % QString("#?");
        this->slotSendMsg(msg);
        emit signalInsertUser(false);
    }
}

void TcpSocket::parseUserExit(QString msg)
{
    qDebug() << "MsgSocket::parseUserExit" << msg;
    msg.remove("X#");
    QString msg1 = QString(CMD_UserExit_X)
            % QString("#!|") % msg;
    this->slotSendMsg(msg1);

    emit signalLogoutSocket(msg, this);
    delete this;
}

//发送文本
bool TcpSocket::slotSendMsg(QString msg)
{
    m_msgType = MsgType_Text;
    QByteArray buffer;
    QDataStream out(&buffer, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);

    out << (quint16)0;
    out << m_msgType;
    out << msg;
    out.device()->seek(0);
    out << (quint16)(buffer.size() - sizeof(quint16));

    qDebug() << "Server Send: " << msg;
    qDebug() << buffer.size();
    return m_socket->write(buffer);
}

//发送图片
void TcpSocket::slotImage(const QString &id, const QString &imid)
{
    qDebug() << id << " " << imid;
    QString fileName;
    QString l_id = id;

    QString type = GlobalVars::g_userInfoMap[id]->getType();
    if(type == "顾客")
    {
          if(imid == GlobalVars::g_clientInfoMap[id]->getImid())
          {
              fileName = ExecSQL::searchPhotoSite(imid);
              qDebug() << fileName;
          }else
          {
              qDebug() << "void TcpSocket::slotImage(const QString &id, const QString &imid)";
              QStringList list = imid.split(">");
              QString mid = list.at(1);
              fileName = ExecSQL::searchPhotoSite(mid);
              qDebug() << fileName;
              l_id = list.at(0);
          }
    }else if(type == "商家")
    {
        if(imid == GlobalVars::g_merchantInfoMap[id]->getImid())
        {
            fileName = ExecSQL::searchPhotoSite(imid);
            qDebug() << fileName;
        }else
        {
            qDebug() << "void TcpSocket::slotImage(const QString &id, const QString &imid)";
            QStringList list = imid.split(">");
            QString mid = list.at(1);
            fileName = ExecSQL::searchPhotoSite(mid);
            qDebug() << fileName;
            l_id = list.at(0);
        }
    }

    m_msgType = MsgType_Image;
    QByteArray byteBuffer;
    QDataStream out(&byteBuffer, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);

    QBuffer buffer;
    QImage image(fileName);         //获取图片
    buffer.open(QIODevice::ReadWrite);
    image.save(&buffer,"PNG");

    out << (quint16)0;
    out << m_msgType;
    out << l_id;
    out << buffer.data();
    out.device()->seek(0);
    out << (quint16)(buffer.size() - sizeof(quint16));

    qDebug() << byteBuffer.length();

    m_socket->write(byteBuffer);

    qDebug() << "void TcpSocket::slotImage(const QString &id, const QString &imid)";
}

//发送商品图片
void TcpSocket::slotImagep(const QString &mid)
{
    qDebug() << "void TcpSocket::slotImagep(const QString &mid)";
    QStringList list = mid.split(">");
    QString imid = list.at(1);
    QString fileName = ExecSQL::searchPhotoSite(imid);
    qDebug() << fileName;


    m_msgType = MsgType_Image;
    QByteArray byteBuffer;
    QDataStream out(&byteBuffer, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);

    QBuffer buffer;
    QImage image(fileName);         //获取图片
    buffer.open(QIODevice::ReadWrite);
    image.save(&buffer,"JPG");

    out << (quint16)0;
    out << m_msgType;
    out << list.at(0);
    out << buffer.data();
    out.device()->seek(0);
    out << (quint16)(buffer.size() - sizeof(quint16));

    qDebug() << byteBuffer.length();

    m_socket->write(byteBuffer);

    qDebug() << "void TcpSocket::slotImagep(const QString &mid)";
}
