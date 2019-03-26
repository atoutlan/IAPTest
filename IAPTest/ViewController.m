//
//  ViewController.m
//  IAPTest
//
//  Created by OUTLAN on 2019/3/26.
//  Copyright © 2019 Beijing Xinghui Network Technology Co., Ltd. All rights reserved.
//

#import "ViewController.h"
#import "StoreIPAManager.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // 测试
    [[StoreIPAManager shareSIAPManager] startPurchWithID:@"productId" completeHandle:^(SIAPPurchType type,NSData *data) {
        // 请求事务回调类型，返回的数据，
        // 结束指示器。
        // 根据返回 type 判断数据
        NSLog(@"SIAPPurchType ：%d", type);
    }];
}


@end
