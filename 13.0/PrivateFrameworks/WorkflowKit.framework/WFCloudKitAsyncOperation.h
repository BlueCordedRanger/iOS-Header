//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface WFCloudKitAsyncOperation : NSOperation
{
    _Bool _isExecuting;
    _Bool _isFinished;
}

@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
- (void)finishExecuting;
- (void)startExecuting;
- (void)start;

@end
