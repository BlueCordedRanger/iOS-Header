//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/BSInvalidatable-Protocol.h>
#import <FrontBoardServices/FBSApplicationPlaceholderProgress-Protocol.h>

@class FBSApplicationPlaceholder, NSProgress, NSString;
@protocol OS_dispatch_queue;

@interface FBSApplicationPlaceholderProgress : NSObject <FBSApplicationPlaceholderProgress, BSInvalidatable, BSDescriptionProviding>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSProgress *_progress;
    int _invalidated;
    long long _cancellationAllowed;
    long long _state;
    double _percentComplete;
    unsigned long long _installPhase;
    unsigned long long _installState;
    FBSApplicationPlaceholder *_placeholder;
}

@property(readonly, nonatomic) __weak FBSApplicationPlaceholder *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingProgress:(id)arg1 withContext:(void *)arg2;
- (void)_startObservingProgress:(id)arg1 withContext:(void *)arg2;
- (_Bool)queue_canPerformAction:(unsigned long long)arg1;
- (unsigned long long)queue_supportedActions;
- (_Bool)queue_isCancellationAllowed;
- (_Bool)queue_updateProxy:(id)arg1;
- (_Bool)queue_isValid;
- (_Bool)_queue_updateFromProgress;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)invalidate;
@property(readonly, nonatomic) unsigned long long installPhase; // @synthesize installPhase=_installPhase;
@property(readonly, nonatomic) unsigned long long installState; // @synthesize installState=_installState;
@property(readonly, nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void)dealloc;
- (id)initWithPlaceholder:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
