//
//  TrackSDK.h
//
//  Created by GUO on 2018/8/27.
//  Copyright © 2018年 GUO. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TSBindData.h"

@interface TrackSDK : NSObject

/**
 初始化SDK
 
 @param appId 应用ID
 */
+ (void) initWithAppId:(nonnull NSString *)appId;


/**
 获取绑定的数据，bindData有可能为nil
 */
+ (void) getBindData:(void (^)(TSBindData * _Nullable bindData))callback;


/**
 获取绑定的数据（只有在第一次安装启动后调用一次，应用更新后启动不会调用）

 @param callback 回调block
 */
+ (void) getBindDataOnce:(void (^)(TSBindData *bindData))callback;


/**
 自定义事件触发
 
 @param eventId 事件id，可登录平台查看
 */
+ (void)onEventWithId:(NSString *)eventId;

/**
 自定义事件触发

 @param eventId 事件id，可登录平台查看
 @param value 事件值
 */
+ (void)onEventWithId:(NSString *)eventId value:(double)value;


/**
 用户注册事件
 
 @param uid 用户唯一ID，最大128个字符
 */
+ (void)onRegister:(NSString *)uid;

@end
