//
//  ConfigurationService.m
//  ScanTest
//
//  Created by jTribe - love your apps on 29/07/12.
//
//

#import "JTSettingsService.h"

@implementation JTSettingsService
JTSYNTHESIZE_SINGLETON_FOR_CLASS(JTSettingsService)


+ (NSString *) stringForKey:(NSString*)key defaultValue:(NSString*)defaultString
{
  NSString *returnString = nil;
  // settings first (in case app has a settings bundle)
  returnString = [[NSUserDefaults standardUserDefaults] objectForKey:key];
  if (returnString && [returnString length] > 0) return returnString;
  // info plist
  returnString = [[[NSBundle mainBundle] infoDictionary] objectForKey:key];
  if (returnString && [returnString length] > 0) return returnString;
  // default
  return defaultString;
}

+ (NSString *) serverBaseURLStringWithDefault:(NSString*)serverBaseURLString
{
  return [JTSettingsService stringForKey:@"endpointURL_" defaultValue:serverBaseURLString];
}

+ (void) addServerBaseURLString:(NSString*)serverBaseURLString
{
  [[NSUserDefaults standardUserDefaults] setValue:serverBaseURLString forKey:@"endpointURL_"];
}

@end
