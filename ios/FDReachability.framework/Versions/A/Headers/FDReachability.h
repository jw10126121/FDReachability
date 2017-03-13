//
//  FDReachabilityStatus.h
//  FDLive
//
//  Created by Linjw on 2017/3/10.
//  Copyright © 2017年 Linjw. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXTERN NSString * const FDNotifKeyForNetChanged;           //网络改变


typedef NS_ENUM(NSUInteger, FDReachabilityStatus)
{
    FDReachabilityStatusNone  = 0,  ///< Not Reachable
    FDReachabilityStatusWiFi  = 1,  ///< Reachable via WWAN (2G/3G/4G)
    FDReachabilityWWANStatus2G = 2, ///< Reachable via 2G (GPRS/EDGE)       10~100Kbps
    FDReachabilityWWANStatus3G = 3, ///< Reachable via 3G (WCDMA/HSDPA/...) 1~10Mbps
    FDReachabilityWWANStatus4G = 4, ///< Reachable via 4G (eHRPD/LTE)       100Mbps
};




@interface FDReachability : NSObject



//当前网络情况类型
+ (FDReachabilityStatus)currentNetStatus;

//开始监听，当有网络变化的时候，会发出FDNotifKeyForNetChanged通知
- (void) startNetChangedListeningToPostNotification;

//发送FDNotifKeyForNetChanged通知
+ (void) postNetChangedNotification;

//监听网络变化，并处理
- (void) startNetChangedListeningWithHandle:(void(^)())handle;

//网络类型字符串
+ (NSString *)netStrWithState:(FDReachabilityStatus)state;

//是否是WWAN网络
+ (BOOL)netStatusIsWWAN:(FDReachabilityStatus)netStatus;

//网络是否可用
+ (BOOL)netStatusIsOK:(FDReachabilityStatus)netStatus;











@end









