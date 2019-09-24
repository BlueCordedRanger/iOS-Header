//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString, UIView;
@protocol CSWallpaperView;

@protocol CSWallpaperViewProviding <NSObject>
- (void)wallpaperClientDidRotateFromInterfaceOrientation:(long long)arg1;
- (void)wallpaperClientWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)wallpaperClientWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)resumeWallpaperAnimationForReason:(NSString *)arg1;
- (void)suspendWallpaperAnimationForReason:(NSString *)arg1;
- (UIView<CSWallpaperView> *)createCoverSheetWallpaperViewWithTransformOptions:(unsigned long long)arg1;
- (UIView<CSWallpaperView> *)createCoverSheetWallpaperView;
@end
