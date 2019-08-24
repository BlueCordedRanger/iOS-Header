//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface OITSUReadWriteQueue : NSObject
{
    NSObject<OS_dispatch_semaphore> *mCanEnqueueReaders;
    NSObject<OS_dispatch_queue> *mGlobalQueue;
    NSObject<OS_dispatch_group> *mInFlightReaders;
    NSObject<OS_dispatch_group> *mInFlightWriters;
}

- (void)waitOnInFlightWriters;
- (void)performSyncWrite:(CDUnknownBlockType)arg1;
- (void)performAsyncWrite:(CDUnknownBlockType)arg1;
- (void)performSyncRead:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end
