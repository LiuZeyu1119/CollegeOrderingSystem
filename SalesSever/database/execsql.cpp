#include "execsql.h"

/*---------------------------------------UserInfo--------------------------------------------*/
void ExecSQL::searchAllUserInfos()
{
    QString queryString = QString("select * from userinfo");
    qDebug() << queryString;

    updateUserInfoList(queryString);
}

void ExecSQL::searchUserInfoForID(const QString &value)
{
    QString queryString = QString("select * from userinfo where user_id = '%1'").arg(value);
    qDebug() << queryString;

    updateUserInfoList(queryString);
}

void ExecSQL::searchUserInfoForType(const QString &value)
{
    QString queryString = QString("select * from userinfo where user_type = '%1'").arg(value);
    qDebug() << queryString;

    updateUserInfoList(queryString);
}

void ExecSQL::searchUserInfoForTime(const QString &value)
{
    QString queryString = QString("select * from userinfo where user_time = '%1'").arg(value);
    qDebug() << queryString;

    updateUserInfoList(queryString);
}

void ExecSQL::updateUserInfoList(const QString &sql)
{
    QSqlQuery query;
    GlobalVars::g_userInfoList->clear();
    GlobalVars::g_userInfoMap.clear();
    if(query.exec(sql))
    {
         int id_idx = query.record().indexOf("user_id");
         int pswd_idx = query.record().indexOf("user_pswd");
         int type_idx = query.record().indexOf("user_type");
         int time_idx = query.record().indexOf("user_time");

         while(query.next())
         {
            QString id = query.value(id_idx).toString();
            QString pswd = query.value(pswd_idx).toString();
            QString type = query.value(type_idx).toString();
            QString time = query.value(time_idx).toString();

            UserInfo info(id, pswd, type, time);
            GlobalVars::g_userInfoList->append(info);
         }

         for(UserInfoList::iterator it = GlobalVars::g_userInfoList->begin();
             it != GlobalVars::g_userInfoList->end(); it++)
         {
            GlobalVars::g_userInfoMap.insert(it->getID(), it);
         }
    }
}

bool ExecSQL::addNewUserInfo(const UserInfo &info)
{
    QSqlQuery query;
    QString queryString = QString("insert into userinfo(user_id, user_pswd, user_type, user_time) values('%1', '%2', '%3', '%4')")
            .arg(info.getID()).arg(info.getPswd()).arg(info.getType()).arg(info.getTime());
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::removeUserInfo(QString value)
{
    QSqlQuery query;
    QString queryString = QString("delete from userinfo where user_id = '%1'").arg(value);
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::modifyUserInfoForPswd(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update userinfo set user_pswd = '%1' where user_id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}


/*---------------------------------------ClientInfo---------------------------------------------*/
void ExecSQL::searchAllClientInfos()
{
    QString queryString = QString("select * from clientinfo");
    qDebug() << queryString;

    updateClientInfoList(queryString);
}

void ExecSQL::searchClientInfoForID(const QString &value)
{
    QString queryString = QString("select * from clientinfo where cli_id = '%1'").arg(value);
    qDebug() << queryString;

    updateClientInfoList(queryString);
}

void ExecSQL::searchClientInfoForName(const QString &value)
{
    QString queryString = QString("select * from clientinfo where cli_name = '%1'").arg(value);
    qDebug() << queryString;

    updateClientInfoList(queryString);
}

void ExecSQL::searchClientInfoForPhone(const QString &value)
{
    QString queryString = QString("select * from clientinfo where cli_phone = '%1'").arg(value);
    qDebug() << queryString;

    updateClientInfoList(queryString);
}

void ExecSQL::searchClientInfoForSite(const QString &value)
{
    QString queryString = QString("select * from clientinfo where cli_site = '%1'").arg(value);
    qDebug() << queryString;

    updateClientInfoList(queryString);
}

void ExecSQL::updateClientInfoList(const QString &sql)
{
    QSqlQuery query;
    GlobalVars::g_clientInfoList->clear();
    GlobalVars::g_clientInfoMap.clear();
    if(query.exec(sql))
    {
         int id_idx = query.record().indexOf("cli_id");
         int imid_idx = query.record().indexOf("cli_imid");
         int name_idx = query.record().indexOf("cli_name");
         int phone_idx = query.record().indexOf("cli_phone");
         int time_idx = query.record().indexOf("cli_time");
         int site_idx = query.record().indexOf("cli_site");

         while(query.next())
         {
            QString id = query.value(id_idx).toString();
            QString imid = query.value(imid_idx).toString();
            QString name = query.value(name_idx).toString();
            QString phone = query.value(phone_idx).toString();
            QString time = query.value(time_idx).toString();
            QString site = query.value(site_idx).toString();

            ClientInfo info(id, imid, name, phone, time, site);
            GlobalVars::g_clientInfoList->append(info);
         }

         for(ClientInfoList::iterator it = GlobalVars::g_clientInfoList->begin();
             it != GlobalVars::g_clientInfoList->end(); it++)
         {
            GlobalVars::g_clientInfoMap.insert(it->getID(), it);
         }
    }
}

bool ExecSQL::addNewClientInfo(const ClientInfo &info)
{
    QSqlQuery query;
    QString queryString = QString("insert into clientinfo(cli_id, cli_imid, cli_name, cli_phone, cli_time, cli_site) values('%1', '%2', '%3', '%4', '%5', '%6')")
            .arg(info.getID()).arg(info.getImid()).arg(info.getName()).
            arg(info.getPhone()).arg(info.getTime()).arg(info.getSite());
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::removeClientInfo(QString value)
{
    QSqlQuery query;
    QString queryString = QString("delete from clientinfo where cli_id = '%1'").arg(value);
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::modifyClientInfoForName(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update clientinfo set cli_name = '%1' where cli_id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::modifyClientInfoForPhone(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update clientinfo set cli_phone = '%1' where cli_id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::modifyClientInfoForSite(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update clientinfo set cli_site = '%1' where cli_id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}


/*---------------------------------------MerchantInfo---------------------------------------------*/
void ExecSQL::searchAllMerchantInfos()
{
    QString queryString = QString("select * from merchantinfo");
    qDebug() << queryString;

    updateMerchantInfoList(queryString);
}

void ExecSQL::searchMerchantInfoForID(const QString &value)
{
    QString queryString = QString("select * from merchantinfo where mer_id = '%1'").arg(value);
    qDebug() << queryString;

    updateMerchantInfoList(queryString);
}

void ExecSQL::searchMerchantInfoForName(const QString &value)
{
    QString queryString = QString("select * from merchantinfo where mer_name = '%1'").arg(value);
    qDebug() << queryString;

    updateMerchantInfoList(queryString);
}

void ExecSQL::searchMerchantInfoForPhone(const QString &value)
{
    QString queryString = QString("select * from merchantinfo where mer_phone = '%1'").arg(value);
    qDebug() << queryString;

    updateMerchantInfoList(queryString);
}

void ExecSQL::searchMerchantInfoForSite(const QString &value)
{
    QString queryString = QString("select * from merchantinfo where mer_site = '%1'").arg(value);
    qDebug() << queryString;

    updateMerchantInfoList(queryString);
}

void ExecSQL::updateMerchantInfoList(const QString &sql)
{
    QSqlQuery query;
    GlobalVars::g_merchantInfoList->clear();
    GlobalVars::g_merchantInfoMap.clear();
    if(query.exec(sql))
    {
         int id_idx = query.record().indexOf("mer_id");
         int imid_idx = query.record().indexOf("mer_imid");
         int name_idx = query.record().indexOf("mer_name");
         int phone_idx = query.record().indexOf("mer_phone");
         int time_idx = query.record().indexOf("mer_time");
         int site_idx = query.record().indexOf("mer_site");

         while(query.next())
         {
            QString id = query.value(id_idx).toString();
            QString imid = query.value(imid_idx).toString();
            QString name = query.value(name_idx).toString();
            QString phone = query.value(phone_idx).toString();
            QString time = query.value(time_idx).toString();
            QString site = query.value(site_idx).toString();

            MerchantInfo info(id, imid, name, phone, time, site);
            GlobalVars::g_merchantInfoList->append(info);
         }

         for(MerchantInfoList::iterator it = GlobalVars::g_merchantInfoList->begin();
             it != GlobalVars::g_merchantInfoList->end(); it++)
         {
            GlobalVars::g_merchantInfoMap.insert(it->getID(), it);
         }
    }
}

bool ExecSQL::addNewMerchantInfo(const MerchantInfo &info)
{
    QSqlQuery query;
    QString queryString = QString("insert into merchantinfo values('%1', '%2', '%3', '%4', '%5', '%6')")
            .arg(info.getID()).arg(info.getImid()).arg(info.getName()).
            arg(info.getPhone()).arg(info.getTime()).arg(info.getSite());
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::removeMerchantInfo(QString value)
{
    QSqlQuery query;
    QString queryString = QString("delete from merchantinfo where mer_id = '%1'").arg(value);
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::modifyMerchantInfoForName(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update merchantinfo set mer_name = '%1' where mer_id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::modifyMerchantInfoForPhone(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update merchantinfo set mer_phone = '%1' where mer_id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::modifyMerchantInfoForSite(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update merchantinfo set mer_site = '%1' where mer_id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}


/*---------------------------------------CommodityInfo---------------------------------------------*/
void ExecSQL::searchAllCommodityInfos()
{
    QString queryString = QString("select * from commodityinfo");
    qDebug() << queryString;

    updateCommodityInfoList(queryString);
}

void ExecSQL::searchCommodityInfoForID(const QString &value)
{
    QString queryString = QString("select * from commodityinfo where com_id = '%1'").arg(value);
    qDebug() << queryString;

    updateCommodityInfoList(queryString);
}

void ExecSQL::searchCommodityInfoForShid(const QString &value)
{
    QString queryString = QString("select * from commodityinfo where com_shopid = '%1'").arg(value);
    qDebug() << queryString;

    updateCommodityInfoList(queryString);
}

void ExecSQL::searchCommodityInfoForName(const QString &value)
{
    QString queryString = QString("select * from commodityinfo where com_name = '%1'").arg(value);
    qDebug() << queryString;

    updateCommodityInfoList(queryString);
}

void ExecSQL::searchCommodityInfoForSprice(const QString &value)
{
    QString queryString = QString("select * from commodityinfo where com_sprice = '%1'").arg(value);
    qDebug() << queryString;

    updateCommodityInfoList(queryString);
}

void ExecSQL::searchCommodityInfoForSex(const QString &value)
{
    QString queryString = QString("select * from commodityinfo where com_sex = '%1'").arg(value);
    qDebug() << queryString;

    updateMerchantInfoList(queryString);
}

QStringList ExecSQL:: searchCommodityID(const QString &value)
{
    QStringList stream;
    QString sql = QString("select com_id from commodityinfo where com_shopid = '%1'").arg(value);
    QSqlQuery query;
    if(query.exec(sql))
    {
        int id_idx = query.record().indexOf("com_id");
        while(query.next())
        {
            QString id = query.value(id_idx).toString();
            stream.append(id);
        }
    }

    return stream;
}

void ExecSQL::updateCommodityInfoList(const QString &sql)
{
    QSqlQuery query;
    GlobalVars::g_commodityInfoList->clear();
    GlobalVars::g_commodityInfoMap.clear();
    if(query.exec(sql))
    {
         int id_idx = query.record().indexOf("com_id");
         int shid_idx = query.record().indexOf("com_shopid");
         int imid_idx = query.record().indexOf("com_imid");
         int name_idx = query.record().indexOf("com_name");
         int sprice_idx = query.record().indexOf("com_sprice");
         int sex_idx = query.record().indexOf("com_sex");

         while(query.next())
         {
            QString id = query.value(id_idx).toString();
            QString imid = query.value(imid_idx).toString();
            QString name = query.value(name_idx).toString();
            QString shid = query.value(shid_idx).toString();
            QString sprice = query.value(sprice_idx).toString();
            QString sex = query.value(sex_idx).toString();

            CommodityInfo info(id, shid, imid, name, sprice, sex);
            GlobalVars::g_commodityInfoList->append(info);
         }

         for(CommodityInfoList::iterator it = GlobalVars::g_commodityInfoList->begin();
             it != GlobalVars::g_commodityInfoList->end(); it++)
         {
            GlobalVars::g_commodityInfoMap.insert(it->getID(), it);
         }
    }
}

bool ExecSQL::addNewCommodityInfo(const CommodityInfo &info)
{
    QSqlQuery query;
    QString queryString = QString("insert into commodityinfo values('%1', '%2', '%3', %4, %5, %6)")
            .arg(info.getID()).arg(info.getShid()).arg(info.getImid()).
            arg(info.getName()).arg(info.getSprice().arg(info.getSex()));
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::removeCommodityInfo(QString value)
{
    QSqlQuery query;
    QString queryString = QString("delete from commodityinfo where com_id = '%1'").arg(value);
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::modifyCommodityInfoForName(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update commodityinfo set com_name = '%1' where com_id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::modifyCommodityInfoForShid(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update commodityinfo set com_shopid = '%1' where com_id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::modifyCommodityInfoForSex(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update commodityinfo set com_sex = '%1' where com_id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::modifyCommodityInfoForSprice(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update commodityinfo set com_sprice = '%1' where com_id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}

/*---------------------------------------ShopInfo---------------------------------------------*/
void ExecSQL::searchAllShopInfos()
{
    QString queryString = QString("select * from shopinfo");
    qDebug() << queryString;

    updateShopInfoList(queryString);
}

void ExecSQL::searchShopInfoForID(const QString &value)
{
    QString queryString = QString("select * from shopinfo where sh_id = '%1'").arg(value);
    qDebug() << queryString;

    updateShopInfoList(queryString);
}

void ExecSQL::searchShopInfoForName(const QString &value)
{
    QString queryString = QString("select * from shopinfo where sh_name = '%1'").arg(value);
    qDebug() << queryString;

    updateShopInfoList(queryString);
}

void ExecSQL::searchShopInfoForMerid(const QString &value)
{
    QString queryString = QString("select * from shopinfo where sh_merid = '%1'").arg(value);
    qDebug() << queryString;

    updateShopInfoList(queryString);
}

void ExecSQL::searchShopInfoForType(const QString &value)
{
    QString queryString = QString("select * from shopinfo where sh_type = '%1'").arg(value);
    qDebug() << queryString;

    updateShopInfoList(queryString);
}

QStringList ExecSQL::searchShopID(const QString &value)
{
    QStringList stream;
    QString sql = QString("select sh_id from shopinfo, merchantinfo where merchantinfo.mer_id = '%1' and merchantinfo.mer_id = shopinfo.sh_merid").arg(value);
    QSqlQuery query;
    if(query.exec(sql))
    {
        int id_idx = query.record().indexOf("sh_id");
        while(query.next())
        {
            QString id = query.value(id_idx).toString();
            stream.append(id);
        }
    }

    return stream;
}

void ExecSQL::updateShopInfoList(const QString &sql)
{
    QSqlQuery query;
    GlobalVars::g_shopInfoList->clear();
    GlobalVars::g_shopInfoMap.clear();
    if(query.exec(sql))
    {
         int id_idx = query.record().indexOf("sh_id");
         int merid_idx = query.record().indexOf("sh_merid");
         int name_idx = query.record().indexOf("sh_name");
         int type_idx = query.record().indexOf("sh_type");
         int time_idx = query.record().indexOf("sh_time");

         while(query.next())
         {
            QString id = query.value(id_idx).toString();
            QString merid = query.value(merid_idx).toString();
            QString name = query.value(name_idx).toString();
            QString type = query.value(type_idx).toString();
            QString time = query.value(time_idx).toString();

            ShopInfo info(id, merid, name, type, time);
            GlobalVars::g_shopInfoList->append(info);
         }

         for(ShopInfoList::iterator it = GlobalVars::g_shopInfoList->begin();
             it != GlobalVars::g_shopInfoList->end(); it++)
         {
            GlobalVars::g_shopInfoMap.insert(it->getID(), it);
         }
    }
}

bool ExecSQL::addNewShopInfo(const ShopInfo &info)
{
    QSqlQuery query;
    QString queryString = QString("insert into shopinfo values('%1', '%2', '%3', '%4', '%5')")
            .arg(info.getID()).arg(info.getMerid()).arg(info.getName()).
            arg(info.getType()).arg(info.getTime());
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::removeShopInfo(QString value)
{
    QSqlQuery query;
    QString queryString = QString("delete from shopinfo where sh_id = '%1'").arg(value);
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::modifyShopInfoForName(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update shopinfo set sh_name = '%1' where sh_id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::modifyShopInfoForType(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update shopinfo set sh_type = '%1' where sh_id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::modifyShopInfoForMerid(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update shopinfo set sh_merid = '%1' where mer_id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}


/*---------------------------------------SortInfo---------------------------------------------*/
void ExecSQL::searchAllSortInfos()
{
    QString queryString = QString("select * from sortinfo");
    qDebug() << queryString;

    updateSortInfoList(queryString);
}

void ExecSQL::searchSortInfoForID(const QString &value)
{
    QString queryString = QString("select * from sortinfo where so_id = '%1'").arg(value);
    qDebug() << queryString;

    updateSortInfoList(queryString);
}

void ExecSQL::searchSortInfoForComid(const QString &value)
{
    QString queryString = QString("select * from sortinfo where so_comid = '%1'").arg(value);
    qDebug() << queryString;

    updateSortInfoList(queryString);
}

void ExecSQL::searchSortInfoForBar(const QString &value)
{
    QString queryString = QString("select * from sortinfo where so_bar = '%1'").arg(value);
    qDebug() << queryString;

    updateSortInfoList(queryString);
}

void ExecSQL::searchSortInfoForColour(const QString &value)
{
    QString queryString = QString("select * from sortinfo where so_colour = '%1'").arg(value);
    qDebug() << queryString;

    updateSortInfoList(queryString);
}

void ExecSQL::searchSortInfoForNum(const QString &value)
{
    QString queryString = QString("select * from sortinfo where so_num = '%1'").arg(value);
    qDebug() << queryString;

    updateSortInfoList(queryString);
}

QStringList ExecSQL::searchSortID(const QString &value)
{
    QStringList stream;
    QString sql = QString("select so_id from sortinfo where so_comid = '%1'").arg(value);
    QSqlQuery query;
    if(query.exec(sql))
    {
        int id_idx = query.record().indexOf("so_id");
        while(query.next())
        {
            QString id = query.value(id_idx).toString();
            stream.append(id);
        }
    }

    return stream;
}

void ExecSQL::updateSortInfoList(const QString &sql)
{
    QSqlQuery query;
    GlobalVars::g_sortInfoList->clear();
    GlobalVars::g_sortInfoMap.clear();
    if(query.exec(sql))
    {
         int id_idx = query.record().indexOf("so_id");
         int comid_idx = query.record().indexOf("so_comid");
         int bar_idx = query.record().indexOf("so_bar");
         int colour_idx = query.record().indexOf("so_colour");
         int num_idx = query.record().indexOf("so_num");

         while(query.next())
         {
            QString id = query.value(id_idx).toString();
            QString commid = query.value(comid_idx).toString();
            QString bar = query.value(bar_idx).toString();
            QString colour = query.value(colour_idx).toString();
            QString num = query.value(num_idx).toString();

            SortInfo info(id, commid, bar, colour, num);
            GlobalVars::g_sortInfoList->append(info);
         }

         for(SortInfoList::iterator it = GlobalVars::g_sortInfoList->begin();
             it != GlobalVars::g_sortInfoList->end(); it++)
         {
            GlobalVars::g_sortInfoMap.insert(it->getID(), it);
         }
    }
}

bool ExecSQL::addNewSortInfo(const SortInfo &info)
{
    QSqlQuery query;
    QString queryString = QString("insert into sortinfo values('%1', '%2', '%3', %4, %5)")
            .arg(info.getID()).arg(info.getComid()).arg(info.getBar()).
            arg(info.getColour()).arg(info.getNum());
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::removeSortInfo(QString value)
{
    QSqlQuery query;
    QString queryString = QString("delete from sortinfo where so_id = '%1'").arg(value);
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::modifySortInfoForBar(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update sortinfo set com_name = '%1' where so_id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::modifySortInfoForColour(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update sortinfo set mer_shopid = '%1' where so_id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::modifySortInfoForNum(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update sortinfo set com_sex = '%1' where so_id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}


/*---------------------------------------PhotoInfo---------------------------------------------*/
void ExecSQL::searchAllPhotoInfos()
{
    QString queryString = QString("select * from imageinfo");
    qDebug() << queryString;

    updatePhotoInfoList(queryString);
}

void ExecSQL::searchPhotoInfoForID(const QString &value)
{
    QString queryString = QString("select * from imageinfo where im_id = '%1'").arg(value);
    qDebug() << queryString;

    updatePhotoInfoList(queryString);
}



void ExecSQL::searchPhotoInfoForName(const QString &value)
{
    QString queryString = QString("select * from imageinfo where im_name = '%1'").arg(value);
    qDebug() << queryString;

    updatePhotoInfoList(queryString);
}

void ExecSQL::searchPhotoInfoForSite(const QString &value)
{
    QString queryString = QString("select * from imageinfo where im_site = '%1'").arg(value);
    qDebug() << queryString;

    updatePhotoInfoList(queryString);
}

QString ExecSQL::searchPhotoSite(const QString &value)
{
    QString site;
    QString sql = QString("select im_site from imageinfo where im_id = '%1'").arg(value);
    QSqlQuery query;
    if(query.exec(sql))
    {
         int site_idx = query.record().indexOf("im_site");
         while(query.next())
         {
             site = query.value(site_idx).toString();
         }
    }

    return site;
}

void ExecSQL::updatePhotoInfoList(const QString &sql)
{
    QSqlQuery query;
    GlobalVars::g_photoInfoList->clear();
    GlobalVars::g_photoInfoMap.clear();
    if(query.exec(sql))
    {
         int id_idx = query.record().indexOf("im_id");
         int name_idx = query.record().indexOf("im_name");
         int site_idx = query.record().indexOf("im_site");

         while(query.next())
         {
            QString id = query.value(id_idx).toString();
            QString name = query.value(name_idx).toString();
            QString site = query.value(site_idx).toString();

            PhotoInfo info(id, name, site);
            GlobalVars::g_photoInfoList->append(info);
         }

         for(PhotoInfoList::iterator it = GlobalVars::g_photoInfoList->begin();
             it != GlobalVars::g_photoInfoList->end(); it++)
         {
            GlobalVars::g_photoInfoMap.insert(it->getID(), it);
         }
    }
}

bool ExecSQL::addNewPhotoInfo(const PhotoInfo &info)
{
    QSqlQuery query;
    QString queryString = QString("insert into imageinfo values('%1', '%2', '%3')")
            .arg(info.getID()).arg(info.getName()).arg(info.getSite());
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::removePhotoInfo(QString value)
{
    QSqlQuery query;
    QString queryString = QString("delete from imageinfo where im_id = '%1'").arg(value);
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::modifyPhotoInfoForName(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update imageinfo set im_name = '%1' where im_id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}


bool ExecSQL::modifyPhotoInfoForSite(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update imageinfo set im_site = '%1' where im_id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}


/*---------------------------------------FormInfo---------------------------------------------*/
void ExecSQL::searchAllFormInfos()
{
    QString queryString = QString("select * from forminfo");
    qDebug() << queryString;

    updateFormInfoList(queryString);
}

void ExecSQL::searchFormInfoForID(const QString &value)
{
    QString queryString = QString("select * from forminfo where fo_id = '%1'").arg(value);
    qDebug() << queryString;

    updateFormInfoList(queryString);
}



void ExecSQL::searchFormInfoForComid(const QString &value)
{
    QString queryString = QString("select * from forminfo where fo_comid = '%1'").arg(value);
    qDebug() << queryString;

    updateFormInfoList(queryString);
}

void ExecSQL::searchFormInfoForCliid(const QString &value)
{
    QString queryString = QString("select * from forminfo where fo_cliid = '%1'").arg(value);
    qDebug() << queryString;

    updateFormInfoList(queryString);
}

void ExecSQL::searchFormInfoForTime(const QString &value)
{
    QString queryString = QString("select * from forminfo where fo_time = '%1'").arg(value);
    qDebug() << queryString;

    updateFormInfoList(queryString);
}

QStringList ExecSQL::searchFormID(const QString &value)
{
    QStringList stream;
    QString sql = QString("select fo_id from forminfo where fo_comid = '%1'").arg(value);
    QSqlQuery query;
    if(query.exec(sql))
    {
        int id_idx = query.record().indexOf("fo_id");
        while(query.next())
        {
            QString id = query.value(id_idx).toString();
            stream.append(id);
        }
    }

    return stream;
}

QStringList ExecSQL::searchFormIdToCli(const QString &value)
{
    QStringList stream;
    QString sql = QString("select fo_id from forminfo where fo_cliid = '%1'").arg(value);
    QSqlQuery query;
    if(query.exec(sql))
    {
        int id_idx = query.record().indexOf("fo_id");
        while(query.next())
        {
            QString id = query.value(id_idx).toString();
            stream.append(id);
        }
    }

    return stream;
}

void ExecSQL::updateFormInfoList(const QString &sql)
{
    QSqlQuery query;
    GlobalVars::g_formInfoList->clear();
    GlobalVars::g_formInfoMap.clear();
    if(query.exec(sql))
    {
         int id_idx = query.record().indexOf("fo_id");
         int comid_idx = query.record().indexOf("fo_comid");
         int cliid_idx = query.record().indexOf("fo_cliid");
         int soid_idx = query.record().indexOf("fo_soid");
         int time_idx = query.record().indexOf("fo_time");
         int num_idx = query.record().indexOf("fo_num");

         while(query.next())
         {
            QString id = query.value(id_idx).toString();
            QString comid = query.value(comid_idx).toString();
            QString cliid = query.value(cliid_idx).toString();
            QString soid = query.value(soid_idx).toString();
            QString time = query.value(time_idx).toString();
            QString num = query.value(num_idx).toString();

            FormInfo info(id, comid, cliid, soid, time, num);
            GlobalVars::g_formInfoList->append(info);
         }

         for(FormInfoList::iterator it = GlobalVars::g_formInfoList->begin();
             it != GlobalVars::g_formInfoList->end(); it++)
         {
            GlobalVars::g_formInfoMap.insert(it->getID(), it);
         }
    }
}

bool ExecSQL::addNewFormInfo(const FormInfo &info)
{
    QSqlQuery query;
    QString queryString = QString("insert into forminfo values('%1', '%2', '%3', '%4', '%5', '%6')")
            .arg(info.getID()).arg(info.getComid()).arg(info.getCliid()).
            arg(info.getSoid()).arg(info.getTime()).arg(info.getNum());
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::removeFormInfo(QString value)
{
    QSqlQuery query;
    QString queryString = QString("delete from forminfo where fo_id = '%1'").arg(value);
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::modifyFormInfoForComid(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update forminfo set fo_comid = '%1' where im_id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}


bool ExecSQL::modifyFormInfoForSoid(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update forminfo set fo_soid = '%1' where im_id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::modifyFormInfoForNum(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update forminfo set fo_num = '%1' where im_id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}


/*---------------------------------------ShopcartInfo---------------------------------------------*/
void ExecSQL::searchAllShopcartInfos()
{
    QString queryString = QString("select * from shopcartinfo");
    qDebug() << queryString;

    updateShopcartInfoList(queryString);
}

void ExecSQL::searchShopcartInfoForComid(const QString &value)
{
    QString queryString = QString("select * from shopcartinfo where ca_comid = '%1'").arg(value);
    qDebug() << queryString;

    updateShopcartInfoList(queryString);
}

void ExecSQL::searchShopcartInfoForCliid(const QString &value)
{
    QString queryString = QString("select * from shopcartinfo where ca_cliid = '%1'").arg(value);
    qDebug() << queryString;

    updateShopcartInfoList(queryString);
}


void ExecSQL::updateShopcartInfoList(const QString &sql)
{
    QSqlQuery query;
    GlobalVars::g_shopcartInfoList->clear();
    GlobalVars::g_shopcartInfoMap.clear();
    if(query.exec(sql))
    {
         int comid_idx = query.record().indexOf("ca_comid");
         int cliid_idx = query.record().indexOf("ca_cliid");
         int soid_idx = query.record().indexOf("ca_soid");
         int num_idx = query.record().indexOf("ca_num");

         while(query.next())
         {
            QString comid = query.value(comid_idx).toString();
            QString cliid = query.value(cliid_idx).toString();
            QString soid = query.value(soid_idx).toString();
            QString num = query.value(num_idx).toString();

            ShopcartInfo info(cliid, comid, soid, num);
            GlobalVars::g_shopcartInfoList->append(info);
         }

//         for(ShopcartInfoList::iterator it = GlobalVars::g_shopcartInfoList->begin();
//             it != GlobalVars::g_shopcartInfoList->end(); it++)
//         {
//            GlobalVars::g_shopcartInfoMap.insert(it->get(), it);
//         }
    }
}

bool ExecSQL::addNewShopcartInfo(const ShopcartInfo &info)
{
    QSqlQuery query;
    QString queryString = QString("insert into shopcartinfo values('%1', '%2', '%3', '%4')")
            .arg(info.getCliid()).arg(info.getComid()).
            arg(info.getSoid()).arg(info.getNum());
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::removeShopcartInfo(QString cliid, QString comid)
{
    QSqlQuery query;
    QString queryString = QString("delete from shopcartinfo where ca_cliid = '%1' and ca_comid = '%2'").arg(cliid).arg(comid);
    qDebug() << queryString;
    return query.exec(queryString);
}


bool ExecSQL::modifyShopcartInfoForSoid(const QString &cliid, const QString &comid, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update shopcartinfo set ca_soid = '%1' where ca_cliid = '%2' and ca_comid = '%3'").arg(value).arg(cliid).arg(comid);
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::modifyShopcartInfoForNum(const QString &cliid, const QString &comid, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update shopcartinfo set ca_num = '%1' where ca_cliid = '%2' and ca_comid = '%3'").arg(value).arg(cliid).arg(comid);
    qDebug() << queryString;
    return query.exec(queryString);
}


/*---------------------------------------DialogInfo---------------------------------------------*/
void ExecSQL::searchAllDialogInfos()
{
    QString queryString = QString("select * from dialoginfo");
    qDebug() << queryString;

    updateDialogInfoList(queryString);
}

void ExecSQL::searchDialogInfoForMerid(const QString &value)
{
    QString queryString = QString("select * from dialoginfo where dia_merid = '%1'").arg(value);
    qDebug() << queryString;

    updateDialogInfoList(queryString);
}

void ExecSQL::searchDialogInfoForCliid(const QString &value)
{
    QString queryString = QString("select * from dialoginfo where dia_cliid = '%1'").arg(value);
    qDebug() << queryString;

    updateDialogInfoList(queryString);
}

void ExecSQL::searchDialogInfoForTime(const QString &value)
{
    QString queryString = QString("select * from dialoginfo where dia_time = '%1'").arg(value);
    qDebug() << queryString;

    updateDialogInfoList(queryString);
}

void ExecSQL::updateDialogInfoList(const QString &sql)
{
    QSqlQuery query;
    GlobalVars::g_dialogInfoList->clear();
    GlobalVars::g_dialogInfoMap.clear();
    if(query.exec(sql))
    {
         int merid_idx = query.record().indexOf("dia_merid");
         int cliid_idx = query.record().indexOf("dia_cliid");
         int mer_idx = query.record().indexOf("dia_mer");
         int cli_idx = query.record().indexOf("dia_cli");
         int time_idx = query.record().indexOf("dia_time");

         while(query.next())
         {
            QString merid = query.value(merid_idx).toString();
            QString cliid = query.value(cliid_idx).toString();
            QString mer = query.value(mer_idx).toString();
            QString cli = query.value(cli_idx).toString();
            QString time = query.value(time_idx).toString();

            DialogInfo info(merid, cliid, mer, cli, time);
            GlobalVars::g_dialogInfoList->append(info);
         }

//         for(DialogInfoList::iterator it = GlobalVars::g_dialogInfoList->begin();
//             it != GlobalVars::g_dialogInfoList->end(); it++)
//         {
//            GlobalVars::g_dialogInfoMap.insert(it->getID(), it);
//         }
    }
}

bool ExecSQL::addNewDialogInfo(const DialogInfo &info)
{
    QSqlQuery query;
    QString queryString = QString("insert into dialoginfo values('%1', '%2', '%3', '%4', '%5')")
            .arg(info.getMerid()).arg(info.getCliid()).
            arg(info.getMersay()).arg(info.getClisay()).arg(info.getTime());
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::removeDialogInfo(QString value)
{
    QSqlQuery query;
    QString queryString = QString("delete from dialoginfo where dia_merid = '%1'").arg(value);
    qDebug() << queryString;
    return query.exec(queryString);
}




