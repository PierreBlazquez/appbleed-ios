//
//  LSResourceProxy.h
//  AppBleed
//
//  Created by Pierre BLAZQUEZ on 10/08/2017.
//  Copyright © 2017 Pierre BLAZQUEZ. All rights reserved.
//

#import "_LSQueryResult.h"

@interface LSResourceProxy : _LSQueryResult <NSCopying, NSSecureCoding> {
    NSString * _boundApplicationIdentifier;
    NSURL * _boundContainerURL;
    NSURL * _boundDataContainerURL;
    NSString * _boundIconCacheKey;
    NSArray * _boundIconFileNames;
    bool  _boundIconIsBadge;
    bool  _boundIconIsPrerendered;
    NSURL * _boundResourcesDirectoryURL;
    NSString * _localizedName;
    bool  _privateDocumentIconAllowOverride;
    unsigned long long  _propertyListCachingStrategy;
}

@property (nonatomic, copy) NSString *boundApplicationIdentifier;
@property (nonatomic, copy) NSURL *boundContainerURL;
@property (nonatomic, copy) NSURL *boundDataContainerURL;
@property (nonatomic, copy) NSString *boundIconCacheKey;
@property (nonatomic, copy) NSArray *boundIconFileNames;
@property (nonatomic) bool boundIconIsBadge;
@property (nonatomic) bool boundIconIsPrerendered;
@property (nonatomic, readonly) NSDictionary *boundIconsDictionary;
@property (nonatomic, copy) NSURL *boundResourcesDirectoryURL;
@property (nonatomic, readonly) NSDictionary *iconsDictionary;
@property (nonatomic, copy) NSString *localizedName;
@property (nonatomic) bool privateDocumentIconAllowOverride;
@property (nonatomic) unsigned long long propertyListCachingStrategy;

+ (bool)supportsSecureCoding;

- (id)_boundIconsDictionary;
- (id)_initWithLocalizedName:(id)arg1;
- (id)_initWithLocalizedName:(id)arg1 boundApplicationIdentifier:(id)arg2 boundContainerURL:(id)arg3 dataContainerURL:(id)arg4 boundResourcesDirectoryURL:(id)arg5 boundIconsDictionary:(id)arg6 boundIconCacheKey:(id)arg7 boundIconFileNames:(id)arg8 typeOwner:(id)arg9 boundIconIsPrerendered:(bool)arg10 boundIconIsBadge:(bool)arg11;
- (void)_setBoundIconsDictionary:(id)arg1;
- (id)boundApplicationIdentifier;
- (id)boundContainerURL;
- (id)boundDataContainerURL;
- (id)boundIconCacheKey;
- (id)boundIconFileNames;
- (bool)boundIconIsBadge;
- (bool)boundIconIsPrerendered;
- (id)boundIconsDictionary;
- (id)boundResourcesDirectoryURL;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)iconDataForStyle:(id)arg1 width:(long long)arg2 height:(long long)arg3 options:(unsigned long long)arg4;
- (id)iconDataForVariant:(int)arg1;
- (id)iconDataForVariant:(int)arg1 withOptions:(int)arg2;
- (id)iconStyleDomain;
- (id)iconsDictionary;
- (id)initWithCoder:(id)arg1;
- (id)localizedName;
- (bool)privateDocumentIconAllowOverride;
- (unsigned long long)propertyListCachingStrategy;
- (void)setBoundApplicationIdentifier:(id)arg1;
- (void)setBoundContainerURL:(id)arg1;
- (void)setBoundDataContainerURL:(id)arg1;
- (void)setBoundIconCacheKey:(id)arg1;
- (void)setBoundIconFileNames:(id)arg1;
- (void)setBoundIconIsBadge:(bool)arg1;
- (void)setBoundIconIsPrerendered:(bool)arg1;
- (void)setBoundResourcesDirectoryURL:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setPrivateDocumentIconAllowOverride:(bool)arg1;
- (void)setPropertyListCachingStrategy:(unsigned long long)arg1;
- (void)setTypeOwner:(id)arg1;
- (id)typeOwner;
- (id)uniqueIdentifier;

@end
