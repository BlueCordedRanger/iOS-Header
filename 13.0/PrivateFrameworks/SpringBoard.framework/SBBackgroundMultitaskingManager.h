//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SBBackgroundMultitaskingManager : NSObject
{
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_lock_appToBackgroundTasks;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_createBackgroundFetchTaskForApplication:(id)arg1;
- (void)_backgroundTaskFinished:(id)arg1 forApplication:(id)arg2;
- (void)_appProcessStateDidChange:(id)arg1;
- (id)init;

@end
