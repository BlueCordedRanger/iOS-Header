//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSBundle;
@protocol PKModularService, PKSubsystemServicePersonality;

@protocol PKModularService <NSObject>
+ (id <PKModularService>)initForPlugInKit;

@optional
- (void)communicationsFailed:(id <PKSubsystemServicePersonality>)arg1;
- (void)endUsing:(id <PKSubsystemServicePersonality>)arg1;
- (void)beginUsing:(id <PKSubsystemServicePersonality>)arg1 withBundle:(NSBundle *)arg2;
@end
