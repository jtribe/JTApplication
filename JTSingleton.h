

/*
 Useful macro to make a class a singleton
 You need to add this method to your class header
 + (YOUR_CLASS) sharedInstance;
 
 In the implementation file just add where your @synthezise would be
 JTSYNTHESIZE_SINGLETON_FOR_CLASS(YORU_CLASS)
 
 Done - your class is now a singleton and you can access it like this:
 [YOUR_CLASS sharedInstance];
 (e.g. [SharedProduct sharedInstance].price;)
 
 */

#define JTSYNTHESIZE_SINGLETON_FOR_CLASS(classname) \
+ (classname *)sharedInstance \
{\
    static classname *sharedInstance = nil; \
    static dispatch_once_t onceToken; \
    dispatch_once(&onceToken, ^{ \
        sharedInstance = [[classname alloc] init]; \
    }); \
    return sharedInstance; \
}
