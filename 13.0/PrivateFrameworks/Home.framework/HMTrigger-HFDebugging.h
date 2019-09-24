//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMTrigger.h>

#import <Home/HFStateDumpBuildable-Protocol.h>

@class NSString;

@interface HMTrigger (HFDebugging) <HFStateDumpBuildable>
+ (id)hf_sanitizeTriggerName:(id)arg1 home:(id)arg2;
+ (id)hf_localizedStringForSignficantEvent:(id)arg1 offset:(id)arg2;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_forceDisableReasons;
- (_Bool)hf_shouldDisplayTrigger;
@property(readonly, nonatomic) _Bool hf_isShortcutOwned;
@property(readonly, nonatomic) _Bool hf_requiresConfirmationToRun;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
