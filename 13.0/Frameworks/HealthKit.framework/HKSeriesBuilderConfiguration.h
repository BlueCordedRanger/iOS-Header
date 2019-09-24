//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKTaskConfiguration.h>

@class HKDevice, NSUUID;

@interface HKSeriesBuilderConfiguration : HKTaskConfiguration
{
    HKDevice *_device;
    NSUUID *_workoutBuilderID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSUUID *workoutBuilderID; // @synthesize workoutBuilderID=_workoutBuilderID;
@property(readonly, copy, nonatomic) HKDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDevice:(id)arg1 workoutBuilderID:(id)arg2;

@end
