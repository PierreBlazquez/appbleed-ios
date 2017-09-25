//
//  _LSDefaults.h
//  AppBleed
//
//  Created by Pierre BLAZQUEZ on 14/02/2017.
//  Copyright © 2017 Pierre BLAZQUEZ. All rights reserved.
//

@interface _LSDefaults : NSObject {
    bool  _appleInternal;
    bool  _hasPersistentPreferences;
    bool  _hasServer;
    NSURL * _iconsGroupContainerURL;
    bool  _inEducationMode;
    bool  _inSyncBubble;
    bool  _inXCTestRigInsecure;
    bool  _isServer;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    NSURL * _systemContainerURL;
    NSURL * _systemGroupContainerURL;
    NSURL * _userContainerURL;
}

@property (getter=isAppleInternal, nonatomic, readonly) bool appleInternal;
@property (readonly) unsigned int currentSchemaVersion;
@property (readonly) double databaseSaveInterval;
@property (readonly) double databaseSaveLatency;
@property (readonly) NSURL *databaseStoreFileURL;
@property (readonly) NSURL *dbSentinelFileURL;
@property (readonly) bool hasPersistentPreferences;
@property bool hasServer;
@property (readonly) NSURL *iconCacheFolderURL;
@property (readonly) NSURL *iconCacheSystemVersionFileURL;
@property (readonly) NSURL *iconsGroupContainerURL;
@property (readonly) NSURL *identifiersFileURL;
@property (getter=isInEducationMode, readonly) bool inEducationMode;
@property (getter=isInSyncBubble, readonly) bool inSyncBubble;
@property (getter=isInXCTestRigInsecure, nonatomic, readonly) bool inXCTestRigInsecure;
@property bool isServer;
@property (readonly) bool isSimulator;
@property (readonly) NSURL *preferencesFileURL;
@property (readonly) NSArray *preferredLocalizations;
@property (readonly) NSURL *queriedSchemesMapFileURL;
@property (readonly) NSURL *securePeferencesFileURL;
@property (readonly) NSURL *systemContainerURL;
@property (readonly) NSURL *systemGroupContainerURL;
@property (readonly) NSURL *userContainerURL;

+ (bool)appleInternal;
+ (bool)hasPersistentPreferences;
+ (bool)hasServer;
+ (id)iconsGroupContainerURL;
+ (bool)inSyncBubble;
+ (bool)inXCTestRigInsecure;
+ (id)sharedInstance;
+ (id)systemContainerURL;
+ (id)systemGroupContainerURL;
+ (id)userContainerURL;

- (unsigned int)currentSchemaVersion;
- (id)darwinNotificationNameForCurrentUser:(id)arg1;
- (double)databaseSaveInterval;
- (double)databaseSaveLatency;
- (id)databaseStoreFileURL;
- (id)databaseUpdateNotificationName;
- (id)dbSentinelFileURL;
- (void)dealloc;
- (id)debugDescription;
- (bool)hasPersistentPreferences;
- (bool)hasServer;
- (id)iconCacheFolderURL;
- (id)iconCacheSystemVersionFileURL;
- (id)iconsGroupContainerURL;
- (id)identifiersFileURL;
- (id)init;
- (bool)isAppleInternal;
- (bool)isInEducationMode;
- (bool)isInSyncBubble;
- (bool)isInXCTestRigInsecure;
- (bool)isServer;
- (bool)isSimulator;
- (id)preferencesFileChangeNotificationName;
- (id)preferencesFileURL;
- (id)preferencesUpdateNotificationName;
- (id)preferredLocalizations;
- (unsigned int)proxyUIDForCurrentEffectiveUID;
- (unsigned int)proxyUIDForUID:(unsigned int)arg1;
- (id)queriedSchemesMapFileURL;
- (id)securePeferencesFileURL;
- (id)serviceNameForConnectionType:(unsigned short)arg1;
- (void)setHasServer:(bool)arg1;
- (void)setIsServer:(bool)arg1;
- (id)systemContainerURL;
- (id)systemGroupContainerURL;
- (id)userContainerURL;
- (id)userPreferencesURL;

@end
