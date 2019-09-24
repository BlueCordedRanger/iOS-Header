//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturb/DNDModeAssertion.h>

#import <DoNotDisturbServer/DNDSModernAssertionSourceResolution-Protocol.h>

@class NSString;

@interface DNDModeAssertion (Resolution) <DNDSModernAssertionSourceResolution>
+ (id)predicateForModeAssertionsTakenBeforeDate:(id)arg1;
+ (id)predicateForModeAssertionsWithLifetimeClass:(Class)arg1;
+ (id)predicateForModeAssertionsWithDeviceIdentifier:(id)arg1;
+ (id)predicateForModeAssertionsWithClientIdentifiers:(id)arg1;
+ (id)predicateForModeAssertionsWithUUIDs:(id)arg1;
- (id)resolveWithExpectedRemoteDeviceIdentifier:(id)arg1 localDeviceIdentifier:(id)arg2 remoteDeviceIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
