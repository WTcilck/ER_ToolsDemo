//
//  ER_Tools.h
//  ER_ToolsDemo_Example
//
//  Created by cliCk on 2022/1/17.
//  Copyright © 2022 王庭. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ER_Tools : NSObject

/**
 获取app的主window的安全区域：
 iOS11以后刘海屏返回(44, 0, 34, 0)
 ios11以后的非刘海屏返回(20, 0, 0, 0)
 ios11之前是没有刘海屏的，故直接返回(20, 0, 0, 0)
 */
+ (UIEdgeInsets)getKeyWindowSafeAreaInsets;

@end

NS_ASSUME_NONNULL_END
