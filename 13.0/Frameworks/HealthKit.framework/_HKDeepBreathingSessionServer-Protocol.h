//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class NSDate;

@protocol _HKDeepBreathingSessionServer <NSObject>
- (void)endSessionWithEndReason:(long long)arg1;
- (void)startGuiding;
- (void)startSessionWithStartDate:(NSDate *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end
