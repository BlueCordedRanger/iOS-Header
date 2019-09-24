//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKScreenCameraController.h>

#import <VectorKit/VKGesturingCameraController-Protocol.h>

@class NSString, VKMapCanvas, VKMapModel, VKTimedAnimation;

__attribute__((visibility("hidden")))
@interface VKMapCameraController : VKScreenCameraController <VKGesturingCameraController>
{
    VKMapModel *_mapModel;
    VKMapCanvas *_mapCanvas;
    VKTimedAnimation *_horizontalOffsetAnimation;
    double _minDistanceToGroundAlongForwardVector;
    double _maxDistanceToGroundAlongForwardVector;
    double _finalYaw;
    double _finalPitch;
}

@property(nonatomic) VKMapCanvas *mapCanvas; // @synthesize mapCanvas=_mapCanvas;
@property(retain, nonatomic) VKMapModel *mapModel; // @synthesize mapModel=_mapModel;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;
- (double)topDownMinimumZoomLevel;
- (double)currentZoomLevel;
- (double)maximumZoomLevel;
- (double)minimumZoomLevel;
- (void)setRegionRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;
- (void)animateRegionWithDuration:(double)arg1 timingFunction:(CDUnknownBlockType)arg2 stepHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setCenterCoordinateDistanceRange:(CDStruct_c3b9c2ee)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;
- (double)pitch;
- (double)heading;
- (double)altitude;
- (double)distanceFromCenterCoordinate;
- (CDStruct_c3b9c2ee)centerCoordinate;
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 forceDestination:(_Bool)arg8 completion:(CDUnknownBlockType)arg9;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)_jumpToCenterPoint:(Matrix_6e1d3589)arg1 pitchRadians:(double)arg2 yawRadians:(double)arg3;
- (void)_animateToPosition:(Matrix_6e1d3589)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(CDUnknownBlockType)arg5 forceDestination:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_animateToPosition:(Matrix_6e1d3589)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (Matrix_6e1d3589)positionClampedToCameraRestriction:(Matrix_6e1d3589)arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (CDStruct_c3b9c2ee)_mercatorCenterCoordinateForMapRegion:(id)arg1;
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;
- (double)yaw;
- (double)presentationYaw;
- (void)updateCameraZBounds;
- (void)updateCameraToPositionOrientationLimits;
- (_Bool)canRotate;
- (void)clampZoomLevelIfNecessary;
- (void)setGesturing:(_Bool)arg1;
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)canEnter3DModeNoUpdate;
- (_Bool)canEnter3DMode;
- (_Bool)isFullyPitched;
- (_Bool)isPitched;
- (_Bool)allowDatelineWraparound;
- (void)setAllowDatelineWraparound:(_Bool)arg1;
- (void)exit3DMode;
- (void)enter3DMode;
- (void)zoomToLevel:(double)arg1 withFocusPoint:(struct CGPoint)arg2;
- (void)clampPitch:(double *)arg1 yaw:(double *)arg2 atTargetPositionZ:(double)arg3;
- (_Bool)snapMapIfNecessary:(_Bool)arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3;
- (_Bool)restoreViewportFromInfo:(id)arg1;
- (id)viewportInfo;
- (void)zoomToLevel:(double)arg1 withPoint:(Matrix_6e1d3589)arg2;
- (void)zoom:(double)arg1 withPoint:(Matrix_6e1d3589)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)rotateToYaw:(double)arg1 withPoint:(const Matrix_6e1d3589 *)arg2 animated:(_Bool)arg3;
- (void)rotateToPitch:(double)arg1 withPoint:(const Matrix_6e1d3589 *)arg2 preserveAltitude:(_Bool)arg3 animated:(_Bool)arg4 exaggerate:(_Bool)arg5;
- (float)maxPitchForNormalizedZoomLevel:(float)arg1;
- (float)idealPitchForNormalizedZoomLevel:(float)arg1;
- (float)minimumPitchForNormalizedZoomLevel:(float)arg1;
- (float)normalizedZoomLevelAdjustmentForTileSize:(long long)arg1;
- (float)currentTopDownMinimumNormalizedZoomLevel;
- (float)currentMinimumNormalizedZoomLevel;
- (float)currentMaximumNormalizedZoomLevel;
- (float)maximumNormalizedZoomLevel;
- (float)minimumNormalizedZoomLevel;
- (float)currentStyleZoomLevel;
- (float)currentNormalizedZoomLevel;
- (float)currentDisplayZoomLevel;
- (long long)tileSize;
- (void)canvasDidLayout;
- (void)dealloc;
- (id)initWithMapDataAccess:(struct MapDataAccess *)arg1 animationRunner:(struct AnimationRunner *)arg2 runLoopController:(struct RunLoopController *)arg3 cameraDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
