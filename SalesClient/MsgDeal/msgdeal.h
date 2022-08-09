#ifndef MSGDEAL_H
#define MSGDEAL_H
#include "globalvars.h"



class MsgDeal
{
public:
    QString UserInsertMsg(QString id, QString pswd, QString type);         //注册账号
    QString UserLoginMsg(QString id, QString pswd);                     //登录命令
    QString UserInfoMsg();                                              //获取登录人员信息
    QString UserImageMsg();                                             //获取登录人员头像
    QString ShopInfoMsg();                                              //获取商店信息
    QString CommodityInfoMsg();                                         //获取商品信息
    QString SortInfoMsg();                                              //获取商品规格信息
    QString ComImageMsg(QString id);                                    //获取商品图片信息
    QString FormInfoMsg();                                              //获取订单信息
    QString ShopcartInfoMsg();                                          //获取订单信息
    QString ClientInfoMsg();                                            //获取顾客信息
    QString MerchantInfoMsg();                                          //获取商家信息
    QString MerImageMsg(QString id);                                    //获取商品图片信息

    QString ChangePswdMsg(QString id, QString pswd);                    //修改用户密码

    QString InsertShop(QString id, QString merid,
                       QString name, QString type);                     //开设店铺
    QString DeleteShop(QString merid, QString id);                      //注销店铺
    QString DeleteForm(QString merid, QString id);                      //删除订单
    QString DeleteShopcart(QString merid, QString comid);               //删除购物车
    QString InsertForm(QString cliid, QString comid,
                       QString soid, QString num);                      //增加订单
    QString InsertShopcart(QString cliid, QString comid,
                       QString soid, QString num);                      //增加购物车

    QString UpdateMerchant(QString name, QString phone, QString site);  //编辑商家资料
    QString UpdateCommodity(QString name, QString sprice, QString sex); //编辑商品资料

    QString UpdateClient(QString name, QString phone, QString site);  //编辑商家资料

};

#endif // MSGDEAL_H
