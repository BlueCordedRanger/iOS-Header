//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CARSession, CRCarPlayCapabilities, CUStateMachine, NSDictionary, NSMutableArray, NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface CRCarplayCapabilitiesStateMachine : NSObject
{
    CUStateMachine *_underlyingStateMachine;
    NSURL *_plistURL;
    CARSession *_session;
    NSDictionary *_plistData;
    NSMutableArray *_configurationKeys;
    NSMutableDictionary *_configurationValues;
    NSMutableDictionary *_propertyValueLookupTable;
    NSMutableDictionary *_searchHitsByProperty;
    NSDictionary *_stateForStateName;
    long long _currentState;
    unsigned long long _metadaKeyIndex;
    _Bool _isReady;
    CRCarPlayCapabilities *_carCapabilities;
    CDUnknownBlockType _responseBlock;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableArray *_delayedTasks;
}

@property(retain, nonatomic) NSMutableArray *delayedTasks; // @synthesize delayedTasks=_delayedTasks;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(copy, nonatomic) CDUnknownBlockType responseBlock; // @synthesize responseBlock=_responseBlock;
@property(retain, nonatomic) CRCarPlayCapabilities *carCapabilities; // @synthesize carCapabilities=_carCapabilities;
- (void).cxx_destruct;
- (void)assignCarCapabilities:(id)arg1 valuesFromDictionary:(id)arg2;
- (void)performDoneCaptureResult;
- (void)performLookup:(long long)arg1;
- (void)performLoadingPlistData:(long long)arg1;
- (void)performPostResponseAndReleaseData;
- (void)performEnterReadyState;
- (id)nextMetadataKey;
- (void)_ignoreEvent:(long long)arg1;
- (void)_transitionToState:(long long)arg1 forEvent:(long long)arg2;
- (void)handleEvent:(long long)arg1;
- (void)initializeStateMachine;
- (void)setSession:(id)arg1;
- (void)lookupCarcapabilitiesForSession:(id)arg1 plistURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

