//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoard/NSObject-Protocol.h>

@class RBProcess, RBSProcessIdentifier, RBSProcessIdentity;
@protocol RBBundleProperties;

@protocol RBBundlePropertiesManaging <NSObject>
- (void)removeProcess:(RBProcess *)arg1;
- (id <RBBundleProperties>)propertiesForIdentity:(RBSProcessIdentity *)arg1 identifier:(RBSProcessIdentifier *)arg2;
@end
