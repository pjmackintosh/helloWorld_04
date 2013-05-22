//
//  mkAppDelegate.h
//  helloWorld_04
//
//  Created by Paul Mackintosh on 22/05/2013.
//  Copyright (c) 2013 Paul Mackintosh. All rights reserved.
//

#import <UIKit/UIKit.h>

@class mkViewController;

@interface mkAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) mkViewController *viewController;

@end
