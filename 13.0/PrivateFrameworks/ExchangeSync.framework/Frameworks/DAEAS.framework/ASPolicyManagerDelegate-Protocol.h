//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ASPolicyManager, NSString;

@protocol ASPolicyManagerDelegate
- (NSString *)accountID;
- (NSString *)accountPersistentUUID;
- (void)policyManagerFailedToUpdatePolicy:(ASPolicyManager *)arg1;
- (void)policyManagerUpdatedPolicy:(ASPolicyManager *)arg1;
@end

