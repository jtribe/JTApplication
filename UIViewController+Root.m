//
//  RootViewController+Root.m
//
//  Created by Armin Kroll on 10/02/12.
//  Copyright (c) 2012 jTribe Holdings Pty Ltd. All rights reserved.
//

#import "UIViewController+Root.h"
#import "UIResponder+AppDelegateAddons.h"

@implementation UIViewController (Root)


- (id) childControllerForTag:(NSInteger)tag dictionary:(NSDictionary*)dict
{
    return [dict objectForKey:[NSString stringWithFormat:@"%d",tag]];
}

// TODO: handle rotation

// Using a hard coded tag is not ideal but it does the job for now.
#define PROGRESS_VIEW_TAG 987
- (void) showProgress
{
  UIView *spinnerView = [[UIView alloc] initWithFrame:[UIScreen mainScreen].bounds];
  spinnerView.backgroundColor = [UIColor colorWithWhite:0.0 alpha:0.75];
  // activity indicator
  {
    UIActivityIndicatorView *spinner = [[UIActivityIndicatorView alloc] initWithActivityIndicatorStyle:(UIActivityIndicatorViewStyleWhiteLarge)];
    [spinner startAnimating ];
    spinner.center = CGPointMake([UIScreen mainScreen].bounds.size.width/2, [UIScreen mainScreen].bounds.size.height/2);
    [spinnerView addSubview:spinner];
    spinnerView.center = CGPointMake([UIScreen mainScreen].bounds.size.width/2, [UIScreen mainScreen].bounds.size.height/2);
    spinnerView.tag = PROGRESS_VIEW_TAG;
    
    [[UIViewController window] addSubview:spinnerView];
  }
}

- (void) hideProgress
{
  [[[UIViewController window] viewWithTag:PROGRESS_VIEW_TAG] removeFromSuperview];
}


@end
