//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TMLApplication : NSObject
{
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *applicationVersion;
@property(readonly, nonatomic) NSString *hardwareModel;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
