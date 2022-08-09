#include "globalvars.h"

ImageMap GlobalVars::UserImageMap;
ImageMap GlobalVars::CommodityImageMap;

UserInfoList *GlobalVars::g_userInfoList = new UserInfoList;
MerchantInfoList *GlobalVars::g_merchantInfoList = new MerchantInfoList;
ClientInfoList *GlobalVars::g_clientInfoList = new ClientInfoList;
CommodityInfoList *GlobalVars::g_commodityInfoList = new CommodityInfoList;
ShopInfoList *GlobalVars::g_shopInfoList = new ShopInfoList;
SortInfoList *GlobalVars::g_sortInfoList = new SortInfoList;
PhotoInfoList *GlobalVars::g_photoInfoList = new PhotoInfoList;
FormInfoList *GlobalVars::g_formInfoList = new FormInfoList;
ShopcartInfoList *GlobalVars::g_shopcartInfoList = new ShopcartInfoList;
DialogInfoList *GlobalVars::g_dialogInfoList = new DialogInfoList;

QQueue<QString> GlobalVars::g_msgQueue;

UserInfoMap GlobalVars::g_userInfoMap;
ClientInfoMap GlobalVars::g_clientInfoMap;
MerchantInfoMap GlobalVars::g_merchantInfoMap;
ShopInfoMap GlobalVars::g_shopInfoMap;
CommodityInfoMap GlobalVars::g_commodityInfoMap;
SortInfoMap GlobalVars::g_sortInfoMap;
PhotoInfoMap GlobalVars::g_photoInfoMap;
FormInfoMap GlobalVars::g_formInfoMap;
ShopcartInfoMap GlobalVars::g_shopcartInfoMap;
DialogInfoMap GlobalVars::g_dialogInfoMap;
