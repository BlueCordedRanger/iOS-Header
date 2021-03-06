//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/SBSRemoteAlertHandleObserver-Protocol.h>

@class NSDate, NSString, PLTitledSummaryPlatterView, SBSRemoteAlertHandle, SFChargingUICoordinator, SFWirelessChargingMonitor;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFChargingCenterClient : NSObject <SBSRemoteAlertHandleObserver>
{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    int _triggerEngagementToken;
    int _triggerError1;
    int _triggerError4;
    _Bool _forcePill;
    _Bool _triggerUIForInBandComms;
    double _previousPhoneChargeLevel;
    unsigned char _processedErrorCode;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SBSRemoteAlertHandle *_currentRemoteHandle;
    CDUnknownBlockType _visualInformationRequestHandler;
    CDUnknownBlockType _requestHandler;
    NSObject<OS_dispatch_queue> *_workQueue;
    SFWirelessChargingMonitor *_monitor;
    SFChargingUICoordinator *_uiCoordinator;
    NSObject<OS_dispatch_source> *_watchUITimer;
    NSString *_mostRecentSuccessfullActivationReason;
    NSDate *_mostRecentDeactivationDate;
}

+ (void)playShortEngagementWithSound:(_Bool)arg1 haptic:(_Bool)arg2;
+ (void)notificationFeedbackConfigurationWithSound:(_Bool)arg1 andHaptic:(_Bool)arg2 forFeedbackType:(long long)arg3 completion:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSDate *mostRecentDeactivationDate; // @synthesize mostRecentDeactivationDate=_mostRecentDeactivationDate;
@property(retain, nonatomic) NSString *mostRecentSuccessfullActivationReason; // @synthesize mostRecentSuccessfullActivationReason=_mostRecentSuccessfullActivationReason;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *watchUITimer; // @synthesize watchUITimer=_watchUITimer;
@property(retain, nonatomic) SFChargingUICoordinator *uiCoordinator; // @synthesize uiCoordinator=_uiCoordinator;
@property(retain, nonatomic) SFWirelessChargingMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy, nonatomic) CDUnknownBlockType requestHandler; // @synthesize requestHandler=_requestHandler;
@property(copy, nonatomic) CDUnknownBlockType visualInformationRequestHandler; // @synthesize visualInformationRequestHandler=_visualInformationRequestHandler;
@property(nonatomic) SBSRemoteAlertHandle *currentRemoteHandle; // @synthesize currentRemoteHandle=_currentRemoteHandle;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)onqueue_updateActivationContext:(id)arg1 withCoverSheetPlatterFrame:(struct CGRect)arg2;
- (void)onqueue_updateActivationContext:(id)arg1 withKeyChargingDevice:(id)arg2;
- (void)onqueue_updateActivationContextWithPowerSourcesData:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)contextsForRemoteAlertActivationWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onqueue_requestPresentationForReason:(id)arg1 withKeyChargingDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onqueue_sendPresentationRequestForChargingDevice:(id)arg1;
- (void)onqueue_presentationRequestContextsForReason:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)onqueue_canPresentForDevice:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) long long numberOfDevicesCharging;
- (void)updatePlatterView;
- (void)reevaluatePlatterViewShowEligibility;
@property(readonly, nonatomic) PLTitledSummaryPlatterView *platterView;
- (void)setUpPlatterView;
- (void)onqueue_invalidate;
- (void)invalidate;
- (void)onqueue_activate;
- (void)activate;
- (void)dealloc;
- (void)createWorkQueue;
- (void)setUpPowerMonitor;
- (void)listenToNotifications;
- (void)restorePersistedErrorNotifications;
- (void)checkDefaults;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

