//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AppUsageManager : NSObject
{
}

- (_Bool)_writeToContainer:(id)arg1;
- (void)_persistUsageUsingLaunchCounts;
- (void)_persistUsageUsingDuet;
- (void)persistUsage;
- (id)commonlyUsedApps;

@end

