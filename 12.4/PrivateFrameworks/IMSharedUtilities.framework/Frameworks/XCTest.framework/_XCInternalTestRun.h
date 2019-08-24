//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, XCTest;

@interface _XCInternalTestRun : NSObject
{
    XCTest *_test;
    double _startTimeInterval;
    double _stopTimeInterval;
    unsigned long long _executionCount;
    unsigned long long _failureCount;
    unsigned long long _unexpectedExceptionCount;
    _Bool _hasStarted;
    _Bool _hasStopped;
    unsigned long long _executionCountBeforeCrash;
    unsigned long long _failureCountBeforeCrash;
    unsigned long long _unexpectedExceptionCountBeforeCrash;
}

@property unsigned long long unexpectedExceptionCountBeforeCrash; // @synthesize unexpectedExceptionCountBeforeCrash=_unexpectedExceptionCountBeforeCrash;
@property unsigned long long failureCountBeforeCrash; // @synthesize failureCountBeforeCrash=_failureCountBeforeCrash;
@property unsigned long long executionCountBeforeCrash; // @synthesize executionCountBeforeCrash=_executionCountBeforeCrash;
@property(readonly) _Bool hasStopped; // @synthesize hasStopped=_hasStopped;
@property(readonly) XCTest *test; // @synthesize test=_test;
- (void).cxx_destruct;
- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(_Bool)arg4;
@property(readonly) unsigned long long testCaseCount;
@property(readonly) unsigned long long unexpectedExceptionCount;
@property(readonly) unsigned long long failureCount;
@property(readonly) unsigned long long executionCount;
- (void)stop;
- (void)start;
@property(readonly, copy) NSDate *stopDate;
@property(readonly, copy) NSDate *startDate;
@property(readonly) double testDuration;
@property(readonly) double totalDuration;
- (id)initWithTest:(id)arg1;

@end
