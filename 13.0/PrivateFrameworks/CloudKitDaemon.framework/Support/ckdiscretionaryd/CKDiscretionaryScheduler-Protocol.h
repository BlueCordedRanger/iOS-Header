//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CKDiscretionaryOptions, CKDiscretionarySchedulerTask, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol CKDiscretionaryScheduler <NSObject>
+ (CKDiscretionarySchedulerTask *)scheduleOperationID:(NSString *)arg1 group:(NSString *)arg2 bundleID:(NSString *)arg3 requiresPastBuddy:(_Bool)arg4 options:(CKDiscretionaryOptions *)arg5 state:(unsigned long long)arg6 queue:(NSObject<OS_dispatch_queue> *)arg7 startHandler:(_Bool (^)(void))arg8 suspendHandler:(_Bool (^)(void))arg9;
@end
