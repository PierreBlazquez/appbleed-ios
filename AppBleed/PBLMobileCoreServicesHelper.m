//
//  PBLMobileCoreServicesHelper.m
//  AppBleed
//
//  Created by Pierre BLAZQUEZ on 16/09/2017.
//  Copyright © 2017 Pierre BLAZQUEZ. All rights reserved.
//

#import "PBLMobileCoreServicesHelper.h"

@implementation PBLMobileCoreServicesHelper
@synthesize isReady;
@synthesize installedApps;

+ (instancetype)sharedHelper {
    static dispatch_once_t p = 0;
    __strong static id _sharedObject = nil;
    
    dispatch_once(&p, ^{
        NSLog(@"%s: %@", __PRETTY_FUNCTION__, @"Creating instance...");
        _sharedObject = [[self alloc] init];
    });
    
    NSLog(@"%s: %@", __PRETTY_FUNCTION__, @"Returning instance...");
    return _sharedObject;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        installedApps = [NSMutableArray array];
        isReady = NO;
        
        NSLog(@"%s: %@", __PRETTY_FUNCTION__, @"Opening framework...");
        if ([self _openFramework]) {
            NSLog(@"%s: %@", __PRETTY_FUNCTION__, @"Retrieving installed apps...");
            [self _retrieveInstalledApps];
            
            isReady = YES;
        }
    }
    return self;
}

- (BOOL)_openFramework {
    BOOL isOpened = NO;
    
    handle = dlopen(kFmwkToOpen, RTLD_LAZY);
    
    if (handle) {
        NSLog(@"%s: %@", __PRETTY_FUNCTION__, @"Framework opened");
        isOpened = YES;
    }
    else {
        NSLog(@"%s: %@", __PRETTY_FUNCTION__, @"Can't open framework");
    }
    
    return isOpened;
}

- (BOOL)_closeFramework {
    BOOL isClosed = NO;
    
    if (handle) {
        
        dlclose(handle);
        
        if (!handle) {
            NSLog(@"%s: %@", __PRETTY_FUNCTION__, @"Framework closed");
            
            isClosed = YES;
        }
        else {
            NSLog(@"%s: %@", __PRETTY_FUNCTION__, @"Can't close framework");
        }
    }
    
    return isClosed;
}

- (void)refreshInstalledApps {
    if (isReady) {
        NSLog(@"%s: %@", __PRETTY_FUNCTION__, @"We are ready. Retrieving...");
        [self _retrieveInstalledApps];
    }
    else {
        NSLog(@"%s: %@", __PRETTY_FUNCTION__, @"We are not ready. Go fuck yourself.");
    }
}

- (void)_retrieveInstalledApps {
    @synchronized (self) {
        installedApps = [NSMutableArray array];
        
        NSLog(@"%s: %@", __PRETTY_FUNCTION__, @"Retrieving LSApplicationWorkspace class...");
        if ([self _retrieveClass]) {
            NSLog(@"%s: %@", __PRETTY_FUNCTION__, @"Retrieving LSApplicationWorkspace class done");
            
            NSLog(@"%s: %@", __PRETTY_FUNCTION__, @"Getting shared instance...");
            if ([self _getSharedInstance]) {
                NSLog(@"%s: %@", __PRETTY_FUNCTION__, @"We have the shared instance");
                
                NSLog(@"%s: %@", __PRETTY_FUNCTION__, @"Populating installedApps...");
                if ([self _populateApps]) {
                    NSLog(@"%s: %@", __PRETTY_FUNCTION__, @"installedApps populated");
                }
                else {
                    NSLog(@"%s: %@", __PRETTY_FUNCTION__, @"Can't populate installedApps");
                }
            }
            else {
                NSLog(@"%s: %@", __PRETTY_FUNCTION__, @"We do not have the shared instance");
            }
        }
        else {
            NSLog(@"%s: %@", __PRETTY_FUNCTION__, @"Can't retrieve LSApplicationWorkspace class");
        }
    }
}

- (BOOL)_retrieveClass {
    BOOL canRetrieve = NO;
    
    LSApplicationWorkspaceClass = NSClassFromString(@"LSApplicationWorkspace");
    if (LSApplicationWorkspaceClass) {
        canRetrieve = YES;
    }
    
    return canRetrieve;
}

- (BOOL)_getSharedInstance {
    BOOL gotIt = NO;
    
    if ([LSApplicationWorkspaceClass respondsToSelector:@selector(defaultWorkspace)]) {
        defaultWorkspace = [LSApplicationWorkspaceClass defaultWorkspace];
        if (defaultWorkspace) {
            gotIt = YES;
        }
    }
    return gotIt;
}

- (BOOL)_populateApps {
    BOOL didPopulate = NO;
    
    if ([defaultWorkspace respondsToSelector:@selector(allApplications)]) {
        installedApps = [defaultWorkspace allApplications];
        didPopulate = YES;
    }
    
    return didPopulate;
}

- (void)dealloc {
    [self _closeFramework];
    installedApps = nil;
}

@end
