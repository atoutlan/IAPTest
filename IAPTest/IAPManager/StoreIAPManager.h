//
//  StoreIAPManager.h
//  i-xinghui
//
//  Created by OUTLAN on 2019/3/25.
//  Copyright © 2019 蜗牛学堂. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum {
    SIAPPurchSuccess = 0,       // 购买成功
    SIAPPurchFailed = 1,        // 购买失败
    SIAPPurchCancle = 2,        // 取消购买
    SIAPPurchVerFailed = 3,     // 订单校验失败
    SIAPPurchVerSuccess = 4,    // 订单校验成功
    SIAPPurchNotArrow = 5,      // 不允许内购
}SIAPPurchType;

typedef void (^IAPCompletionHandle)(SIAPPurchType type,NSData *data);

@interface StoreIAPManager : NSObject

/**
 获取内购业务对象
 
 @return 内购业务对象
 */
+ (instancetype)shareSIAPManager;

/**
 开始内购
 
 @param purchID 苹果后台的虚拟商品ID
 @param handle 请求事务回调类型，返回的数据
 */
- (void)startPurchWithID:(NSString *)purchID completeHandle:(IAPCompletionHandle)handle;
@end

NS_ASSUME_NONNULL_END
