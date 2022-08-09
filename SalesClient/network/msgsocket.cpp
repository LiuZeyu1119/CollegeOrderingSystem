#include "msgsocket.h"

#include <QDebug>
#include <QBuffer>

MsgSocket::MsgSocket(QThread *parent) :
    QThread(parent)
{
    m_isExit = false;
    m_tcpBlockSize = 0;
    m_tcpSocket = new QTcpSocket(this);

    connect(m_tcpSocket, SIGNAL(readyRead()),
            this, SLOT(slotReadyRead()));

    m_tcpSocket->connectToHost("127.0.0.1", 55555);
}

void MsgSocket::exitThread(void)
{
    m_isExit = true;
}

MsgSocket::~MsgSocket()
{
    exitThread();
}

void MsgSocket::run()
{
    while(!m_isExit)
    {
        if(!GlobalVars::g_msgQueue.isEmpty())
        {
            QString msg = GlobalVars::g_msgQueue.dequeue();
            parseUserAsk(msg);
        }
        msleep(20);
    }
}

///解析通用请求命令
void MsgSocket::parseUserAsk(QString msg)
{
    QStringList list = msg.split("#");
    int cmd = msg.at(0).toLatin1();
    switch (cmd) {
    ///通用请求命令
    case CMD_UserLogin_L: parseUserLogin(list.at(1)); break;
    case CMD_UserInfo_I: parseUserInfo(list.at(1)); break;
    case CMD_ChangePswd_H: parseChangePswd(list.at(1)); break;
    case CMD_UserExit_X: parseUserExit(list.at(1)); break;
    case CMD_SelectShopInfo_S: parseShopInfo(list.at(1)); break;
    case CMD_SelectComInfo_C: parseCommodityInfo(list.at(1)); break;
    case CMD_GetComSort_G: parseSortInfo(list.at(1)); break;
    case CMD_GetFormInfo_F: parseFormInfo(list.at(1)); break;
    case CMD_GetClientInfo_N: parseClientInfo(list.at(1)); break;
    case CMD_GetMerchantInfo_A: parseMerchantInfo(list.at(1)); break;
    case CMD_GetShopcartInfo_V: parseShopcartInfo(list.at(1)); break;
    case CMD_UserInsert_W: parseUserInsert(list.at(1)); break;
    ///商家请求命令
    case CMD_InsertShop_T: parseInsertShop(list.at(1)); break;
    case CMD_DeleteShop_D: parseDeleteShop(list.at(1)); break;
    case CMD_DeleteForm_R: parseDeleteForm(list.at(1)); break;
    case CMD_UpdateMerInfo_O: parseUpdateMerInfo(list.at(1)); break;
    case CMD_UpdateComInfo_Q: parseUpdateComInfo(list.at(1)); break;
    case CMD_SendImage_P: parseUpdateUserImage(list.at(1)); break;
    ///顾客请求命令
    case CMD_DeleteShopcart_B: parseDeleteShopcart(list.at(1)); break;
    case CMD_InsertForm_J: parseInsertForm(list.at(1)); break;
    case CMD_InsertShopcart_k: parseInsertShopcart(list.at(1)); break;
    case CMD_UpdateCliInfo_Z: parseUpdateCliInfo(list.at(1)); break;
    default:
        break;
    }
}

void MsgSocket::parseUserInsert(QString data)
{
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        emit signalInsertUserResult(true);
    }else
    {
        emit signalInsertUserResult(false);
    }
}

void MsgSocket::parseUserLogin(QString data)
{
    qDebug() << "MsgSocket::parseUserLogin" << data;
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    if(RES_Down == res)
    {
        GlobalVars::g_localUser.setID(list.at(1));
        GlobalVars::g_localUser.setPswd(list.at(2));
        GlobalVars::g_localUser.setType(list.at(3));
        GlobalVars::g_localUser.setTime(list.at(4));
        emit signalUserLoginResult(true);
    }else
    {
        emit signalUserLoginResult(false);
    }
}

void MsgSocket::parseUserInfo(QString data)
{
    qDebug() << "MsgSocket::parseUserInfo" << data;
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    if(RES_Down == res)
    {
        if(GlobalVars::g_localUser.getType() == "商家")
        {
            GlobalVars::g_localMerchant.setID(list.at(1));
            GlobalVars::g_localMerchant.setImid(list.at(2));
            GlobalVars::g_localMerchant.setName(list.at(3));
            GlobalVars::g_localMerchant.setPhone(list.at(4));
            GlobalVars::g_localMerchant.setSite(list.at(5));
            GlobalVars::g_localMerchant.setTime(list.at(6));
            emit signalGainMerchantInfo(true);
        }else
        {
            GlobalVars::g_localClient.setID(list.at(1));
            GlobalVars::g_localClient.setImid(list.at(2));
            GlobalVars::g_localClient.setName(list.at(3));
            GlobalVars::g_localClient.setPhone(list.at(4));
            GlobalVars::g_localClient.setSite(list.at(5));
            GlobalVars::g_localClient.setTime(list.at(6));
            emit signalGainClientInfo(true);
        }
    }
}

void MsgSocket::parseShopInfo(QString data)
{
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        list.removeAt(0);

        for(int i = 0; i < list.length(); i = i + 5)
        {
            ShopInfo l_shopinfo;
            l_shopinfo.setID(list.at(i + 0));
            l_shopinfo.setMerid(list.at(i + 1));
            l_shopinfo.setName(list.at(i + 2));
            l_shopinfo.setType(list.at(i + 3));
            l_shopinfo.setTime(list.at(i + 4));

            GlobalVars::g_shopInfoList->append(l_shopinfo);
        }
        for(ShopInfoList::iterator it = GlobalVars::g_shopInfoList->begin();
            it != GlobalVars::g_shopInfoList->end(); it++)
        {
           GlobalVars::g_shopInfoMap.insert(it->getID(), it);
        }

        emit signalGetShopInfoResult(true);
    }else
    {
        emit signalGetShopInfoResult(false);
    }
}

void MsgSocket::parseCommodityInfo(QString data)
{
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        list.removeAt(0);

        for(int i = 0; i < list.length() - 1; i = i + 6)
        {
            CommodityInfo l_commodityinfo;
            l_commodityinfo.setID(list.at(i + 0));
            l_commodityinfo.setShid(list.at(i + 1));
            l_commodityinfo.setImid(list.at(i + 2));
            l_commodityinfo.setName(list.at(i + 3));
            l_commodityinfo.setSprice(list.at(i + 4));
            l_commodityinfo.setSex(list.at(i + 5));

            GlobalVars::g_commodityInfoList->append(l_commodityinfo);
        }
        for(CommodityInfoList::iterator it = GlobalVars::g_commodityInfoList->begin();
            it != GlobalVars::g_commodityInfoList->end(); it++)
        {
           GlobalVars::g_commodityInfoMap.insert(it->getID(), it);
        }

        emit signalGetCommodityInfoResult(true);
    }else
    {
        emit signalGetCommodityInfoResult(false);
    }
}

void MsgSocket::parseSortInfo(QString data)
{
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        list.removeAt(0);

        for(int i = 0; i < list.length() - 1; i = i + 5)
        {
            SortInfo l_sortinfo;
            l_sortinfo.setID(list.at(i + 0));
            l_sortinfo.setComid(list.at(i + 1));
            l_sortinfo.setBar(list.at(i + 2));
            l_sortinfo.setColour(list.at(i + 3));
            l_sortinfo.setNum(list.at(i + 4));

            GlobalVars::g_sortInfoList->append(l_sortinfo);
        }
        for(SortInfoList::iterator it = GlobalVars::g_sortInfoList->begin();
            it != GlobalVars::g_sortInfoList->end(); it++)
        {
           GlobalVars::g_sortInfoMap.insert(it->getID(), it);
        }

        emit signalGetSortInfoResult(true);
    }else
    {
        emit signalGetSortInfoResult(false);
    }
}

void MsgSocket::parseFormInfo(QString data)
{
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        list.removeAt(0);

        for(int i = 0; i < list.length() - 1; i = i + 6)
        {
            FormInfo l_forminfo;
            l_forminfo.setID(list.at(i + 0));
            l_forminfo.setComid(list.at(i + 1));
            l_forminfo.setCliid(list.at(i + 2));
            l_forminfo.setSoid(list.at(i + 3));
            l_forminfo.setTime(list.at(i + 4));
            l_forminfo.setNum(list.at(i + 5));

            GlobalVars::g_formInfoList->append(l_forminfo);
        }
        for(FormInfoList::iterator it = GlobalVars::g_formInfoList->begin();
            it != GlobalVars::g_formInfoList->end(); it++)
        {
           GlobalVars::g_formInfoMap.insert(it->getID(), it);
        }

        emit signalGetFormInfoResult(true);
    }else
    {
        emit signalGetFormInfoResult(false);
    }
}

void MsgSocket::parseClientInfo(QString data)
{
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        list.removeAt(0);

        for(int i = 0; i < list.length(); i = i + 6)
        {
            ClientInfo l_clientinfo;
            l_clientinfo.setID(list.at(i + 0));
            l_clientinfo.setImid(list.at(i + 1));
            l_clientinfo.setName(list.at(i + 2));
            l_clientinfo.setPhone(list.at(i + 3));
            l_clientinfo.setTime(list.at(i + 4));
            l_clientinfo.setSite(list.at(i + 5));

            GlobalVars::g_clientInfoList->append(l_clientinfo);
        }
        for(ClientInfoList::iterator it = GlobalVars::g_clientInfoList->begin();
            it != GlobalVars::g_clientInfoList->end(); it++)
        {
           GlobalVars::g_clientInfoMap.insert(it->getID(), it);
        }

        emit signalGetClientInfoResult(true);
    }else
    {
        emit signalGetClientInfoResult(false);
    }
}

void MsgSocket::parseMerchantInfo(QString data)
{
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        list.removeAt(0);

        for(int i = 0; i < list.length() - 1; i = i + 6)
        {
            MerchantInfo l_merchantinfo;
            l_merchantinfo.setID(list.at(i + 0));
            l_merchantinfo.setImid(list.at(i + 1));
            l_merchantinfo.setName(list.at(i + 2));
            l_merchantinfo.setPhone(list.at(i + 3));
            l_merchantinfo.setTime(list.at(i + 4));
            l_merchantinfo.setSite(list.at(i + 5));

            GlobalVars::g_merchantInfoList->append(l_merchantinfo);
        }
        for(MerchantInfoList::iterator it = GlobalVars::g_merchantInfoList->begin();
            it != GlobalVars::g_merchantInfoList->end(); it++)
        {
           GlobalVars::g_merchantInfoMap.insert(it->getID(), it);
        }

        emit signalGetMerchantInfoResult(true);
    }else
    {
        emit signalGetMerchantInfoResult(false);
    }
}

void MsgSocket::parseShopcartInfo(QString data)
{
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        list.removeAt(0);

        for(int i = 0; i < list.length(); i = i + 4)
        {
            ShopcartInfo l_shopcartinfo;
            l_shopcartinfo.setCliid(list.at(i + 0));
            l_shopcartinfo.setComid(list.at(i + 1));
            l_shopcartinfo.setSoid(list.at(i + 2));
            l_shopcartinfo.setNum(list.at(i + 3));


            GlobalVars::g_shopcartInfoList->append(l_shopcartinfo);
        }

        emit signalGetShopcartInfoResult(true);
    }else
    {
        emit signalGetShopcartInfoResult(false);
    }
}

///商家请求解析

//开设店铺
void MsgSocket::parseInsertShop(QString data)
{
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        emit signalInsertShopResult(true);
    }else
    {
        emit signalInsertShopResult(false);
    }
}

//注销店铺
void MsgSocket::parseDeleteShop(QString data)
{
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        emit signalDeleteShopResult(true);
    }else
    {
        emit signalDeleteShopResult(false);
    }
}

//删除订单
void MsgSocket::parseDeleteForm(QString data)
{
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        emit signalDeleteFormResult(true);
    }else
    {
        emit signalDeleteFormResult(false);
    }
}

//编辑资料
void MsgSocket::parseUpdateMerInfo(QString data)
{
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        emit signalUpdateMerchantResult(true);
    }else
    {
        emit signalUpdateMerchantResult(false);
    }
}

void MsgSocket::parseUpdateUserImage(QString data)
{
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        if(list.at(1) == GlobalVars::g_localMerchant.getID())
        {
            emit signalUpdateMerImageResult(true);
        }else
        {
            emit signalUpdateCliImageResult(true);
        }

    }else
    {
        if(list.at(1) == GlobalVars::g_localMerchant.getID())
        {
            emit signalUpdateMerImageResult(false);
        }else
        {
            emit signalUpdateCliImageResult(false);
        }
    }
}

//修改商品信息
void MsgSocket::parseUpdateComInfo(QString data)
{
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        emit signalUpdateCommodityResult(true);
    }else
    {
        emit signalUpdateCommodityResult(false);
    }
}

///顾客请求解析
//删除购物车
void MsgSocket::parseDeleteShopcart(QString data)
{
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        emit signalDeleteShopcartResult(true);
    }else
    {
        emit signalDeleteShopcartResult(false);
    }
}

//增加订单
void MsgSocket::parseInsertForm(QString data)
{
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        emit signalInsertFormResult(true);
    }else
    {
        emit signalInsertFormResult(false);
    }
}

//增加购物车
void MsgSocket::parseInsertShopcart(QString data)
{
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        emit signalInsertShopcartResult(true);
    }else
    {
        emit signalInsertShopcartResult(false);
    }
}


//修改密码
void MsgSocket::parseChangePswd(QString data)
{
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        emit signalChangePswdResult(true);
    }else
    {
        emit signalChangePswdResult(false);
    }
}

void MsgSocket::parseUserExit(QString data)
{
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    QString uid = list.at(1);
    if((RES_Down == res)&&(uid == GlobalVars::g_localUser.getID()))
    {
        qDebug() << "-------";
        emit signalUserLogoutResult(true);
    }
}

//编辑资料
void MsgSocket::parseUpdateCliInfo(QString data)
{
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        emit signalUpdateClientResult(true);
    }else
    {
        emit signalUpdateClientResult(false);
    }
}


///读取服务器发过来的socket
void MsgSocket::slotReadyRead()
{
    QDataStream in(m_tcpSocket);
    in.setVersion(QDataStream::Qt_4_6);

    if(m_tcpBlockSize == 0)
    {
        if(m_tcpSocket->bytesAvailable()<sizeof(quint16))
            return;

        in >> m_tcpBlockSize;
    }

    if(m_tcpSocket->bytesAvailable() < m_tcpBlockSize)
        return;

    QString msg;
    in >> m_msgType;

    if(m_msgType == MsgType_Text)
    {
        in >> msg;
        qDebug() << "Client Recv: " << msg;
        GlobalVars::g_msgQueue.enqueue(msg);
    }else
    {
        int i;
        QString id;
        in >> id;
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
                if(id == GlobalVars::g_commodityInfoList->at(i).getID())
                {
                    qDebug() << "Commodity: ";
                    GlobalVars::CommodityImageMap.insert(id, image);
                    emit signalGetComImageResult(true);
                    break;
                }
            }
            if(i >= GlobalVars::g_commodityInfoList->length())
            {
                for(i = 0; i < GlobalVars::g_merchantInfoList->length(); i++)
                {
                    if(id == GlobalVars::g_merchantInfoList->at(i).getID())
                    {
                        qDebug() << "User: ";
                        GlobalVars::UserImageMap.insert(id, image);
                        emit signalGetMerImageResult(true);
                        break;
                    }
                }
                if(i >= GlobalVars::g_merchantInfoList->length())
                {
                    qDebug() << "User: ";
                    GlobalVars::UserImageMap.insert(id, image);
                    emit signalGetUserImageResult(true);
                }
            }
        }
    }
    m_tcpBlockSize = 0;
}

///发送文本
void MsgSocket::slotSendMsg(QString msg)
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

    qDebug() << "Client Send: " << msg;
    m_tcpSocket->write(buffer);
}

//发送图片
void MsgSocket::slotImage(const QString &id, const QImage &image)
{
    QString l_id = id;

    m_msgType = MsgType_Image;
    QByteArray byteBuffer;
    QDataStream out(&byteBuffer, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);

    QBuffer buffer;
    buffer.open(QIODevice::ReadWrite);
    image.save(&buffer,"PNG");

    out << (quint16)0;
    out << m_msgType;
    out << l_id;
    out << buffer.data();
    out.device()->seek(0);
    out << (quint16)(buffer.size() - sizeof(quint16));

    qDebug() << byteBuffer.length();

    m_tcpSocket->write(byteBuffer);

    qDebug() << "void MsgSocket::slotImage(const QString &id, const QImage &image)";
}
