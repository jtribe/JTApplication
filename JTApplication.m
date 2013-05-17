//
//  JTApplication.m
//  EggRaider
//
//  Created by Armin Kroll on 14/02/12.
//  Copyright (c) 2012 jTribe Holdings Pty Ltd. All rights reserved.
//

#import "JTApplication.h"

@implementation JTApplication

+ (BOOL) isUsedFirstTime
{
  return ([JTApplication usedCount] <= 1);
}

+ (void) incrementUsedCount
{
  static NSString *nameConstant = @"usedCounter";
  NSInteger counter = [[NSUserDefaults standardUserDefaults] integerForKey:nameConstant];
  counter++;
  [[NSUserDefaults standardUserDefaults] setInteger:counter forKey:nameConstant];
  [[NSUserDefaults standardUserDefaults] synchronize];
}

+ (NSInteger) usedCount
{
  static NSString *nameConstant = @"usedCounter";
  NSInteger counter = [[NSUserDefaults standardUserDefaults] integerForKey:nameConstant];
  return counter;
}

@end
