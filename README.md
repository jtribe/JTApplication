JTApplication
=============

Useful bits for iOS apps.

Integration: Just add JTApplicaiton.h to your pre-compiled header file (.pch under Supporting Files)

A word about Root View 
We think it's a good practice that an app has a RootViewController. 
If you build custom UIs then the RootViewController is a MUST and will manage all your other controllers.

UIViewController+Root 
---------------------

adds some useful stuff to a controller
- managing child controllers by tag
- easy access to the window
- a simple progress spinner
- easy access to the the apps rootViewController

JTSingleton
------------
- one liner to make a class a singleton class

JTApplication
-------------
- simple counter that knows how many times tha app was used. Also checks if it's used the first time in case you want to show a tour.

JTAlert
-------
- very simple standard alerts (alerts like "not yet implemented")
