//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBTimer;

@protocol _INPBPauseTimerIntentResponse <NSObject>
+ (Class)pausedTimersType;
@property(readonly, nonatomic) unsigned long long pausedTimersCount;
@property(copy, nonatomic) NSArray *pausedTimers;
- (_INPBTimer *)pausedTimersAtIndex:(unsigned long long)arg1;
- (void)addPausedTimers:(_INPBTimer *)arg1;
- (void)clearPausedTimers;
@end
