//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AMSMescalBagContract-Protocol.h"
#import "AMSURLBagContract-Protocol.h"

@class AMSBagValue;

@protocol IAPInfoBagContract <AMSURLBagContract, AMSMescalBagContract>
@property(readonly) AMSBagValue *IAPInfoDatabaseID;
@property(readonly) AMSBagValue *IAPInfoForcedRefreshMinutes;
@property(readonly) AMSBagValue *IAPInfoBaseURL;
@end
