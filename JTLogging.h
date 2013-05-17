//
//  JTLogging.h
//
//  Created by Armin Kroll on 31/03/12.
//  Copyright (c) 2012 jTribe Holdings Pty Ltd. All rights reserved.
//


/*
 Simple but useful logging.
 
 Problem: You have DLogs everywhere in your code producing moise in the console. So you start commenting stuff out and it stays that way. This makes your code ugly and stale.
 Solution: Use JTLogging. Repalce all our DLog/NSLog with JTLog. No need to comment them out. Just add 
 #define JT_LOGGING 0 
 to your class to switch logging off for this class. 
 
 To switch logging globally on or off use the constants in this header file.
 
 Want to force logging to output across whole app?
 #define ALL_VERBOSE 1 
 
 Want to silence all logging across app?
 #define ALL_SILENT  1
 
 Switch ON logging in a particular class?
 #define JT_LOGGING 1
 
 Switch OFF logging in a particular class?
 #define JT_LOGGING 0
 */

#define ALL_VERBOSE 1   //  1 - force all logging ON
#define ALL_SILENT  0   //  1 - force all logging OFF
#if (JT_VERBOSE || ALL_VERBOSE) && !ALL_SILENT
#    define JTLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#    define JTLog(...) {}
#endif

