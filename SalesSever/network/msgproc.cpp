#include "msgproc.h"

#include "execsql.h"
#include <QStringBuilder>

#include <QBuffer>
#include <QFileDialog>
#include <QImageReader>


MsgProc::MsgProc(QThread *parent) :
    QThread(parent)
{
    m_isExit = false;
}

void MsgProc::exitThread(void)
{
    m_isExit = true;
}

///运行线程
void MsgProc::run()
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
void MsgProc::parseUserAsk(QString msg)
{
    QStringList list = msg.split("#");
    int cmd = msg.at(0).toLatin1();
    switch (cmd) {
    ///通用请求命令
    case CMD_UserInfo_I: parseUserInfo(list.at(1)); break;
    case CMD_ChangePswd_H: parseChangePswd(list.at(1)); break;
    case CMD_SendImage_P: parseSendImage(list.at(1)); break;
    case CMD_SendImageS_E: parseSendImagep(list.at(1)); break;
    ///商家请求命令
    case CMD_SelectShopInfo_S: parseMerSelectShopInfo(list.at(1)); break;
    case CMD_SelectComInfo_C: parseMerSelectComInfo(list.at(1)); break;
    case CMD_GetComSort_G: parseMerComSortInfo(list.at(1)); break;
    case CMD_GetFormInfo_F: parseMerFormInfo(list.at(1)); break;
    case CMD_GetClientInfo_N: parseMerClientInfo(list.at(1)); break;
    case CMD_InsertShop_T: parseInsertShop(list.at(1)); break;
    case CMD_DeleteShop_D: parseDeleteShop(list.at(1)); break;
    case CMD_DeleteForm_R: parseDeleteForm(list.at(1)); break;
    case CMD_UpdateMerInfo_O: parseUpdateMerchant(list.at(1)); break;
    case CMD_UpdateComInfo_Q: parseUpdateCommodity(list.at(1)); break;
    ///顾客请求命令
    case CMD_GetMerchantInfo_A: parseCliMerchantInfo(list.at(1)); break;
    case CMD_GetShopcartInfo_V: parseCliShopcartInfo(list.at(1)); break;
    case CMD_DeleteShopcart_B: parseDeleteShopcart(list.at(1)); break;
    case CMD_InsertForm_J: parseInsertForm(list.at(1)); break;
    case CMD_InsertShopcart_k: parseInsertShopcart(list.at(1)); break;
    case CMD_UpdateCliInfo_Z: parseUpdateClient(list.at(1)); break;
    default:
        break;
    }
}



void MsgProc::parseUserInfo(QString data)
{
    qDebug() << "MsgProc::parseUserInfo" << data;

    QStringList list = data.split("|");
    QString id = list.at(0);
    QString role = list.at(1);

    if(role == "商家")
    {
        if(GlobalVars::g_merchantInfoMap.contains(id))
        {
            MerchantInfoList::iterator it = GlobalVars::g_merchantInfoMap[id];

            QString msg = QString(CMD_UserInfo_I)
                    % QString("#!|") % it->getID()
                    % "|" % it->getImid()
                    % "|" % it->getName()
                    % "|" % it->getPhone()
                    % "|" % it->getSite()
                    % "|" % it->getTime();

            emit signalSendMsgToClient(id, msg);
        }
    }else if(role == "顾客")
    {
        if(GlobalVars::g_clientInfoMap.contains(id))
        {
            ClientInfoList::iterator it = GlobalVars::g_clientInfoMap[id];
            QString msg = QString(CMD_UserInfo_I)
                    % QString("#!|") % it->getID()
                    % "|" % it->getImid()
                    % "|" % it->getName()
                    % "|" % it->getPhone()
                    % "|" % it->getSite()
                    % "|" % it->getTime();
            emit signalSendMsgToClient(id, msg);
        }
    }else
    {
        QString msg = QString(CMD_UserInfo_I)
                % QString("#?|") % QString("Error: DataError");
        emit signalSendMsgToClient(id, msg);
    }

}

void MsgProc::parseSendImage(QString data)
{
    QStringList list = data.split("|");
    QString id = list.at(0);
    QString imid = list.at(1);

    emit signalImage(id, imid);
}

void MsgProc::parseSendImagep(QString data)
{
    QStringList list = data.split("|");
    QString id = list.at(0);

    emit signalImagep(id, list.at(1));
}

//修改密码
void MsgProc::parseChangePswd(QString data)
{
    qDebug() << "parseChangePswd: " << data;
    QStringList list = data.split("|");
    QString id = list.at(0);
    QString pswd = list.at(1);
    if(ExecSQL::modifyUserInfoForPswd(id, pswd))
    {
        QString msg = QString(CMD_ChangePswd_H)
                % QString("#!|");
        emit signalUpdateSql(true);
        emit signalSendMsgToClient(id, msg);
    }else
    {
        QString msg = QString(CMD_ChangePswd_H)
                % QString("#?|");
        emit signalSendMsgToClient(id, msg);
    }
}

///解析商家请求命令
//店铺
void MsgProc::parseMerSelectShopInfo(QString data)
{
    int m;
    QString shid;
    QStringList stream;
    for(m = 0; m < GlobalVars::g_shopInfoList->length(); m++)
    {
        if(data == GlobalVars::g_shopInfoList->at(m).getMerid())
        {
            break;
        }
    }

    if(GlobalVars::g_merchantInfoMap.contains(data)
            && m < GlobalVars::g_shopInfoList->length())    //判断map中data是否存在
    {
        QString msg;
        msg.clear();

        msg = QString(CMD_SelectShopInfo_S)
                % QString("#!");
        for(int i = 0; i < GlobalVars::g_shopInfoList->length(); i++)
        {
            if(data == GlobalVars::g_shopInfoList->at(i).getMerid())
            {
                shid = GlobalVars::g_shopInfoList->at(i).getID();
                stream.append(shid);
            }
        }

        for(int i = 0; i < stream.length(); i++)
        {

            ShopInfoList::iterator it = GlobalVars::g_shopInfoMap[stream.at(i)];
            msg = msg % "|" % it->getID()
            % "|" % it->getMerid()
            % "|" % it->getName()
            % "|" % it->getType()
            % "|" % it->getTime();
        }

        qDebug() << msg;
        emit signalSendMsgToClient(data, msg);
    }else if(data.split("|").length() > 1)
    {
        QStringList list = data.split("|");
        QString cliid = list.at(0);
        list.removeAt(0);

        if(GlobalVars::g_clientInfoMap.contains(cliid))
        {
            QString msg;
            msg.clear();

            msg = QString(CMD_SelectShopInfo_S)
                    % QString("#!");

            for(int i = 0; i < list.length(); i++)
            {
                for(int j = 0; j < GlobalVars::g_shopInfoList->length(); j++)
                {
                    if(list.at(i) == GlobalVars::g_shopInfoList->at(j).getMerid())
                    {
                        shid = GlobalVars::g_shopInfoList->at(j).getID();
                        stream.append(shid);
                    }
                }
            }
            for(int k = 0; k < stream.length(); k++)
            {
                ShopInfoList::iterator it = GlobalVars::g_shopInfoMap[stream.at(k)];
                msg = msg % "|" % it->getID()
                        % "|" % it->getMerid()
                        % "|" % it->getName()
                        % "|" % it->getType()
                        % "|" % it->getTime();
            }

            qDebug() << "--------------------";
            emit signalSendMsgToClient(cliid, msg);
        }else
        {
            QString msg = QString(CMD_SelectShopInfo_S)
                    % QString("#?|") % QString("Error: DataError");
            emit signalSendMsgToClient(cliid, msg);
        }
    }
    else
    {
        QString msg = QString(CMD_SelectShopInfo_S)
                % QString("#?|") % QString("Error: DataError");
        emit signalSendMsgToClient(data, msg);
    }

}

//商品
void MsgProc::parseMerSelectComInfo(QString data)
{
    QString comid;
    QStringList stream;
    QStringList list = data.split("|");
    QString merid = list.at(0);
    list.removeAt(0);
    if(GlobalVars::g_merchantInfoMap.contains(merid) || GlobalVars::g_clientInfoMap.contains(merid))
    { 
        QString msg;
        QString msg2;
        msg.clear();
        msg2.clear();
        msg = '|';
        msg2 = QString(CMD_SelectComInfo_C)
                % QString("#!");

        for(int i = 0; i < list.length(); i++)
        {
            for(int k = 0; k < GlobalVars::g_commodityInfoList->length(); k++)
            {
                if(list.at(i) == GlobalVars::g_commodityInfoList->at(k).getShid())
                {
                    comid = GlobalVars::g_commodityInfoList->at(k).getID();
                    stream.append(comid);
                    qDebug() << comid;
                }
            }
        }
        for(int j = 0; j < stream.length(); j++)
        {
            CommodityInfoList::iterator it = GlobalVars::g_commodityInfoMap[stream.at(j)];
            msg = msg % it->getID()
                    % "|" % it->getShid()
                    % "|" % it->getImid()
                    % "|" % it->getName()
                    % "|" % it->getSprice()
                    % "|" % it->getSex() % "|";

        }

        msg2 = msg2 % msg;
        qDebug() << "--------------------";
        emit signalSendMsgToClient(merid, msg2);

    }else
    {
        QString msg = QString(CMD_SelectComInfo_C)
                % QString("#?|") % QString("Error: DataError");
        emit signalSendMsgToClient(merid, msg);
    }
}

//商品规格
void MsgProc::parseMerComSortInfo(QString data)
{
    QStringList list = data.split("|");
    QString merid = list.at(0);
    list.removeAt(0);

    QString soid;
    QStringList stream;

    if(GlobalVars::g_merchantInfoMap.contains(merid) || GlobalVars::g_clientInfoMap.contains(merid))
    {
        QString msg;
        QString msg1;
        QString msg2;
        msg.clear();
        msg1.clear();
        msg2.clear();

        msg1 = '|';
        msg2 = QString(CMD_GetComSort_G)
                % QString("#!");

        for(int i = 0; i < list.length(); i++)
        {
            for(int k = 0; k < GlobalVars::g_sortInfoList->length(); k++)
            {
                if(list.at(i) == GlobalVars::g_sortInfoList->at(k).getComid())
                {
                    soid = GlobalVars::g_sortInfoList->at(k).getID();
                    stream.append(soid);
                }
            }
        }
        for(int j = 0; j < stream.length(); j++)
        {
            SortInfoList::iterator it = GlobalVars::g_sortInfoMap[stream.at(j)];
            msg = it->getID()
                    % "|" % it->getComid()
                    % "|" % it->getBar()
                    % "|" % it->getColour()
                    % "|" % it->getNum() % "|";
            msg1 = msg1 % msg;
        }

        msg2 = msg2 % msg1;
        emit signalSendMsgToClient(merid, msg2);
    }else
    {
        QString msg = QString(CMD_GetComSort_G)
                % QString("#?|") % QString("Error: DataError");
        emit signalSendMsgToClient(merid, msg);
    }
}

//订单
void MsgProc::parseMerFormInfo(QString data)
{
    QStringList list = data.split("|");
    QString merid = list.at(0);
    list.removeAt(0);

    QString foid;
    QStringList stream;

    if(GlobalVars::g_merchantInfoMap.contains(merid) || GlobalVars::g_clientInfoMap.contains(merid))
    {
        QString l_id;
        QString msg;
        QString msg2;
        msg.clear();
        msg2.clear();

        msg = '|';
        msg2 = QString(CMD_GetFormInfo_F)
                % QString("#!");
        for(int i = 0; i < GlobalVars::g_clientInfoList->length(); i++)
        {
            if(merid == GlobalVars::g_clientInfoList->at(i).getID())
            {
                l_id = merid;
                break;
            }
        }
        if(l_id == merid)
        {
            for(int i = 0; i < GlobalVars::g_formInfoList->length(); i++)
            {
                if(l_id == GlobalVars::g_formInfoList->at(i).getCliid())
                {
                    foid = GlobalVars::g_formInfoList->at(i).getID();
                    stream.append(foid);
                }
            }
            for(int j = 0; j < stream.length(); j++)
            {
                FormInfoList::iterator it = GlobalVars::g_formInfoMap[stream.at(j)];
                msg = msg % it->getID()
                        % "|" % it->getComid()
                        % "|" % it->getCliid()
                        % "|" % it->getSoid()
                        % "|" % it->getTime()
                        % "|" % it->getNum() % "|";
            }
            msg2 = msg2 % msg;
        }else
        {
            for(int i = 0; i < list.length(); i++)
            {
                for(int k = 0; k < GlobalVars::g_formInfoList->length(); k++)
                {
                    if(list.at(i) == GlobalVars::g_formInfoList->at(k).getComid())
                    {
                        foid = GlobalVars::g_formInfoList->at(k).getID();
                        stream.append(foid);
                    }
                }
            }
            for(int j = 0; j < stream.length(); j++)
            {
                FormInfoList::iterator it = GlobalVars::g_formInfoMap[stream.at(j)];
                msg = msg % it->getID()
                        % "|" % it->getComid()
                        % "|" % it->getCliid()
                        % "|" % it->getSoid()
                        % "|" % it->getTime()
                        % "|" % it->getNum() % "|";
            }

            msg2 = msg2 % msg;
        }

        emit signalSendMsgToClient(merid, msg2);
    }else
    {
        QString msg = QString(CMD_GetFormInfo_F)
                % QString("#?|") % QString("Error: DataError");
        emit signalSendMsgToClient(merid, msg);
    }
}

//顾客
void MsgProc::parseMerClientInfo(QString data)
{
    QStringList list = data.split("|");
    QString merid = list.at(0);
    list.removeAt(0);

    if(GlobalVars::g_merchantInfoMap.contains(merid))
    {
        QString msg;
        msg.clear();

        msg = QString(CMD_GetClientInfo_N)
                % QString("#!");

        for(int i = 0; i < list.length(); i++)
        {
             ClientInfoList::iterator it = GlobalVars::g_clientInfoMap[list.at(i)];
             msg = msg % "|" % it->getID()
                     % "|" % it->getImid()
                     % "|" % it->getName()
                     % "|" % it->getPhone()
                     % "|" % it->getTime()
                     % "|" % it->getSite();
        }
        emit signalSendMsgToClient(merid, msg);
    }else
    {
        QString msg = QString(CMD_GetClientInfo_N)
                % QString("#?|") % QString("Error: DataError");
        emit signalSendMsgToClient(merid, msg);
    }
}

//开设店铺
void MsgProc::parseInsertShop(QString data)
{
    QTime timeNow = QTime::currentTime();
    QString time = QDate::currentDate().toString(tr("yyyy年MM月dd日 dddd"))
                           + tr("  %1").arg(timeNow.toString());

    QStringList list = data.split("|");
    ShopInfo l_shopinfo;
    l_shopinfo.setID(list.at(0));
    l_shopinfo.setMerid(list.at(1));
    l_shopinfo.setName(list.at(2));
    l_shopinfo.setType(list.at(3));
    l_shopinfo.setTime(time);

    if(ExecSQL::addNewShopInfo(l_shopinfo))
    {
        QString msg = QString(CMD_InsertShop_T) % QString("#!");
        emit signalSendMsgToClient(list.at(1), msg);
        emit signalInsertShop(true);
    }else
    {
        QString msg = QString(CMD_InsertShop_T) % QString("#?");
        emit signalSendMsgToClient(list.at(1), msg);
        emit signalInsertShop(false);
    }
}

//注销店铺
void MsgProc::parseDeleteShop(QString data)
{
    QStringList list = data.split("|");
    QString merid = list.at(0);
    list.removeAt(0);

    if(GlobalVars::g_merchantInfoMap.contains(merid))
    {
        if(ExecSQL::removeShopInfo(list.at(0)))
        {
            QString msg = QString(CMD_DeleteShop_D) % QString("#!");
            emit signalSendMsgToClient(merid, msg);
            emit signalDeleteShop(true);
        }else
        {
            QString msg = QString(CMD_DeleteShop_D) % QString("#?");
            emit signalSendMsgToClient(merid, msg);
            emit signalDeleteShop(false);
        }
    }
}

//删除订单
void MsgProc::parseDeleteForm(QString data)
{
    QStringList list = data.split("|");
    QString merid = list.at(0);
    list.removeAt(0);

    if(GlobalVars::g_merchantInfoMap.contains(merid) || GlobalVars::g_clientInfoMap.contains(merid))
    {
        if(ExecSQL::removeFormInfo(list.at(0)))
        {
            QString msg = QString(CMD_DeleteForm_R) % QString("#!");
            emit signalSendMsgToClient(merid, msg);
            emit signalDeleteForm(true);
        }else
        {
            QString msg = QString(CMD_DeleteForm_R) % QString("#?");
            emit signalSendMsgToClient(merid, msg);
            emit signalDeleteForm(false);
        }
    }
}

//编辑资料
void MsgProc::parseUpdateMerchant(QString data)
{
    QStringList list = data.split("|");
    QString merid = list.at(0);
    list.removeAt(0);

    if(GlobalVars::g_merchantInfoMap.contains(merid))
    {
        if((ExecSQL::modifyMerchantInfoForName(merid, list.at(0)) == true)
                && (ExecSQL::modifyMerchantInfoForPhone(merid, list.at(1)) == true)
                && (ExecSQL::modifyMerchantInfoForSite(merid, list.at(2)) == true))
        {
            QString msg = QString(CMD_UpdateMerInfo_O) % QString("#!");
            emit signalSendMsgToClient(merid, msg);
            emit signalUpdateMerchant(true);
        }else
        {
            QString msg = QString(CMD_UpdateMerInfo_O) % QString("#?");
            emit signalSendMsgToClient(merid, msg);
            emit signalUpdateMerchant(true);
        }
    }
}

//修改商品信息
void MsgProc::parseUpdateCommodity(QString data)
{
    QStringList list = data.split("|");
    QString merid = list.at(0);
    list.removeAt(0);

    if(GlobalVars::g_merchantInfoMap.contains(merid))
    {
        QString id;
        for(int i = 0; i < GlobalVars::g_commodityInfoList->length(); i++)
        {
            if(list.at(0) == GlobalVars::g_commodityInfoList->at(i).getName())
            {
                id = GlobalVars::g_commodityInfoList->at(i).getID();
                break;
            }
        }

        if((ExecSQL::modifyCommodityInfoForName(id, list.at(0)) == true)
                && (ExecSQL::modifyCommodityInfoForSprice(id, list.at(1)) == true)
                && (ExecSQL::modifyCommodityInfoForSex(id, list.at(2)) == true))
        {
            QString msg = QString(CMD_UpdateComInfo_Q) % QString("#!");
            emit signalSendMsgToClient(merid, msg);
            emit signalUpdateCommodity(true);
        }else
        {
            QString msg = QString(CMD_UpdateComInfo_Q) % QString("#?");
            emit signalSendMsgToClient(merid, msg);
            emit signalUpdateCommodity(true);
        }
    }
}

///解析顾客请求命令
//商家
void MsgProc::parseCliMerchantInfo(QString data)
{

    if(GlobalVars::g_clientInfoMap.contains(data))
    {
        QString msg;
        QString msg2;
        msg.clear();
        msg2.clear();

        msg2 = QString(CMD_GetMerchantInfo_A)
                % QString("#!");
        msg = "|";

        for(int i = 0; i < GlobalVars::g_merchantInfoList->length(); i++)
        {
            MerchantInfoList *it = GlobalVars::g_merchantInfoList;
            msg = msg % it->at(i).getID()
                    % "|" %it->at(i).getImid()
                    % "|" %it->at(i).getName()
                    % "|" %it->at(i).getPhone()
                    % "|" %it->at(i).getTime()
                    % "|" %it->at(i).getSite() % "|";

        }
        msg2 = msg2 % msg;
        qDebug() << msg2;
        emit signalSendMsgToClient(data, msg2);
    }else
    {
        QString msg = QString(CMD_GetMerchantInfo_A)
                % QString("#?|") % QString("Error: DataError");
        emit signalSendMsgToClient(data, msg);
    }
}

//购物车
void MsgProc::parseCliShopcartInfo(QString data)
{
    QString msg;
    msg = QString(CMD_GetShopcartInfo_V) % QString("#!");
    if(GlobalVars::g_clientInfoMap.contains(data))
    {
        for(int i = 0; i < GlobalVars::g_shopcartInfoList->length(); i++)
        {
            if(data == GlobalVars::g_shopcartInfoList->at(i).getCliid())
            {
                ShopcartInfo it = GlobalVars::g_shopcartInfoList->at(i);
                msg = msg % "|" % it.getCliid()
                        % "|" % it.getComid()
                        % "|" % it.getSoid()
                        % "|" % it.getNum();
            }
        }
        emit signalSendMsgToClient(data, msg);
    }else
    {
        QString msg = QString(CMD_GetShopcartInfo_V)
                % QString("#?|") % QString("Error: DataError");
        emit signalSendMsgToClient(data, msg);
    }
}

//删除购物车
void MsgProc::parseDeleteShopcart(QString data)
{
    QStringList list = data.split("|");
    QString cliid = list.at(0);
    list.removeAt(0);

    if(GlobalVars::g_clientInfoMap.contains(cliid))
    {
        if(ExecSQL::removeShopcartInfo(cliid, list.at(0)))
        {
            QString msg = QString(CMD_DeleteShopcart_B) % QString("#!");
            emit signalSendMsgToClient(cliid, msg);
            emit signalDeleteShopcart(true);
        }else
        {
            QString msg = QString(CMD_DeleteShopcart_B) % QString("#?");
            emit signalSendMsgToClient(cliid, msg);
            emit signalDeleteShopcart(false);
        }
    }
}

//增加订单
void MsgProc::parseInsertForm(QString data)
{
    QStringList list = data.split("|");
    QString cliid = list.at(0);

    if(GlobalVars::g_clientInfoMap.contains(cliid))
    {
        FormInfo info;
        QTime timeone = QTime::currentTime();
        QString tid;
        tid = tr("%1").arg(timeone.toString());
        QStringList ttid = tid.split(':');
        QString id = QDate::currentDate().toString(tr("yyyyMMdd"))
                % ttid.at(0) % ttid.at(1) % ttid.at(2);


        QTime timeNow = QTime::currentTime();
        QString time = QDate::currentDate().toString(tr("yyyy年MM月dd日"))
                               + tr("-%1").arg(timeNow.toString());

        info.setID(id);
        info.setCliid(list.at(0));
        info.setComid(list.at(1));
        info.setSoid(list.at(2));
        info.setNum(list.at(3));
        info.setTime(time);

        QString shid = GlobalVars::g_commodityInfoMap[list.at(1)]->getShid();
        QString merid = GlobalVars::g_shopInfoMap[shid]->getMerid();

        if(ExecSQL::addNewFormInfo(info))
        {
            QString msg = QString(CMD_InsertForm_J) % QString("#!");
            emit signalSendMsgToClient(cliid, msg);
            emit signalSendMsgToClient(merid, msg);
            emit signalInsertForm(true);
        }else
        {
            QString msg = QString(CMD_InsertForm_J) % QString("#?");
            emit signalSendMsgToClient(cliid, msg);
            emit signalInsertForm(false);
        }
    }
}

//增加购物车
void MsgProc::parseInsertShopcart(QString data)
{
    QStringList list = data.split("|");
    QString cliid = list.at(0);

    if(GlobalVars::g_clientInfoMap.contains(cliid))
    {
        ShopcartInfo info;
        info.setCliid(list.at(0));
        info.setComid(list.at(1));
        info.setSoid(list.at(2));
        info.setNum(list.at(3));

        if(ExecSQL::addNewShopcartInfo(info))
        {
            QString msg = QString(CMD_InsertShopcart_k) % QString("#!");
            emit signalSendMsgToClient(cliid, msg);
            emit signalInsertShopcart(true);
        }else
        {
            QString msg = QString(CMD_InsertShopcart_k) % QString("#?");
            emit signalSendMsgToClient(cliid, msg);
            emit signalInsertShopcart(false);
        }
    }
}

//编辑资料
void MsgProc::parseUpdateClient(QString data)
{
    QStringList list = data.split("|");
    QString cliid = list.at(0);
    list.removeAt(0);

    if(GlobalVars::g_clientInfoMap.contains(cliid))
    {
        if((ExecSQL::modifyClientInfoForName(cliid, list.at(0)) == true)
                && (ExecSQL::modifyClientInfoForPhone(cliid, list.at(1)) == true)
                && (ExecSQL::modifyClientInfoForSite(cliid, list.at(2)) == true))
        {
            QString msg = QString(CMD_UpdateCliInfo_Z) % QString("#!");
            emit signalSendMsgToClient(cliid, msg);
            emit signalUpdateClient(true);
        }else
        {
            QString msg = QString(CMD_UpdateCliInfo_Z) % QString("#?");
            emit signalSendMsgToClient(cliid, msg);
            emit signalUpdateClient(true);
        }
    }
}
