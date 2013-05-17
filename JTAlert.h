//
//  JTAlerts.h
//  
//
//  Created by jTribe - love your apps on 6/08/12.
//  Copyright (c) 2012 jTribe Labs. All rights reserved.
//

// Some useful standard alert popups

#import <Foundation/Foundation.h>

@interface JTAlert : NSObject
// standard alerts
+ (void) notYetImplemented;
+ (void) noInternet;
// Title is Oops
+ (void) alertWithErrorMessage:(NSString*)message;
// title is Info
+ (void) alertWithInfoMessage:(NSString*)message;

@end
