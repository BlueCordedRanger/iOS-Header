//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperationQueue.h>

@interface NSOperationQueue (FCAsyncBlockAdditions)
+ (id)fc_ckRequestOperationQueue;
+ (id)fc_sharedSerialQueue;
+ (id)fc_sharedConcurrentQueue;
- (void)fc_addAsyncOperationWithBlock:(CDUnknownBlockType)arg1;
@end

