//
//  JTApplication.h
//  jTribe
//
//  Created by Armin Kroll on 14/02/12.
//  Copyright (c) 2012 jTribe Holdings Pty Ltd. All rights reserved.
//

// Contains all the goodies you need for your app. Add this and make your dev live less repetetive

#import "UIViewController+Root.h"
#import "JTSingleton.h"
#import "JTLogging.h"
#import "JTAlert.h"


@interface JTApplication : NSObject

// Block / Handler types
typedef void (^JTCompletionHandler)(id input);
typedef void (^JTSuccessHandler)(id inParameter);
typedef void (^JTFailureHandler)(NSError *inError);
typedef id   (^JTMappingHandler)(id input);
typedef id   (^JTParsingHandler)(id input);

#define JTREQUESTORErrorDomain @"au.com.jtribe.REQUESTOR.ErrorDomain"

#ifndef __OPTIMIZE__
#    define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#    define DLog(...) {}
#endif

// NSLocalizedString(key,comment) would lookup the key and return the comment if key not found. So here we use the string as the key and default value at the same time. This way you can add your proper string in the code in English. As long as you use the same string in the language specific resource file you are fine. e.g. "hello world" = "hallo zusammen"
#define JTLOCALIZE(key) NSLocalizedString(key, key)

+ (BOOL) isUsedFirstTime;
+ (void) incrementUsedCount;
+ (NSInteger) usedCount;

@end
