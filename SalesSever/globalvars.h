#ifndef GLOBALVARS_H
#define GLOBALVARS_H
#include "userinfo.h"
#include "clientinfo.h"
#include "merchantinfo.h"
#include "shopinfo.h"
#include "sortinfo.h"
#include "commodityinfo.h"
#include "photoinfo.h"
#include "forminfo.h"
#include "shopcartinfo.h"
#include "dialoginfo.h"

#include <QQueue>
#include <QMap>
#include <QImage>

enum MsgType{
    MsgType_Text = 0,
    MsgType_Image,
};

enum Oper_Data{
    Oper_None,
    Oper_Add,
    Oper_Del,
    Oper_Mdy
};

enum RESPONSE{
    RES_Down = '!',
    RES_Fail = '?'
};

enum COMMAND{
    ///通用请求命令
    CMD_UserLogin_L = 'L',          //用户登录
    CMD_UserInsert_W = 'W',         //注册用户
    CMD_UserInfo_I = 'I',           //获取个人信息
    CMD_ChangePswd_H = 'H',         //修改密码
    CMD_UserExit_X = 'X',           //用户退出
    CMD_SendImage_P = 'P',          //发送头像
    CMD_SendImageS_E = 'E',          //发送商品图

    ///商家请求命令
    CMD_SelectShopInfo_S = 'S',      //商店信息
    CMD_InsertShop_T = 'T',          //新开店铺
    CMD_DeleteShop_D = 'D',          //注销店铺
    CMD_UpdateShop_U = 'U',          //修改店铺信息

    CMD_SelectComInfo_C = 'C',       //商品信息
    CMD_InsertCom_Y = 'Y',           //上架
    CMD_DeleteCom_M = 'M',           //下架

    CMD_GetComSort_G = 'G',          //获取商品规格
    CMD_GetFormInfo_F = 'F',         //获取订单信息
    CMD_GetClientInfo_N = 'N',       //获取订单顾客信息
    CMD_DeleteForm_R = 'R',          //删除订单
    CMD_UpdateMerInfo_O= 'O',        //更新信息
    CMD_UpdateComInfo_Q = 'Q',       //修改商品信息


    ///顾客请求命令
    CMD_GetMerchantInfo_A = 'A',     //获取商家信息
    CMD_GetShopcartInfo_V = 'V',     //获取购物车信息
    CMD_DeleteShopcart_B  = 'B',     //删除购物车
    CMD_InsertForm_J = 'J',          //增加订单
    CMD_InsertShopcart_k = 'k',      //增加购物车
    CMD_UpdateCliInfo_Z= 'Z',        //更新信息
};

typedef QMap<QString, QImage> ImageMap;  //搜索图片

class GlobalVars
{
public:
    GlobalVars();

    static QQueue<QString> g_msgQueue; //消息队列

    static UserInfoMap g_userInfoMap;
    static ClientInfoMap g_clientInfoMap;
    static MerchantInfoMap g_merchantInfoMap;
    static ShopInfoMap g_shopInfoMap;
    static CommodityInfoMap g_commodityInfoMap;
    static SortInfoMap g_sortInfoMap;
    static PhotoInfoMap g_photoInfoMap;
    static FormInfoMap g_formInfoMap;
    static ShopcartInfoMap g_shopcartInfoMap;
    static DialogInfoMap g_dialogInfoMap;

    static UserInfoList *g_userInfoList;
    static ClientInfoList *g_clientInfoList;
    static MerchantInfoList *g_merchantInfoList;
    static ShopInfoList *g_shopInfoList;
    static CommodityInfoList *g_commodityInfoList;
    static SortInfoList *g_sortInfoList;
    static PhotoInfoList *g_photoInfoList;
    static FormInfoList *g_formInfoList;
    static ShopcartInfoList *g_shopcartInfoList;
    static DialogInfoList *g_dialogInfoList;

    static ImageMap UserImageMap;
    static ImageMap CommodityImageMap;
};

#endif // GLOBALVARS_H
