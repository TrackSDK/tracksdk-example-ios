//
//  TSBindData.h
//
//  Created by GUO on 2018/8/27.
//  Copyright © 2018年 GUO. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TSBindData : NSObject

@property (readonly,nonatomic,strong) NSString *appId;
@property (readonly,nonatomic,strong) NSString *channelId;
@property (readonly,nonatomic,strong) NSString *data;


- (instancetype)initWithAppId:(NSString *)appId channelId:(NSString *)channelId data:(NSString *)data;

+ (nullable TSBindData *)BindDataWithJsonData:(NSData *)data;

@end
