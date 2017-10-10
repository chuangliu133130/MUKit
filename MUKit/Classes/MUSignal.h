//
//  MUSignal.h
//  elmsc
//
//  Created by Jekity on 2017/8/17.
//  Copyright © 2017年 Jekity. All rights reserved.
//

#ifndef MUSignal_h
#define MUSignal_h
#import "UIView+MUSignal.h"
#import "NSObject+MUSignal.h"

//navigationbar item
#define Click_MUNavigationBarItemWithTitle(title) \
- (void)Click_MUNavigationBarItemWithTitle_##title:(id)object\




#undef	Click_MUSignal
#define Click_MUSignal(SignalName) \
- (void)MUSignal_##SignalName:(id)object
#endif /* MUSignal_h */
