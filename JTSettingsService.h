//
//  ConfigurationService.h
//  ScanTest
//
//  Created by jTribe - love your apps on 29/07/12.
//
//

// TODO: why is that a singleton? Could it not just be a set of class methods?

#import "JTSingleton.h"

@interface JTSettingsService : NSObject

+ (JTSettingsService*) sharedInstance;

+ (NSString *) stringForKey:(NSString*)key defaultValue:(NSString*)defaultString;
+ (NSString *) serverBaseURLStringWithDefault:(NSString*)serverBaseURLString;
+ (void) addServerBaseURLString:(NSString*)serverBaseURLString;

@end
