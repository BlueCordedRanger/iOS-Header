//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

@interface REExpectation : NSObject
{
    NSObject<OS_dispatch_group> *_group;
    _Atomic int _count;
}

- (void).cxx_destruct;
- (void)notifyOperationsCompleteOrPerformUsingQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)notifyOperationsCompleteOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)endOperation;
- (void)beginOperation;
@property(readonly, nonatomic) long long outstandingOperations;
- (id)init;

@end
