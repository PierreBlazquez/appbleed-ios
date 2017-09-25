//
//  _LSQueryResult.h
//  AppBleed
//
//  Created by Pierre BLAZQUEZ on 10/08/2017.
//  Copyright © 2017 Pierre BLAZQUEZ. All rights reserved.
//

@interface _LSQueryResult : NSObject <NSCopying, NSSecureCoding>

+ (bool)supportsSecureCoding;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
