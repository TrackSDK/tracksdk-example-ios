//
//  AppDelegate.m
//  tracksdk-example
//
//  Copyright © 2018年 GUO. All rights reserved.
//

#import "AppDelegate.h"
#import <TrackSDK/TrackSDK.h>

@interface AppDelegate ()
@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    //初始化
    [TrackSDK initWithAppId:@"yx3xhy"];
    
    return YES;
}


@end
