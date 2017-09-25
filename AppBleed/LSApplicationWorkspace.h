//
//  LSApplicationWorkspace.h
//  AppBleed
//
//  Created by Pierre BLAZQUEZ on 10/08/2017.
//  Copyright © 2017 Pierre BLAZQUEZ. All rights reserved.
//

@interface LSApplicationWorkspace : NSObject {
    NSXPCConnection * _connection;
    NSMutableDictionary * _createdInstallProgresses;
    bool  _enhancedAppValidationEnabled;
}

@property (readonly) NSXPCConnection *connection;

+ (id)activeManagedConfigurationRestrictionUUIDs;
+ (id)callbackQueue;
+ (id)defaultWorkspace;

- (id)URLOverrideForURL:(id)arg1;
- (id)URLSchemesOfType:(long long)arg1;
- (void)_LSClearSchemaCaches;
- (void)_LSFailedToOpenURL:(id)arg1 withBundle:(id)arg2;
- (bool)_LSPrivateDatabaseNeedsRebuild;
- (bool)_LSPrivateRebuildApplicationDatabasesForSystemApps:(bool)arg1 internal:(bool)arg2 user:(bool)arg3;
- (void)_LSPrivateSyncWithMobileInstallation;
- (void)_LSSendApplicationIconDidChangeForBundleID:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allApplications;
- (id)allInstalledApplications;
- (bool)allowsAlternateIcons;
- (id)applicationForOpeningResource:(id)arg1;
- (id)applicationForUserActivityDomainName:(id)arg1;
- (id)applicationForUserActivityType:(id)arg1;
- (bool)applicationIsInstalled:(id)arg1;
- (id)applicationProxiesWithPlistFlags:(unsigned int)arg1 bundleFlags:(unsigned long long)arg2;
- (id)applicationsAvailableForHandlingURLScheme:(id)arg1;
- (id)applicationsAvailableForOpeningDocument:(id)arg1;
- (id)applicationsAvailableForOpeningURL:(id)arg1;
- (id)applicationsAvailableForOpeningURL:(id)arg1 legacySPI:(bool)arg2;
- (id)applicationsForUserActivityType:(id)arg1;
- (id)applicationsForUserActivityType:(id)arg1 limit:(unsigned long long)arg2;
- (id)applicationsOfType:(unsigned long long)arg1;
- (id)applicationsWithAudioComponents;
- (id)applicationsWithUIBackgroundModes;
- (id)applicationsWithVPNPlugins;
- (id)bundleIdentifiersForMachOUUIDs:(id)arg1 error:(id*)arg2;
- (void)clearAdvertisingIdentifier;
- (void)clearCreatedProgressForBundleID:(id)arg1;
- (id)connection;
- (id)createDeviceIdentifierWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;
- (id)createdInstallProgresses;
- (void)dealloc;
- (id)delegateProxy;
- (id)deviceIdentifierForAdvertising;
- (id)deviceIdentifierForVendor;
- (id)directionsApplications;
- (bool)downgradeApplicationToPlaceholder:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (bool)enhancedAppLoggingEnabled;
- (void)enumerateApplicationsForSiriWithBlock:(id /* block */)arg1;
- (void)enumerateApplicationsOfType:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)enumerateApplicationsOfType:(unsigned long long)arg1 legacySPI:(bool)arg2 block:(id /* block */)arg3;
- (void)enumerateBundlesOfType:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)enumerateBundlesOfType:(unsigned long long)arg1 legacySPI:(bool)arg2 block:(id /* block */)arg3;
- (void)enumerateBundlesOfType:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumeratePluginsMatchingQuery:(id)arg1 withBlock:(id /* block */)arg2;
- (bool)establishConnection;
- (bool)getClaimedActivityTypes:(id*)arg1 domains:(id*)arg2;
- (void)getKnowledgeUUID:(id*)arg1 andSequenceNumber:(id*)arg2;
- (id)init;
- (bool)installApplication:(id)arg1 withOptions:(id)arg2;
- (bool)installApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (bool)installApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)installPhaseFinishedForProgress:(id)arg1;
- (id)installProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2;
- (id)installProgressForBundleID:(id)arg1 makeSynchronous:(unsigned char)arg2;
- (id)installedPlugins;
- (bool)invalidateIconCache:(id)arg1;
- (bool)isApplicationAvailableToOpenURL:(id)arg1 error:(id*)arg2;
- (bool)isApplicationAvailableToOpenURL:(id)arg1 includePrivateURLSchemes:(bool)arg2 error:(id*)arg3;
- (bool)isApplicationAvailableToOpenURLCommon:(id)arg1 includePrivateURLSchemes:(bool)arg2 error:(id*)arg3;
- (id)legacyApplicationProxiesListWithType:(unsigned long long)arg1;
- (id)machOUUIDsForBundleIdentifiers:(id)arg1 error:(id*)arg2;
- (id)observedInstallProgresses;
- (bool)openApplicationWithBundleID:(id)arg1;
- (bool)openSensitiveURL:(id)arg1 withOptions:(id)arg2;
- (bool)openSensitiveURL:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (bool)openURL:(id)arg1;
- (bool)openURL:(id)arg1 withOptions:(id)arg2;
- (bool)openURL:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(bool)arg4 userInfo:(id)arg5 delegate:(id)arg6;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(bool)arg4 userInfo:(id)arg5 options:(id)arg6 delegate:(id)arg7;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4 delegate:(id)arg5;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 userInfo:(id)arg3;
- (id)placeholderApplications;
- (id)pluginsMatchingQuery:(id)arg1 applyFilter:(id /* block */)arg2;
- (id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3;
- (id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3 applyFilter:(id /* block */)arg4;
- (id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3 withFilter:(id /* block */)arg4;
- (id)privateURLSchemes;
- (id)publicURLSchemes;
- (bool)registerApplication:(id)arg1;
- (bool)registerApplicationDictionary:(id)arg1;
- (bool)registerApplicationDictionary:(id)arg1 withObserverNotification:(int)arg2;
- (bool)registerPlugin:(id)arg1;
- (id)remoteObserver;
- (void)removeDeviceIdentifierForVendorName:(id)arg1 bundleIdentifier:(id)arg2;
- (void)removeInstallProgressForBundleID:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)removedSystemApplications;
- (bool)restoreSystemApplication:(id)arg1;
- (void)scanForApplicationStateChangesFromRank:(id)arg1 toRank:(id)arg2;
- (void)scanForApplicationStateChangesWithWhitelist:(id)arg1;
- (void)sendApplicationStateChangedNotificationsFor:(id)arg1;
- (void)sendInstallNotificationForApp:(id)arg1 withPlugins:(id)arg2;
- (void)sendNotificationForApp:(id)arg1 withExtensions:(id)arg2 OperationType:(unsigned long long)arg3 success:(bool)arg4;
- (void)sendUninstallNotificationForApp:(id)arg1 withPlugins:(id)arg2;
- (bool)uninstallApplication:(id)arg1 withOptions:(id)arg2;
- (bool)uninstallApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)uninstallApplication:(id)arg1 withOptions:(id)arg2 usingBlock:(id /* block */)arg3;
- (bool)uninstallSystemApplication:(id)arg1 withOptions:(id)arg2 usingBlock:(id /* block */)arg3;
- (bool)unregisterApplication:(id)arg1;
- (bool)unregisterPlugin:(id)arg1;
- (id)unrestrictedApplications;
- (bool)updateRecordForApp:(id)arg1 withSINF:(id)arg2 iTunesMetadata:(id)arg3 error:(id*)arg4;
- (bool)updateSINFWithData:(id)arg1 forApplication:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (bool)updateiTunesMetadataWithData:(id)arg1 forApplication:(id)arg2 options:(id)arg3 error:(id*)arg4;

@end
