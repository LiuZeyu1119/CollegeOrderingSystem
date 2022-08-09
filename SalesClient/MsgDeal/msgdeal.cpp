#include "msgdeal.h"
#include <QStringBuilder>

QString MsgDeal::UserInsertMsg(QString id, QString pswd, QString type)
{
    ///注册用户请求
    QString msg = QString(CMD_UserInsert_W)
            % QString("#") % id
            % QString("|") % pswd
            % QString("|") % type;

    return msg;
}

QString MsgDeal::UserLoginMsg(QString id, QString pswd)
{
    ///用户登录请求
    QString msg = QString(CMD_UserLogin_L)
            % QString("#") % id
            % QString("|") % pswd;

    return msg;
}

QString MsgDeal::UserInfoMsg()
{
    ///个人信息请求
    QString msg = QString(CMD_UserInfo_I)
        % QString("#") % GlobalVars::g_localUser.getID()
        % QString("|") % GlobalVars::g_localUser.getType();

    return msg;
}

QString MsgDeal::UserImageMsg()
{
    ///个人头像请求
    QString msg = QString(CMD_SendImage_P)
        % QString("#") % GlobalVars::g_localUser.getID();
    if(GlobalVars::g_localMerchant.getID() != NULL)
    {
        msg = msg % QString("|") % GlobalVars::g_localMerchant.getImid();
    }else
    {
        msg = msg % QString("|") % GlobalVars::g_localClient.getImid();
    }

    return msg;
}

QString MsgDeal::ShopInfoMsg()
{
    ///商店信息请求
    QString msg;

    if(GlobalVars::g_localMerchant.getID() != NULL)
    {
        msg = QString(CMD_SelectShopInfo_S)% QString("#")
                % GlobalVars::g_localUser.getID();
    }else
    {
        msg = QString(CMD_SelectShopInfo_S)% QString("#")
                % GlobalVars::g_localUser.getID();
        for(int i = 0; i < GlobalVars::g_merchantInfoList->length(); i++)
        {
            msg = msg % "|" % GlobalVars::g_merchantInfoList->at(i).getID();
        }
    }

    return msg;
}

QString MsgDeal::CommodityInfoMsg()
{
    ///商品信息请求
    QString msg = QString(CMD_SelectComInfo_C)
        % QString("#") % GlobalVars::g_localUser.getID();

    for(int i = 0; i < GlobalVars::g_shopInfoList->length(); i++)
    {
        msg = msg % "|" % GlobalVars::g_shopInfoList->at(i).getID();
    }

    return msg;
}

QString MsgDeal::SortInfoMsg()
{
    ///商品规格信息请求
    QString msg = QString(CMD_GetComSort_G)
        % QString("#") % GlobalVars::g_localUser.getID();

    for(int i = 0; i < GlobalVars::g_commodityInfoList->length(); i++)
    {
        msg = msg % "|" % GlobalVars::g_commodityInfoList->at(i).getID();
    }

    return msg;
}

QString MsgDeal::ComImageMsg(QString id)
{
    ///商品图片请求
    QString msg = QString(CMD_SendImageS_E)
            % QString("#") % GlobalVars::g_localUser.getID()
            % "|" %id % ">" % GlobalVars::g_commodityInfoMap[id]->getImid();

    return msg;
}

QString MsgDeal::FormInfoMsg()
{
    ///订单信息请求
    QString msg = QString(CMD_GetFormInfo_F)
        % QString("#") % GlobalVars::g_localUser.getID();

    for(int i = 0; i < GlobalVars::g_commodityInfoList->length(); i++)
    {
        msg = msg % "|" % GlobalVars::g_commodityInfoList->at(i).getID();
    }

    return msg;
}

QString MsgDeal::ShopcartInfoMsg()
{
    ///购物车信息请求
    QString msg = QString(CMD_GetShopcartInfo_V)
        % QString("#") % GlobalVars::g_localUser.getID();

    return msg;
}

QString MsgDeal::ClientInfoMsg()
{
    ///顾客信息请求
    QString msg = QString(CMD_GetClientInfo_N)
        % QString("#") % GlobalVars::g_localUser.getID();

    for(int i = 0; i < GlobalVars::g_formInfoList->length(); i++)
    {
        msg = msg % "|" % GlobalVars::g_formInfoList->at(i).getCliid();
    }

    return msg;
}

QString MsgDeal::MerchantInfoMsg()
{
    ///商家信息请求
    QString msg = QString(CMD_GetMerchantInfo_A)
        % QString("#") % GlobalVars::g_localUser.getID();

    return msg;
}

QString MsgDeal::MerImageMsg(QString id)
{
    ///商家头像请求
    QString msg = QString(CMD_SendImage_P)
            % QString("#") % GlobalVars::g_localUser.getID()
            % "|" %id % ">" % GlobalVars::g_merchantInfoMap[id]->getImid();

    return msg;
}

QString MsgDeal::ChangePswdMsg(QString id, QString pswd)
{
    ///修改密码请求
    QString msg;
    msg = QString(CMD_ChangePswd_H) % QString("#") % id % "|" % pswd;

    return msg;
}

QString MsgDeal::InsertShop(QString id, QString merid, QString name, QString type)
{
    ///开设店铺请求
    QString msg;
    msg = QString(CMD_InsertShop_T) % QString("#")
            % id % "|" % merid % "|"
            % name % "|" % type;

    return msg;
}

QString MsgDeal::DeleteShop(QString merid, QString id)
{
    ///注销店铺请求
    QString msg;
    msg = QString(CMD_DeleteShop_D) % QString("#")
            % merid % "|" % id;

    return msg;
}

QString MsgDeal::DeleteForm(QString merid, QString id)
{
    ///删除订单请求
    QString msg;
    msg = QString(CMD_DeleteForm_R) % QString("#")
            % merid % "|" % id;

    return msg;
}

QString MsgDeal::DeleteShopcart(QString cliid, QString comid)
{
    ///删除购物车请求
    QString msg;
    msg = QString(CMD_DeleteShopcart_B) % QString("#")
            % cliid % "|" % comid;

    return msg;
}

QString MsgDeal::InsertForm(QString cliid, QString comid, QString soid, QString num)
{
    ///增加订单
    QString msg;
    msg = QString(CMD_InsertForm_J) % QString("#")
            % cliid % "|"
            % comid % "|"
            % soid % "|"
            % num;

    return msg;
}

QString MsgDeal::InsertShopcart(QString cliid, QString comid, QString soid, QString num)
{
    ///增加订单
    QString msg;
    msg = QString(CMD_InsertShopcart_k) % QString("#")
            % cliid % "|"
            % comid % "|"
            % soid % "|"
            % num;

    return msg;
}

QString MsgDeal::UpdateMerchant(QString name, QString phone, QString site)
{
    ///编辑商家资料
    QString msg;
    msg = QString(CMD_UpdateMerInfo_O) % QString("#")
            % GlobalVars::g_localMerchant.getID() % "|"
            % name % "|"
            % phone % "|"
            % site;
    return msg;
}

QString MsgDeal::UpdateCommodity(QString name, QString sprice, QString sex)
{
    ///编辑商品资料
    QString msg;
    msg = QString(CMD_UpdateComInfo_Q) % QString("#")
            % GlobalVars::g_localMerchant.getID() % "|"
            % name % "|"
            % sprice % "|"
            % sex;
    return msg;
}

QString MsgDeal::UpdateClient(QString name, QString phone, QString site)
{
    ///编辑商家资料
    QString msg;
    msg = QString(CMD_UpdateCliInfo_Z) % QString("#")
            % GlobalVars::g_localClient.getID() % "|"
            % name % "|"
            % phone % "|"
            % site;
    return msg;
}
