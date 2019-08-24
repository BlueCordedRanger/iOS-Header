//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface VSErrorRecoveryAttempter : NSObject
{
    NSArray *_options;
    NSOperationQueue *_recoveryAttemptingQueue;
}

@property(retain, nonatomic) NSOperationQueue *recoveryAttemptingQueue; // @synthesize recoveryAttemptingQueue=_recoveryAttemptingQueue;
@property(copy, nonatomic) NSArray *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (_Bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (id)init;

@end
