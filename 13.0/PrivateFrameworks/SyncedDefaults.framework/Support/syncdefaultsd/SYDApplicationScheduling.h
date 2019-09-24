//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SYDApplication, SYDSchedulingParameters;

@interface SYDApplicationScheduling : NSObject
{
    _Bool _developmentApp;
    _Bool _disableUntilNextLaunch;
    int _nextSyncReason;
    int _currentSyncReason;
    SYDSchedulingParameters *_parameters;
    SYDApplication *_app;
    unsigned long long _currentSyncIdentifier;
    double _delayedSyncDate;
    unsigned long long _entriesSize;
    CDStruct_cdff19b3 *_entries;
    double _lastLaunch;
}

+ (id)descriptionForReason:(int)arg1;
@property(nonatomic) double lastLaunch; // @synthesize lastLaunch=_lastLaunch;
@property(nonatomic, getter=isDisabledUntilNextLaunch) _Bool disableUntilNextLaunch; // @synthesize disableUntilNextLaunch=_disableUntilNextLaunch;
@property(nonatomic) CDStruct_cdff19b3 *entries; // @synthesize entries=_entries;
@property(nonatomic) unsigned long long entriesSize; // @synthesize entriesSize=_entriesSize;
@property(nonatomic) double delayedSyncDate; // @synthesize delayedSyncDate=_delayedSyncDate;
@property(nonatomic) unsigned long long currentSyncIdentifier; // @synthesize currentSyncIdentifier=_currentSyncIdentifier;
@property(nonatomic) int currentSyncReason; // @synthesize currentSyncReason=_currentSyncReason;
@property(nonatomic) int nextSyncReason; // @synthesize nextSyncReason=_nextSyncReason;
@property(nonatomic) SYDApplication *app; // @synthesize app=_app;
@property(nonatomic) _Bool developmentApp; // @synthesize developmentApp=_developmentApp;
@property(retain, nonatomic) SYDSchedulingParameters *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;
- (id)schedulingDescription;
- (void)resetUpdateRequests;
- (void)disableUntilNextLaunch;
- (void)disableSyncUntil:(double)arg1;
- (void)didFinishSyncWithIdentifier:(unsigned long long)arg1 success:(_Bool)arg2 now:(double)arg3;
- (void)willStartSyncWithIdentifier:(unsigned long long)arg1;
- (_Bool)requestSyncSoonForReason:(int)arg1 now:(double)arg2;
- (double)nextRefreshDateUsingNow:(double)arg1;
- (double)_nextRefreshDateForReason:(int)arg1 usingNow:(double)arg2;
- (id)persistentState;
- (void)_markEntriesAsIncorrect;
- (void)_resizeEntriesWithUpdatedParametersIfNecessary;
- (void)dealloc;
- (id)initWithApplication:(id)arg1 persistentState:(id)arg2;

@end
