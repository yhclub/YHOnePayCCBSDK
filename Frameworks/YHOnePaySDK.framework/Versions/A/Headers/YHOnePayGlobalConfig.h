//
//  YHOnePayGlobalConfig.h
//  YHRongYiTong
//
//  Created by jagtu on 2018/01/13.
//  Copyright © 2017年 YH. All rights reserved.
//

#ifndef YHOnePayConfig_h
#define YHOnePayConfig_h

#define kGetCashierInfo @"/cashier/info"
#define kPayConfirm @"/cashier/payConfirm"
#define kQueryOrderResult @"/cashier/query"
#define kPayIframeConfirm @"/cashier/payiframe"

#define kUP_WAP_BACK_URL @"/frontCall"

#define kChannelHcPay @"JKT_APP"
#define kChannelAliPay @"ALI_APP"
#define kChannelAliWapPay @"ALI_WAP" //打开 data.result.directUrl
#define kChannelWxPay @"WX_APP"
#define kChannelWxWapPay @"WX_WAP" //打开 data.result.directUrl
#define kChannelUpWap @"UP_WAP" // 提交表单 data.result.html
#define kChannelUpApp @"UP_APP" //
#define kChannelCCBApp @"CCB_APP" //

#define kDefaultChannelType @"app"

#define kChannelTypeWap @"wap"

//0 成功 1正在 2 失败
#define KChargeStatInit @"1"
#define KChargeStatSuccess @"0"
#define KChargeStatFail @"2"

#define RGBA(R/*红*/, G/*绿*/, B/*蓝*/, A/*透明*/) \
[UIColor colorWithRed:R/255.f green:G/255.f blue:B/255.f alpha:A]


#endif /* YHOnePayConfig_h */
