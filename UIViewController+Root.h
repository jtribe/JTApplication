//
//  RootViewController+Root.h
//  EggRaider
//
//  Created by Armin Kroll on 10/02/12.
//  Copyright (c) 2012 jTribe Holdings Pty Ltd. All rights reserved.
//

/*
 A standard RootViewController may have child controllers.
 Lets's manage those in a mutable dictionary so they can be accessed by tag.
 Best to use an enum for the tags to make them unique.
Sample:
typedef enum {
  kStartControllerTag = 0,
  kAnothertControllerTag,
  kMaxNumTags   // this will allow you to iterate like for (int i = 0; i < kMaxNumTags; i++ )
} ControllerTag;
 */

@interface UIViewController (Root)
//
+ (UIViewController*) rootViewController;
- (id) rootViewController;
+ (UIWindow*) window;
- (id) childControllerForTag:(NSInteger)tag dictionary:(NSDictionary*)dict;
// full screen progress spinner
- (void) showProgress;
- (void) hideProgress;

- (NSString*) stringWithInt:(NSInteger)value;
- (NSInteger) intWithString:(NSString*)string;
@end
