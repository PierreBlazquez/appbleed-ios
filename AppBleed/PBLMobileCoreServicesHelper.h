//
//  PBLMobileCoreServicesHelper.h
//  AppBleed
//
//  Created by Pierre BLAZQUEZ on 16/09/2017.
//  Copyright © 2017 Pierre BLAZQUEZ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <dlfcn.h>

#import "XBApplicationController.h"
#import "LSApplicationWorkspace.h"
#import "LSApplicationProxy.h"
#import "LSBundleProxy.h"
#import "LSResourceProxy.h"
#import "_LSQueryResult.h"

#define kFmwkToOpen "/System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices"

@interface PBLMobileCoreServicesHelper : NSObject {
    Class                   LSApplicationWorkspaceClass;
    LSApplicationWorkspace  *defaultWorkspace;
    void                    *handle;
}

#pragma mark Properties
/**
 * @brief Indicate if the helper has been created properly and is ready to serve
 */
@property (readonly) BOOL isReady;

/**
 * @brief Installed apps (array of LSApplicationProxy objects)
 */
@property (strong, readonly, atomic) NSMutableArray<LSApplicationProxy *> *installedApps;

#pragma mark Methods
/**
 * @brief Create or retrieve a shared instance of the class
 * @return The instance
 */
+ (instancetype)sharedHelper;

/**
 * @brief Create a new instance of the class
 * @return The instance
 */
- (instancetype)init;

/**
 * @brief Ask the object to refresh the installedApps array
 */
- (void)refreshInstalledApps;

@end
