//
//  UitlsMacro.h
//  ER_ToolsDemo
//
//  Created by cliCk on 2022/1/17.
//  Copyright © 2022 王庭. All rights reserved.
//

#ifndef UitlsMacro_h
#define UitlsMacro_h

#import "ER_Tools.h"


#define TopMargin   ([ER_Tools getKeyWindowSafeAreaInsets].top)
#define BtmMargin   ([ER_Tools getKeyWindowSafeAreaInsets].bottom)
#define TopNavBarHeight (TopMargin + 44)    //TopNavBarHeight
#define BtmTabBarHeight (BtmMargin + 49)    //BtmTabBarHeight


#endif /* UitlsMacro_h */
