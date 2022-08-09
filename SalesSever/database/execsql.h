#ifndef EXECSQL_H
#define EXECSQL_H
#include "globalvars.h"

#include <QDebug>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlTableModel>
#include <QStringList>

class ExecSQL
{
public:
    /*--------------------UserInfo--------------------------*/
    static void searchAllUserInfos();
    static void searchUserInfoForID(const QString &value);
    static void searchUserInfoForType(const QString &value);
    static void searchUserInfoForTime(const QString &value);
    static void updateUserInfoList(const QString &sql);

    static bool addNewUserInfo(const UserInfo &info);
    static bool removeUserInfo(QString value);
    static bool modifyUserInfoForPswd(const QString &id, const QString &value);

    /*--------------------ClientInfo--------------------------*/
    static void searchAllClientInfos();
    static void searchClientInfoForID(const QString &value);
    static void searchClientInfoForName(const QString &value);
    static void searchClientInfoForPhone(const QString &value);
    static void searchClientInfoForSite(const QString &value);
    static void updateClientInfoList(const QString &sql);

    static bool addNewClientInfo(const ClientInfo &info);
    static bool removeClientInfo(QString value);
    static bool modifyClientInfoForName(const QString &id, const QString &value);
    static bool modifyClientInfoForPhone(const QString &id, const QString &value);
    static bool modifyClientInfoForSite(const QString &id, const QString &value);

    /*--------------------MerchantInfo--------------------------*/
    static void searchAllMerchantInfos();
    static void searchMerchantInfoForID(const QString &value);
    static void searchMerchantInfoForName(const QString &value);
    static void searchMerchantInfoForPhone(const QString &value);
    static void searchMerchantInfoForSite(const QString &value);
    static void updateMerchantInfoList(const QString &sql);

    static bool addNewMerchantInfo(const MerchantInfo &info);
    static bool removeMerchantInfo(QString value);
    static bool modifyMerchantInfoForName(const QString &id, const QString &value);
    static bool modifyMerchantInfoForPhone(const QString &id, const QString &value);
    static bool modifyMerchantInfoForSite(const QString &id, const QString &value);

    /*--------------------ShopInfo--------------------------*/
    static void searchAllShopInfos();
    static void searchShopInfoForID(const QString &value);
    static void searchShopInfoForMerid(const QString &value);
    static void searchShopInfoForName(const QString &value);
    static void searchShopInfoForType(const QString &value);
    static void updateShopInfoList(const QString &sql);

    static QStringList searchShopID(const QString &value);

    static bool addNewShopInfo(const ShopInfo &info);
    static bool removeShopInfo(QString value);
    static bool modifyShopInfoForName(const QString &id, const QString &value);
    static bool modifyShopInfoForType(const QString &id, const QString &value);
    static bool modifyShopInfoForMerid(const QString &id, const QString &value);

   /*--------------------CommodityInfo--------------------------*/
    static void searchAllCommodityInfos();
    static void searchCommodityInfoForID(const QString &value);
    static void searchCommodityInfoForShid(const QString &value);
    static void searchCommodityInfoForName(const QString &value);
    static void searchCommodityInfoForSprice(const QString &value);
    static void searchCommodityInfoForSex(const QString &value);
    static void updateCommodityInfoList(const QString &sql);

    static QStringList searchCommodityID(const QString &value);

    static bool addNewCommodityInfo(const CommodityInfo &info);
    static bool removeCommodityInfo(QString value);
    static bool modifyCommodityInfoForName(const QString &id, const QString &value);
    static bool modifyCommodityInfoForShid(const QString &id, const QString &value);
    static bool modifyCommodityInfoForSprice(const QString &id, const QString &value);
    static bool modifyCommodityInfoForSex(const QString &id, const QString &value);

    /*--------------------SortInfo--------------------------*/
     static void searchAllSortInfos();
     static void searchSortInfoForID(const QString &value);
     static void searchSortInfoForComid(const QString &value);
     static void searchSortInfoForBar(const QString &value);
     static void searchSortInfoForColour(const QString &value);
     static void searchSortInfoForNum(const QString &value);
     static void updateSortInfoList(const QString &sql);

     static QStringList searchSortID(const QString &value);

     static bool addNewSortInfo(const SortInfo &info);
     static bool removeSortInfo(QString value);
     static bool modifySortInfoForBar(const QString &id, const QString &value);
     static bool modifySortInfoForColour(const QString &id, const QString &value);
     static bool modifySortInfoForNum(const QString &id, const QString &value);

     /*--------------------PhotoInfo--------------------------*/
     static void searchAllPhotoInfos();
     static void searchPhotoInfoForID(const QString &value);
     static void searchPhotoInfoForName(const QString &value);
     static void searchPhotoInfoForSite(const QString &value);
     static void updatePhotoInfoList(const QString &sql);

     static QString searchPhotoSite(const QString &value);

     static bool addNewPhotoInfo(const PhotoInfo &info);
     static bool removePhotoInfo(QString value);
     static bool modifyPhotoInfoForName(const QString &id, const QString &value);
     static bool modifyPhotoInfoForSite(const QString &id, const QString &value);

     /*--------------------FormInfo--------------------------*/
     static void searchAllFormInfos();
     static void searchFormInfoForID(const QString &value);
     static void searchFormInfoForComid(const QString &value);
     static void searchFormInfoForCliid(const QString &value);
     static void searchFormInfoForTime(const QString &value);
     static void updateFormInfoList(const QString &sql);

     static QStringList searchFormID(const QString &value);
     static QStringList searchFormIdToCli(const QString &value);

     static bool addNewFormInfo(const FormInfo &info);
     static bool removeFormInfo(QString value);
     static bool modifyFormInfoForComid(const QString &id, const QString &value);
     static bool modifyFormInfoForSoid(const QString &id, const QString &value);
     static bool modifyFormInfoForNum(const QString &id, const QString &value);

     /*--------------------ShopcartInfo--------------------------*/
     static void searchAllShopcartInfos();
     static void searchShopcartInfoForCliid(const QString &value);
     static void searchShopcartInfoForComid(const QString &value);
     static void updateShopcartInfoList(const QString &sql);

     static bool addNewShopcartInfo(const ShopcartInfo &info);
     static bool removeShopcartInfo(QString cliid, QString comid);
     static bool modifyShopcartInfoForSoid(const QString &cliid, const QString &comid, const QString &value);
     static bool modifyShopcartInfoForNum(const QString &id, const QString &comid, const QString &value);

      /*--------------------DialogInfo--------------------------*/
     static void searchAllDialogInfos();
     static void searchDialogInfoForMerid(const QString &value);
     static void searchDialogInfoForCliid(const QString &value);
     static void searchDialogInfoForTime(const QString &value);
     static void updateDialogInfoList(const QString &sql);

     static bool addNewDialogInfo(const DialogInfo &info);
     static bool removeDialogInfo(QString value);
};

#endif // EXECSQL_H
