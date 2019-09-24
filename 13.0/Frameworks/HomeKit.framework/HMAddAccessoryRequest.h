//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessoryCategory, HMHome, NSString, NSUUID;

@interface HMAddAccessoryRequest : NSObject <NSSecureCoding>
{
    _Bool _requiresSetupPayloadURL;
    _Bool _requiresOwnershipToken;
    HMHome *_home;
    NSString *_accessoryName;
    HMAccessoryCategory *_accessoryCategory;
    NSUUID *_requestIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, nonatomic) _Bool requiresOwnershipToken; // @synthesize requiresOwnershipToken=_requiresOwnershipToken;
@property(readonly, nonatomic) _Bool requiresSetupPayloadURL; // @synthesize requiresSetupPayloadURL=_requiresSetupPayloadURL;
@property(readonly, nonatomic) HMAccessoryCategory *accessoryCategory; // @synthesize accessoryCategory=_accessoryCategory;
@property(readonly, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithIdentifer:(id)arg1 accessoryName:(id)arg2 accessoryCategory:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)payloadWithURL:(id)arg1 ownershipToken:(id)arg2;
- (id)payloadWithOwnershipToken:(id)arg1;

@end
