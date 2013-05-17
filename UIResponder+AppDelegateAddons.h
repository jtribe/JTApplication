//
//  UIResponder+AppDelegateAddons.h
//  dummy
//
//  Created by Armin Kroll on 17/05/13.
//  Copyright (c) 2013 AKDA. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIResponder (AppDelegateAddons)

// access root view controller
+ (UIViewController*) rootViewController;
- (id) rootViewController;
// access window
+ (UIWindow*) window;

@end
