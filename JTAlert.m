//
//  JTAlerts.m
//  PassDesigner
//
//  Created by jTribe - love your apps on 6/08/12.
//  Copyright (c) 2012 jTribe Labs. All rights reserved.
//

#import "JTAlert.h"
#import "JTApplication.h"

@implementation JTAlert


+ (void) notYetImplemented
{
  [JTAlert alertWithInfoMessage:JTLOCALIZE(@"Not yet implemented") ];
}

+ (void) noInternet
{
  [JTAlert alertWithInfoMessage:JTLOCALIZE(@"No Internet. Please try again later.") ];
}

+ (void) alertWithErrorMessage:(NSString*)message
{
  [[[UIAlertView alloc] initWithTitle:JTLOCALIZE(@"Oops") message:message delegate:self cancelButtonTitle:JTLOCALIZE(@"Ok") otherButtonTitles: nil] show];
}

+ (void) alertWithInfoMessage:(NSString*)message
{
  [[[UIAlertView alloc] initWithTitle:JTLOCALIZE(@"Info") message:message delegate:self cancelButtonTitle:JTLOCALIZE(@"Ok") otherButtonTitles: nil] show];
}

@end
