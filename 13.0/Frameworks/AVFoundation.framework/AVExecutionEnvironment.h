//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AVExecutionEnvironment : NSObject
{
}

+ (void)resetPlatformIdentifierForQueue:(id)arg1;
+ (void)setPlatformIdentifier:(id)arg1 forQueue:(id)arg2;
+ (id)currentPlatformIdentifier;
+ (id)sharedExecutionEnvironment;
+ (void)initialize;
@property(readonly) NSString *platformIdentifier;

@end
