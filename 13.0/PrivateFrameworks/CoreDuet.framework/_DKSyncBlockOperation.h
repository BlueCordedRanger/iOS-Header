//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKSyncOperation.h>

@class NSMutableArray;

@interface _DKSyncBlockOperation : _DKSyncOperation
{
    struct os_unfair_lock_s _lock;
    _Bool _asynchronous;
    NSMutableArray *_blocks;
}

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;
@property(readonly) NSMutableArray *blocks; // @synthesize blocks=_blocks;
@property(getter=isAsynchronous) _Bool asynchronous; // @synthesize asynchronous=_asynchronous;
- (void).cxx_destruct;
- (void)main;
- (void)addExecutionBlock:(CDUnknownBlockType)arg1;
- (id)executionBlocks;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end
