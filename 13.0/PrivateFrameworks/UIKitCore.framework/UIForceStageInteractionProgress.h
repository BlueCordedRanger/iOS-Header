//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIInteractionProgress.h>

#import <UIKitCore/NSObservable-Protocol.h>
#import <UIKitCore/NSObserver-Protocol.h>

@class NSObservation, NSString;

@interface UIForceStageInteractionProgress : UIInteractionProgress <NSObservable, NSObserver>
{
    NSObservation *_observation;
    _Bool _completed;
    _Bool _started;
    _Bool _completesAtTargetState;
}

@property(nonatomic) _Bool completesAtTargetState; // @synthesize completesAtTargetState=_completesAtTargetState;
- (void).cxx_destruct;
- (void)_reset;
- (void)receiveObservedValue:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
