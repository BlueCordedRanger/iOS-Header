//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKLabelNavTrafficFeature.h>

@class VKTrafficCameraFeature;

__attribute__((visibility("hidden")))
@interface VKLabelNavTrafficCamera : VKLabelNavTrafficFeature
{
    VKTrafficCameraFeature *_trafficCamera;
}

@property(readonly, nonatomic) VKTrafficCameraFeature *trafficCamera; // @synthesize trafficCamera=_trafficCamera;
- (shared_ptr_ed5e0db7)createIcon:(struct NavContext *)arg1;
- (void)swapExternalFeature:(id)arg1;
- (void)dealloc;
- (id)initWithTrafficCamera:(id)arg1 previousMercatorPoint:(const Mercator2_57ec32b6 *)arg2 nextMercatorPoint:(const Mercator2_57ec32b6 *)arg3;

@end

