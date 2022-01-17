//
//  ER_Tools.m
//  ER_ToolsDemo_Example
//
//  Created by cliCk on 2022/1/17.
//  Copyright © 2022 王庭. All rights reserved.
//

#import "ER_Tools.h"

@implementation ER_Tools

+ (UIEdgeInsets)getKeyWindowSafeAreaInsets {
    
    UIEdgeInsets edge = UIEdgeInsetsZero;
    
    if (@available(iOS 11.0, *)) {
        edge = [UIApplication sharedApplication].keyWindow.safeAreaInsets; //iOS11以后刘海屏返回44
        if (edge.top == 0) {//ios11以后的非刘海屏返回20
            edge.top = 20;
        }

    } else {//ios11之前是没有刘海屏的，故直接返回20
        edge = UIEdgeInsetsMake(20, 0, 0, 0);
    }
    
    return edge;
}

@end
