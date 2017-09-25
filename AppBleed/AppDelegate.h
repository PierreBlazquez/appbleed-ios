//
//  AppDelegate.h
//  AppBleed
//
//  Created by Pierre BLAZQUEZ on 13/02/2017.
//  Copyright © 2017 Pierre BLAZQUEZ. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PBLMobileCoreServicesHelper.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate> {
    PBLMobileCoreServicesHelper *mcsHelper;
}

@property (strong, nonatomic) UIWindow *window;


@end

