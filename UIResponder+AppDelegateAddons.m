//
//  UIResponder+AppDelegateAddons.m
//  dummy
//
//  Created by Armin Kroll on 17/05/13.
//  Copyright (c) 2013 AKDA. All rights reserved.
//

#import "UIResponder+AppDelegateAddons.h"

@implementation UIResponder (AppDelegateAddons)

+ (UIViewController*) rootViewController
{
    id appDelegate = [[UIApplication sharedApplication] delegate];
    if ([appDelegate respondsToSelector:@selector(window)])
        return [appDelegate window].rootViewController;
    return nil;
}

- (id) rootViewController
{
    return [UIResponder rootViewController];
}

+ (UIWindow*) window
{
    id appDelegate = [[UIApplication sharedApplication] delegate];
    if ([appDelegate respondsToSelector:@selector(window)]) return [appDelegate window];
    return nil;
}

@end
