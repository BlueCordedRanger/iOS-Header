//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoTransitionObserver-Protocol.h>

@class NSString;
@protocol SVVideoProviderProviding, SVVideoQueueProviding;

@interface SVVideoAdSkipTracker : NSObject <SVVideoTransitionObserver>
{
    id <SVVideoQueueProviding> _queueProvider;
    id <SVVideoProviderProviding> _videoProviderProvider;
}

@property(readonly, nonatomic) id <SVVideoProviderProviding> videoProviderProvider; // @synthesize videoProviderProvider=_videoProviderProvider;
@property(readonly, nonatomic) id <SVVideoQueueProviding> queueProvider; // @synthesize queueProvider=_queueProvider;
- (void).cxx_destruct;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithQueueProvider:(id)arg1 videoProviderProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
