//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol ACXDeviceConnectionDelegate <NSObject>

@optional
- (void)updateInstallProgressForApplication:(NSString *)arg1 progress:(double)arg2 installPhase:(long long)arg3;
- (void)updateInstallStateForApplication:(NSString *)arg1 installState:(long long)arg2;
@end

