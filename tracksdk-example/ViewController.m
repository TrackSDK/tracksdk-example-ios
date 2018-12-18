//
//  ViewController.m
//  tracksdk-example
//
//  Created by GUO on 2018/8/27.
//  Copyright © 2018年 GUO. All rights reserved.
//

#import "ViewController.h"
#import <TrackSDK/TrackSDK.h>

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UILabel *label;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    //获取绑定数据，可多次调用获取，data有可能是nil
    [TrackSDK getBindData:^(TSBindData *data) {
        if(data){
            self.label.text = [NSString stringWithFormat:@"%@", data];
        }else{
            self.label.text = @"没有获取到绑定数据";
        }
    }];
}


- (IBAction)registerEvent:(id)sender {
    //触发注册事件,需传入用户唯一标识，例如用户ID的md5值
    [TrackSDK onRegister:@"efg"];
}

- (IBAction)customEvent:(id)sender {
    
    //触发自定义事件，事件ID需登陆控制台查看
    [TrackSDK onEventWithId:@"level1"];
    
    //触发自定义事件，带值的自定义事件
    [TrackSDK onEventWithId:@"recharge" value:100.00f];
}

@end
