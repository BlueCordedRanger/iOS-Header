//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeyboardArbiter/NSXPCListenerDelegate-Protocol.h>

@class BKSApplicationStateMonitor, FBSScene, FBSWorkspace, NSMutableArray, NSString, NSXPCListener, _UIKeyboardArbiterHandle, _UIKeyboardChangedInformation;
@protocol OS_dispatch_queue, _UIKeyboardArbiterLink;

@interface _UIKeyboardArbiter : NSObject <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    NSMutableArray *_clients;
    _UIKeyboardArbiterHandle *_activeHandle;
    _UIKeyboardArbiterHandle *_previouslyActiveHandle;
    NSString *_currentBundleIdForHardwareKeyboard;
    _UIKeyboardArbiterHandle *_keyboardFocusHandle;
    _UIKeyboardArbiterHandle *_commandFocusHandle;
    FBSWorkspace *_workspace;
    FBSScene *_scene;
    int _updateCounter;
    BKSApplicationStateMonitor *_stateMonitor;
    _UIKeyboardArbiterHandle *_disablingHandle;
    id <_UIKeyboardArbiterLink> _sceneLink;
    _UIKeyboardChangedInformation *_lastUpdate;
}

@property(retain, nonatomic) _UIKeyboardChangedInformation *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(readonly, nonatomic) id <_UIKeyboardArbiterLink> sceneLink; // @synthesize sceneLink=_sceneLink;
- (void).cxx_destruct;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setKeyboardTotalDisable:(_Bool)arg1 withFence:(id)arg2 fromHandler:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handlerRequestedFocus:(id)arg1;
- (void)transition:(id)arg1 eventStage:(unsigned long long)arg2 withInfo:(id)arg3 fromHandler:(id)arg4;
- (void)processWithPID:(int)arg1 foreground:(_Bool)arg2 suspended:(_Bool)arg3;
- (void)updateInterestedBundleIDs;
- (id)handlerForBundleID:(id)arg1;
- (id)handlerForPID:(int)arg1;
- (void)activateClients;
- (void)reevaluateSceneSettings;
- (void)updateSuppression:(_Bool)arg1 ofPIDs:(id)arg2;
- (void)updateSceneSettings:(id)arg1;
- (void)handleUnexpectedDeallocForHandler:(id)arg1;
- (_Bool)handler:(id)arg1 deactivateSceneLayer:(id)arg2;
- (void)checkHostingState;
- (_Bool)handler:(id)arg1 activateSceneLayer:(id)arg2;
- (void)newClientConnected:(id)arg1 withExpectedState:(id)arg2 onConnected:(CDUnknownBlockType)arg3;
- (void)completeKeyboardStatusChangedFromHandler:(id)arg1;
- (void)updateKeyboardStatus:(id)arg1 fromHandler:(id)arg2;
- (void)scheduleWindowTimeout;
- (void)reevaluateHardwareKeyboardClient;
- (void)runOperations:(CDUnknownBlockType)arg1 onHandler:(id)arg2;
- (void)attemptConnection;
- (void)retrieveClientDebugInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)captureStateForDebug;
- (void)retrieveDebugInformationWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (id)_descriptionWithScene:(_Bool)arg1;
- (void)dealloc;
- (void)resume;
- (id)initWithLink:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
