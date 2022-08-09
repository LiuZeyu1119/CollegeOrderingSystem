/*
Navicat MySQL Data Transfer

Source Server         : MySQL
Source Server Version : 50731
Source Host           : localhost:3306
Source Database       : sales1

Target Server Type    : MYSQL
Target Server Version : 50731
File Encoding         : 65001

Date: 2022-08-07 00:16:54
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for clientinfo
-- ----------------------------
DROP TABLE IF EXISTS `clientinfo`;
CREATE TABLE `clientinfo` (
  `cli_id` varchar(15) NOT NULL,
  `cli_imid` varchar(50) NOT NULL,
  `cli_name` varchar(20) DEFAULT NULL,
  `cli_phone` varchar(20) DEFAULT NULL,
  `cli_time` varchar(50) NOT NULL,
  `cli_site` varchar(100) DEFAULT NULL,
  PRIMARY KEY (`cli_id`),
  KEY `climid` (`cli_imid`),
  CONSTRAINT `cliid` FOREIGN KEY (`cli_id`) REFERENCES `userinfo` (`user_id`) ON UPDATE CASCADE,
  CONSTRAINT `climid` FOREIGN KEY (`cli_imid`) REFERENCES `imageinfo` (`im_id`) ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of clientinfo
-- ----------------------------
INSERT INTO `clientinfo` VALUES ('CLI1001', 'GK1001', '小明', '15835295324', '2018-07-13-16:52', '山西省运城市');
INSERT INTO `clientinfo` VALUES ('CLI1002', 'GK1002', '小李', '15735388157', '2017-09-01-5:25', '山西省运城市');
INSERT INTO `clientinfo` VALUES ('CLI1003', 'GK1003', '小牛', '13373428965', '2015-05-28-16:52', '山西省太原市杏花岭区红沟南街山西大学');
INSERT INTO `clientinfo` VALUES ('CLI1004', 'GK1004', '小红', '13152797706', '2016-01-12-18:20', '山西省太谷县学院路农大信院');
INSERT INTO `clientinfo` VALUES ('CLI1005', 'GK1005', '小阳', '15735512926', '2017-11-20-17:25', '山西省太原市杏花岭区红沟南街山西大学');

-- ----------------------------
-- Table structure for commodityinfo
-- ----------------------------
DROP TABLE IF EXISTS `commodityinfo`;
CREATE TABLE `commodityinfo` (
  `com_id` varchar(15) NOT NULL,
  `com_shopid` varchar(15) NOT NULL,
  `com_imid` varchar(15) NOT NULL,
  `com_name` varchar(50) DEFAULT NULL,
  `com_sprice` varchar(15) DEFAULT NULL,
  `com_sex` varchar(10) NOT NULL,
  PRIMARY KEY (`com_id`),
  KEY `comshopid` (`com_shopid`),
  KEY `comid` (`com_imid`),
  CONSTRAINT `comid` FOREIGN KEY (`com_imid`) REFERENCES `imageinfo` (`im_id`) ON UPDATE CASCADE,
  CONSTRAINT `comshopid` FOREIGN KEY (`com_shopid`) REFERENCES `shopinfo` (`sh_id`) ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of commodityinfo
-- ----------------------------
INSERT INTO `commodityinfo` VALUES ('A1001', 'SHA001', 'SP1001', '蛋炒饭', '8元', '主食');
INSERT INTO `commodityinfo` VALUES ('A1002', 'SHA001', 'SP1002', '过桥米线', '9元', '主食');
INSERT INTO `commodityinfo` VALUES ('A2001', 'SHA002', 'SP1003', '新疆大盘鸡', '12元', '主食');
INSERT INTO `commodityinfo` VALUES ('A3001', 'SHA003', 'SP1004', '五谷鱼粉', '9元', '主食');
INSERT INTO `commodityinfo` VALUES ('A3002', 'SHA003', 'SP1005', '山西刀削面', '9元', '主食');
INSERT INTO `commodityinfo` VALUES ('H1001', 'SHH001', 'SP1014', '羊杂', '8元', '主食');
INSERT INTO `commodityinfo` VALUES ('H1002', 'SHH001', 'SP1015', '可口可乐', '2.5元', '饮料');
INSERT INTO `commodityinfo` VALUES ('L1001', 'SHL001', 'SP1009', '米饭', '1元', '主食');
INSERT INTO `commodityinfo` VALUES ('L1002', 'SHL001', 'SP1010', '糖醋里脊', '10元', '菜');
INSERT INTO `commodityinfo` VALUES ('L2001', 'SHL002', 'SP1011', '鱼香肉丝', '12元', '菜');
INSERT INTO `commodityinfo` VALUES ('L3001', 'SHL003', 'SP1012', '京酱肉丝', '12元', '菜');
INSERT INTO `commodityinfo` VALUES ('L3002', 'SHL003', 'SP1013', '汉堡套餐', '13元', '套餐');
INSERT INTO `commodityinfo` VALUES ('N1001', 'SHN001', 'SP1006', '西红柿鸡蛋面', '10元', '主食');
INSERT INTO `commodityinfo` VALUES ('N1002', 'SHN001', 'SP1007', '炸酱面', '9元', '主食');
INSERT INTO `commodityinfo` VALUES ('N2001', 'SHN002', 'SP1008', '过油肉', '11元', '菜');

-- ----------------------------
-- Table structure for dialoginfo
-- ----------------------------
DROP TABLE IF EXISTS `dialoginfo`;
CREATE TABLE `dialoginfo` (
  `dia_merid` varchar(15) NOT NULL,
  `dia_cliid` varchar(15) NOT NULL,
  `dia_mer` varchar(1000) DEFAULT NULL,
  `dia_cli` varchar(1000) DEFAULT NULL,
  `dia_time` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`dia_merid`,`dia_cliid`),
  KEY `diacliid` (`dia_cliid`),
  CONSTRAINT `diacliid` FOREIGN KEY (`dia_cliid`) REFERENCES `clientinfo` (`cli_id`) ON UPDATE CASCADE,
  CONSTRAINT `diamerid` FOREIGN KEY (`dia_merid`) REFERENCES `merchantinfo` (`mer_id`) ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of dialoginfo
-- ----------------------------
INSERT INTO `dialoginfo` VALUES ('MER1001', 'CLI1001', '您好，在的亲，请问有什么可以帮助你吗。', '在吗?', '2019-07-13-15:21');

-- ----------------------------
-- Table structure for forminfo
-- ----------------------------
DROP TABLE IF EXISTS `forminfo`;
CREATE TABLE `forminfo` (
  `fo_id` varchar(15) NOT NULL,
  `fo_comid` varchar(15) NOT NULL,
  `fo_cliid` varchar(15) NOT NULL,
  `fo_soid` varchar(15) NOT NULL,
  `fo_time` varchar(50) DEFAULT NULL,
  `fo_num` varchar(20) DEFAULT NULL,
  PRIMARY KEY (`fo_id`),
  KEY `focomid` (`fo_comid`),
  KEY `fosoid` (`fo_soid`),
  KEY `focliid` (`fo_cliid`),
  CONSTRAINT `focliid` FOREIGN KEY (`fo_cliid`) REFERENCES `clientinfo` (`cli_id`) ON UPDATE CASCADE,
  CONSTRAINT `focomid` FOREIGN KEY (`fo_comid`) REFERENCES `commodityinfo` (`com_id`) ON UPDATE CASCADE,
  CONSTRAINT `fosoid` FOREIGN KEY (`fo_soid`) REFERENCES `sortinfo` (`so_id`) ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of forminfo
-- ----------------------------
INSERT INTO `forminfo` VALUES ('201907151003', 'L1002', 'CLI1004', 'WSC1015', '2019-07-15-9:11', '1');
INSERT INTO `forminfo` VALUES ('201907161004', 'L2001', 'CLI1005', 'NSC1032', '2019-07-16-10:20', '1');
INSERT INTO `forminfo` VALUES ('20190813115447', 'N2001', 'CLI1001', 'NSC1040', '2019年08月13日-11:54:47', '1');
INSERT INTO `forminfo` VALUES ('20190817132226', 'A1001', 'CLI1001', 'NSC1040', '2019年08月17日-13:22:26', '2');
INSERT INTO `forminfo` VALUES ('20190817132612', 'A2001', 'CLI1001', 'NSC1040', '2019年08月17日-13:26:12', '1');

-- ----------------------------
-- Table structure for imageinfo
-- ----------------------------
DROP TABLE IF EXISTS `imageinfo`;
CREATE TABLE `imageinfo` (
  `im_id` varchar(15) NOT NULL,
  `im_name` varchar(50) DEFAULT NULL,
  `im_site` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`im_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of imageinfo
-- ----------------------------
INSERT INTO `imageinfo` VALUES ('CS0000', '顾客初始头像', 'C:/salesimgh/image/ghead/CSGK.png');
INSERT INTO `imageinfo` VALUES ('CS0001', '商家初始头像', 'C:/salesimgh/image/sjhead/CSSJ.png');
INSERT INTO `imageinfo` VALUES ('GK1001', '顾客logo', 'C:/salesimgh/image/ghead/h1.png');
INSERT INTO `imageinfo` VALUES ('GK1002', '顾客logo', 'C:/salesimgh/image/ghead/h2.png');
INSERT INTO `imageinfo` VALUES ('GK1003', '顾客logo', 'C:/salesimgh/image/ghead/h3.png');
INSERT INTO `imageinfo` VALUES ('GK1004', '顾客logo', 'C:/salesimgh/image/ghead/h4.png');
INSERT INTO `imageinfo` VALUES ('GK1005', '顾客logo', 'C:/salesimgh/image/ghead/h5.png');
INSERT INTO `imageinfo` VALUES ('GK1006', '顾客logo', 'C:/salesimgh/image/ghead/h6.png');
INSERT INTO `imageinfo` VALUES ('GK1007', '顾客logo', 'C:/salesimgh/image/ghead/h7.png');
INSERT INTO `imageinfo` VALUES ('GK1008', '顾客logo', 'C:/salesimgh/image/ghead/h8.png');
INSERT INTO `imageinfo` VALUES ('GK1009', '顾客logo', 'C:/salesimgh/image/ghead/h9.png');
INSERT INTO `imageinfo` VALUES ('GK1010', '顾客logo', 'C:/salesimgh/image/ghead/h10.png');
INSERT INTO `imageinfo` VALUES ('SJ1001', '安踏', 'C:/salesimgh/image/new/2.png');
INSERT INTO `imageinfo` VALUES ('SJ1002', '耐克', 'C:/salesimgh/image/sjhead/JUNJIE.png');
INSERT INTO `imageinfo` VALUES ('SJ1003', '李宁', 'C:/salesimgh/image/sjhead/XUEYOU.png');
INSERT INTO `imageinfo` VALUES ('SJ1004', '回力', 'C:/salesimgh/image/sjhead/YUYAN.png');
INSERT INTO `imageinfo` VALUES ('SJ190818162041', '商家', 'C:/salesimgh/image/new/1.png');
INSERT INTO `imageinfo` VALUES ('SJ190818162137', '商家', 'C:/salesimgh/image/new/2.png');
INSERT INTO `imageinfo` VALUES ('SP1001', '蛋炒饭', 'C:/salesimgh/image/sphead/ATfh.jpg');
INSERT INTO `imageinfo` VALUES ('SP1002', '过桥米线', 'C:/salesimgh/image/sphead/ATqz.jpg');
INSERT INTO `imageinfo` VALUES ('SP1003', '新疆大盘鸡', 'C:/salesimgh/image/sphead/ATbd.jpg');
INSERT INTO `imageinfo` VALUES ('SP1004', '五谷鱼粉', 'C:/salesimgh/image/sphead/ATwd.jpg');
INSERT INTO `imageinfo` VALUES ('SP1005', '山西刀削面', 'C:/salesimgh/image/sphead/ATb.jpg');
INSERT INTO `imageinfo` VALUES ('SP1006', '西红柿鸡蛋面', 'C:/salesimgh/image/sphead/NK.jpg');
INSERT INTO `imageinfo` VALUES ('SP1007', '炸酱面', 'C:/salesimgh/image/sphead/NKf.jpg');
INSERT INTO `imageinfo` VALUES ('SP1008', '过油肉', 'C:/salesimgh/image/sphead/NKz.jpg');
INSERT INTO `imageinfo` VALUES ('SP1009', '米饭', 'C:/salesimgh/image/sphead/LNn.jpg');
INSERT INTO `imageinfo` VALUES ('SP1010', '糖醋里脊', 'C:/salesimgh/image/sphead/LNw.jpg');
INSERT INTO `imageinfo` VALUES ('SP1011', '鱼香肉丝', 'C:/salesimgh/image/sphead/WD.jpg');
INSERT INTO `imageinfo` VALUES ('SP1012', '京酱肉丝', 'C:/salesimgh/image/sphead/QC.jpg');
INSERT INTO `imageinfo` VALUES ('SP1013', '汉堡套餐', 'C:/salesimgh/image/sphead/JG.jpg');
INSERT INTO `imageinfo` VALUES ('SP1014', '羊杂', 'C:/salesimgh/image/sphead/BJ.jpg');
INSERT INTO `imageinfo` VALUES ('SP1015', '可口可乐', 'C:/salesimgh/image/sphead/GB.jpg');

-- ----------------------------
-- Table structure for merchantinfo
-- ----------------------------
DROP TABLE IF EXISTS `merchantinfo`;
CREATE TABLE `merchantinfo` (
  `mer_id` varchar(15) NOT NULL,
  `mer_imid` varchar(15) NOT NULL,
  `mer_name` varchar(20) DEFAULT NULL,
  `mer_phone` varchar(50) DEFAULT NULL,
  `mer_time` varchar(50) DEFAULT NULL,
  `mer_site` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`mer_id`),
  KEY `merimid` (`mer_imid`),
  CONSTRAINT `merid` FOREIGN KEY (`mer_id`) REFERENCES `userinfo` (`user_id`) ON UPDATE CASCADE,
  CONSTRAINT `merimid` FOREIGN KEY (`mer_imid`) REFERENCES `imageinfo` (`im_id`) ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of merchantinfo
-- ----------------------------
INSERT INTO `merchantinfo` VALUES ('JJJ123', 'SJ190818162137', '', '', '2019-08-18 16:21:37', '');
INSERT INTO `merchantinfo` VALUES ('MER1001', 'SJ1001', '潮韵香', '0595-85928080', '2010-03-19-15:39:51', '餐厅2楼2号');
INSERT INTO `merchantinfo` VALUES ('MER1002', 'SJ1002', '潮韵香(2店)', '021-26120603', '2012-05-18-14:00:43', '餐厅1楼3号');
INSERT INTO `merchantinfo` VALUES ('MER1003', 'SJ1003', '真味', '4008866626', '2008-03-20-14:23:05', '餐厅3楼1号');
INSERT INTO `merchantinfo` VALUES ('MER1004', 'SJ1004', '再来碗', '19979133740', '2019-01-31-14:20:06', '餐厅2楼3号');
INSERT INTO `merchantinfo` VALUES ('MMM123', 'SJ190818162041', '', '', '2019-08-18 16:20:41', '');

-- ----------------------------
-- Table structure for shopcartinfo
-- ----------------------------
DROP TABLE IF EXISTS `shopcartinfo`;
CREATE TABLE `shopcartinfo` (
  `ca_cliid` varchar(15) NOT NULL,
  `ca_comid` varchar(15) NOT NULL DEFAULT '',
  `ca_soid` varchar(15) NOT NULL,
  `ca_num` varchar(20) DEFAULT NULL,
  PRIMARY KEY (`ca_cliid`,`ca_comid`),
  KEY `cacomid` (`ca_comid`),
  KEY `casoid` (`ca_soid`),
  CONSTRAINT `cacliid` FOREIGN KEY (`ca_cliid`) REFERENCES `clientinfo` (`cli_id`) ON UPDATE CASCADE,
  CONSTRAINT `cacomid` FOREIGN KEY (`ca_comid`) REFERENCES `commodityinfo` (`com_id`) ON UPDATE CASCADE,
  CONSTRAINT `casoid` FOREIGN KEY (`ca_soid`) REFERENCES `sortinfo` (`so_id`) ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of shopcartinfo
-- ----------------------------
INSERT INTO `shopcartinfo` VALUES ('CLI1001', 'A1001', 'NSC1040', '1');
INSERT INTO `shopcartinfo` VALUES ('CLI1001', 'N2001', 'NSC1040', '1');
INSERT INTO `shopcartinfo` VALUES ('CLI1002', 'A2001', 'NSC1041', '2');
INSERT INTO `shopcartinfo` VALUES ('CLI1003', 'A2001', 'NSC1013', '1');
INSERT INTO `shopcartinfo` VALUES ('CLI1004', 'L1002', 'WSC1013', '1');
INSERT INTO `shopcartinfo` VALUES ('CLI1005', 'L2001', 'NSC1035', '1');

-- ----------------------------
-- Table structure for shopinfo
-- ----------------------------
DROP TABLE IF EXISTS `shopinfo`;
CREATE TABLE `shopinfo` (
  `sh_id` varchar(15) NOT NULL,
  `sh_merid` varchar(15) NOT NULL,
  `sh_name` varchar(50) DEFAULT NULL,
  `sh_type` varchar(30) DEFAULT NULL,
  `sh_time` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`sh_id`),
  KEY `shmerid` (`sh_merid`),
  CONSTRAINT `shmerid` FOREIGN KEY (`sh_merid`) REFERENCES `merchantinfo` (`mer_id`) ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of shopinfo
-- ----------------------------
INSERT INTO `shopinfo` VALUES ('SHA001', 'MER1001', '潮韵香', '各类菜品', '2010-03-20');
INSERT INTO `shopinfo` VALUES ('SHA002', 'MER1001', '潮韵香(2店)', '各类菜品', '2010-03-21');
INSERT INTO `shopinfo` VALUES ('SHA003', 'MER1001', '潮韵香(3店)', '各类菜品', '2010-03-22');
INSERT INTO `shopinfo` VALUES ('SHH001', 'MER1004', '再来碗', '各类菜品', '2019-01-32');
INSERT INTO `shopinfo` VALUES ('SHL001', 'MER1003', '真味', '各类菜品', '2008-03-21');
INSERT INTO `shopinfo` VALUES ('SHL002', 'MER1003', '真味(2店)', '各类菜品', '2008-03-22');
INSERT INTO `shopinfo` VALUES ('SHL003', 'MER1003', '真味(3店)', '各类菜品', '2008-03-23');
INSERT INTO `shopinfo` VALUES ('SHN001', 'MER1002', '再来碗', '各类菜品', '2012-05-19');
INSERT INTO `shopinfo` VALUES ('SHN002', 'MER1002', '再来碗', '各类菜品', '2012-05-20');

-- ----------------------------
-- Table structure for sortinfo
-- ----------------------------
DROP TABLE IF EXISTS `sortinfo`;
CREATE TABLE `sortinfo` (
  `so_id` varchar(15) NOT NULL,
  `so_comid` varchar(15) NOT NULL,
  `so_bar` varchar(15) DEFAULT NULL,
  `so_colour` varchar(15) DEFAULT NULL,
  `so_num` varchar(20) DEFAULT NULL,
  PRIMARY KEY (`so_id`),
  KEY `socomid` (`so_comid`),
  CONSTRAINT `socomid` FOREIGN KEY (`so_comid`) REFERENCES `commodityinfo` (`com_id`) ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COMMENT='InnoDB free: 10240 kB; (`so_comid`) REFER `sales0/commodityi';

-- ----------------------------
-- Records of sortinfo
-- ----------------------------
INSERT INTO `sortinfo` VALUES ('NSC1001', 'A1001', '蒜香', '不辣', '23');
INSERT INTO `sortinfo` VALUES ('NSC1002', 'A1001', '椒盐', '微辣', '23');
INSERT INTO `sortinfo` VALUES ('NSC1003', 'A1001', '孜然', '中辣', '43');
INSERT INTO `sortinfo` VALUES ('NSC1004', 'A1001', '番茄', '特辣', '34');
INSERT INTO `sortinfo` VALUES ('NSC1005', 'A1001', '千岛', '超辣', '12');
INSERT INTO `sortinfo` VALUES ('NSC1006', 'A2001', '沙拉', '不辣', '23');
INSERT INTO `sortinfo` VALUES ('NSC1007', 'A2001', '京酱', '微辣', '43');
INSERT INTO `sortinfo` VALUES ('NSC1008', 'A2001', '琥珀', '中辣', '54');
INSERT INTO `sortinfo` VALUES ('NSC1009', 'A2001', '甜辣', '特辣', '23');
INSERT INTO `sortinfo` VALUES ('NSC1010', 'A2001', '蒜香', '超辣', '56');
INSERT INTO `sortinfo` VALUES ('NSC1011', 'A3002', '椒盐', '不辣', '23');
INSERT INTO `sortinfo` VALUES ('NSC1012', 'A3002', '孜然', '微辣', '42');
INSERT INTO `sortinfo` VALUES ('NSC1013', 'A3002', '番茄', '中辣', '23');
INSERT INTO `sortinfo` VALUES ('NSC1014', 'A3002', '千岛', '特辣', '43');
INSERT INTO `sortinfo` VALUES ('NSC1015', 'A3002', '蒜香', '超辣', '34');
INSERT INTO `sortinfo` VALUES ('NSC1016', 'N1001', '椒盐', '不辣', '12');
INSERT INTO `sortinfo` VALUES ('NSC1017', 'N1001', '孜然', '微辣', '23');
INSERT INTO `sortinfo` VALUES ('NSC1018', 'N1001', '番茄', '中辣', '43');
INSERT INTO `sortinfo` VALUES ('NSC1019', 'N1001', '千岛', '特辣', '54');
INSERT INTO `sortinfo` VALUES ('NSC1020', 'N1001', '沙拉', '超辣', '23');
INSERT INTO `sortinfo` VALUES ('NSC1021', 'N2001', '京酱', '不辣', '56');
INSERT INTO `sortinfo` VALUES ('NSC1022', 'N2001', '琥珀', '微辣', '23');
INSERT INTO `sortinfo` VALUES ('NSC1023', 'N2001', '甜辣', '中辣', '42');
INSERT INTO `sortinfo` VALUES ('NSC1024', 'N2001', '蒜香', '特辣', '23');
INSERT INTO `sortinfo` VALUES ('NSC1025', 'N2001', '椒盐', '超辣', '43');
INSERT INTO `sortinfo` VALUES ('NSC1026', 'L1001', '孜然', '不辣', '34');
INSERT INTO `sortinfo` VALUES ('NSC1027', 'L1001', '番茄', '微辣', '12');
INSERT INTO `sortinfo` VALUES ('NSC1028', 'L1001', '千岛', '中辣', '23');
INSERT INTO `sortinfo` VALUES ('NSC1029', 'L1001', '沙拉', '特辣', '43');
INSERT INTO `sortinfo` VALUES ('NSC1030', 'L1001', '京酱', '超辣', '54');
INSERT INTO `sortinfo` VALUES ('NSC1031', 'L2001', '琥珀', '不辣', '23');
INSERT INTO `sortinfo` VALUES ('NSC1032', 'L2001', '甜辣', '微辣', '56');
INSERT INTO `sortinfo` VALUES ('NSC1033', 'L2001', '蒜香', '中辣', '23');
INSERT INTO `sortinfo` VALUES ('NSC1034', 'L2001', '椒盐', '特辣', '42');
INSERT INTO `sortinfo` VALUES ('NSC1035', 'L2001', '孜然', '超辣', '23');
INSERT INTO `sortinfo` VALUES ('NSC1036', 'L3001', '番茄', '不辣', '43');
INSERT INTO `sortinfo` VALUES ('NSC1037', 'L3001', '千岛', '微辣', '34');
INSERT INTO `sortinfo` VALUES ('NSC1038', 'L3001', '沙拉', '中辣', '12');
INSERT INTO `sortinfo` VALUES ('NSC1039', 'L3001', '京酱', '特辣', '23');
INSERT INTO `sortinfo` VALUES ('NSC1040', 'H1001', '琥珀', '不辣', '43');
INSERT INTO `sortinfo` VALUES ('NSC1041', 'H1001', '番茄', '微辣', '54');
INSERT INTO `sortinfo` VALUES ('NSC1042', 'H1001', '千岛', '中辣', '23');
INSERT INTO `sortinfo` VALUES ('NSC1043', 'H1001', '沙拉', '特辣', '56');
INSERT INTO `sortinfo` VALUES ('NSC1044', 'H1001', '京酱', '超辣', '23');
INSERT INTO `sortinfo` VALUES ('WSC1001', 'A1002', '琥珀', '不辣', '42');
INSERT INTO `sortinfo` VALUES ('WSC1002', 'A1002', '甜辣', '微辣', '23');
INSERT INTO `sortinfo` VALUES ('WSC1003', 'L3002', '蒜香', '不辣', '43');
INSERT INTO `sortinfo` VALUES ('WSC1004', 'A1002', '椒盐', '不辣', '34');
INSERT INTO `sortinfo` VALUES ('WSC1005', 'A3001', '孜然', '不辣', '12');
INSERT INTO `sortinfo` VALUES ('WSC1006', 'A3001', '番茄', '中辣', '23');
INSERT INTO `sortinfo` VALUES ('WSC1007', 'L3002', '千岛', '特辣', '43');
INSERT INTO `sortinfo` VALUES ('WSC1008', 'A3001', '沙拉', '不辣', '54');
INSERT INTO `sortinfo` VALUES ('WSC1009', 'N1002', '京酱', '不辣', '23');
INSERT INTO `sortinfo` VALUES ('WSC1010', 'N1002', '琥珀', '微辣', '56');
INSERT INTO `sortinfo` VALUES ('WSC1011', 'L3002', '甜辣', '不辣', '23');
INSERT INTO `sortinfo` VALUES ('WSC1012', 'N1002', '蒜香', '不辣', '42');
INSERT INTO `sortinfo` VALUES ('WSC1013', 'L1002', '椒盐', '不辣', '23');
INSERT INTO `sortinfo` VALUES ('WSC1014', 'L1002', '孜然', '微辣', '43');
INSERT INTO `sortinfo` VALUES ('WSC1015', 'L3002', '番茄', '不辣', '34');
INSERT INTO `sortinfo` VALUES ('WSC1016', 'L1002', '千岛', '微辣', '12');
INSERT INTO `sortinfo` VALUES ('WSC1017', 'H1002', '沙拉', '不辣', '23');
INSERT INTO `sortinfo` VALUES ('WSC1018', 'H1002', '蒜香', '微辣', '43');
INSERT INTO `sortinfo` VALUES ('WSC1019', 'H1002', '椒盐', '中辣', '54');
INSERT INTO `sortinfo` VALUES ('WSC1020', 'H1002', '孜然', '特辣', '23');

-- ----------------------------
-- Table structure for userinfo
-- ----------------------------
DROP TABLE IF EXISTS `userinfo`;
CREATE TABLE `userinfo` (
  `user_id` varchar(15) NOT NULL,
  `user_pswd` varchar(20) NOT NULL,
  `user_type` varchar(10) DEFAULT NULL,
  `user_time` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`user_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of userinfo
-- ----------------------------
INSERT INTO `userinfo` VALUES ('admin', 'admin', '管理员', '2019-16-17');
INSERT INTO `userinfo` VALUES ('CLI1001', '123456', '顾客', '2018/07/13/16:52');
INSERT INTO `userinfo` VALUES ('CLI1002', '123456', '顾客', '2017/09/01/5:25');
INSERT INTO `userinfo` VALUES ('CLI1003', '123456', '顾客', '2015/05/28/16:52');
INSERT INTO `userinfo` VALUES ('CLI1004', '123456', '顾客', '2016-01-12 18:20');
INSERT INTO `userinfo` VALUES ('CLI1005', '123456', '顾客', '2017-11-20-17:25');
INSERT INTO `userinfo` VALUES ('JJJ123', '123456', '商家', '2019-08-18 16:21:37');
INSERT INTO `userinfo` VALUES ('MER1001', '123456', '商家', '2010-03-19-15:39:51');
INSERT INTO `userinfo` VALUES ('MER1002', '123456', '商家', '2012-05-18-14:00:43');
INSERT INTO `userinfo` VALUES ('MER1003', '123456', '商家', '2008-03-20-14:23:05');
INSERT INTO `userinfo` VALUES ('MER1004', '123456', '商家', '2019-01-31-14:20:06');
INSERT INTO `userinfo` VALUES ('MMM123', '123456', '商家', '2019-08-18 16:20:41');
