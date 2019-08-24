//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMSecurityFirewallDeclaration_ApplicationsItem : CEMPayloadBase
{
    NSString *_payloadBundleID;
    NSNumber *_payloadAllowed;
}

+ (id)buildRequiredOnlyWithBundleID:(id)arg1 withAllowed:(id)arg2;
+ (id)buildWithBundleID:(id)arg1 withAllowed:(id)arg2;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSNumber *payloadAllowed; // @synthesize payloadAllowed=_payloadAllowed;
@property(copy, nonatomic) NSString *payloadBundleID; // @synthesize payloadBundleID=_payloadBundleID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end
