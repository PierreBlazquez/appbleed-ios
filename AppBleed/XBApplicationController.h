//
//  XBApplicationController.h
//  AppBleed
//
//  Created by Pierre BLAZQUEZ on 13/02/2017.
//  Copyright © 2017 Pierre BLAZQUEZ. All rights reserved.
//

@interface XBApplicationController : NSObject

+ (id)sharedInstance;

- (id)_allApplications;
- (id)_allApplicationsFilteredBySystem:(bool)arg1 bySplashBoard:(bool)arg2;
- (void)_captureLaunchImageForApplication:(id)arg1 withCompatibilityInfo:(id)arg2 firstImageIsReady:(id /* block */)arg3 withCompletion:(id /* block */)arg4;
- (void)_captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(id /* block */)arg2;
- (void)_migrateDataIfNeeded;
- (void)_removeCachedLaunchImagesForApplications:(id)arg1 forgettingApps:(bool)arg2;
- (void)_removeLaunchImagesMatchingPredicate:(id)arg1 forApplications:(id)arg2 forgettingApps:(bool)arg3;
- (id)allSplashBoardApplications;
- (id)allSplashBoardSystemApplications;
- (id)launchRequestsForApplication:(id)arg1 withCompatibilityInfo:(id)arg2;
- (void)removeAllGeneratedLaunchImages;
- (void)removeAllGeneratedLaunchImagesAndSnapshots;
- (void)resetEverything;

@end
