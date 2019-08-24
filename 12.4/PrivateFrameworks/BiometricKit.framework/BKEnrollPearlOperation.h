//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BiometricKit/BKEnrollOperation.h>

@class BKIdentity;
@protocol BKEnrollPearlOperationDelegate;

@interface BKEnrollPearlOperation : BKEnrollOperation
{
    _Bool _clientToComplete;
    BKIdentity *_augmentedIdentity;
}

@property(retain, nonatomic) BKIdentity *augmentedIdentity; // @synthesize augmentedIdentity=_augmentedIdentity;
@property(nonatomic) _Bool clientToComplete; // @synthesize clientToComplete=_clientToComplete;
- (void).cxx_destruct;
- (_Bool)resumeWithError:(id *)arg1;
- (_Bool)suspendWithError:(id *)arg1;
- (_Bool)completeWithError:(id *)arg1;

// Remaining properties
@property(nonatomic) __weak id <BKEnrollPearlOperationDelegate> delegate; // @dynamic delegate;

@end
