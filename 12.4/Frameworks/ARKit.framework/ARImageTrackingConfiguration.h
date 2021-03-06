//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARConfiguration.h>

@class NSSet;

@interface ARImageTrackingConfiguration : ARConfiguration
{
    NSSet *_trackingImages;
    long long _maximumNumberOfTrackedImages;
}

+ (id)supportedVideoFormats;
+ (_Bool)isSupported;
+ (id)new;
@property(nonatomic) long long maximumNumberOfTrackedImages; // @synthesize maximumNumberOfTrackedImages=_maximumNumberOfTrackedImages;
@property(copy, nonatomic) NSSet *trackingImages; // @synthesize trackingImages=_trackingImages;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)createTechniquesWithParallelTechniques:(id)arg1 serialTechniques:(id)arg2;
- (id)init;

// Remaining properties
@property(nonatomic, getter=isAutoFocusEnabled) _Bool autoFocusEnabled; // @dynamic autoFocusEnabled;

@end

