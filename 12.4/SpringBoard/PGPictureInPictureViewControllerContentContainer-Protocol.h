//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol PGPictureInPictureViewControllerContentContainer <NSObject>
- (_Bool)handleDoubleTapGesture;
- (_Bool)handleTapGesture;
- (void)relinquishInterfaceOrientationLock;
- (void)acquireInterfaceOrientationLock;
- (void)performRotateAnimationWithRotation:(long long)arg1 completionHandler:(void (^)(void))arg2;
- (void)performStopAnimationWithFinalInterfaceOrientation:(long long)arg1 finalLayerFrame:(struct CGRect)arg2 animationHandler:(void (^)(void))arg3 completionHandler:(void (^)(void))arg4;
- (void)performStartAnimationWithAnimationHandler:(void (^)(void))arg1 completionHandler:(void (^)(void))arg2;
- (void)prepareStartAnimationWithInitialInterfaceOrientation:(long long)arg1 initialLayerFrame:(struct CGRect)arg2 completionHandler:(void (^)(void))arg3;
- (void)preferredContentSizeDidChangeForPictureInPictureViewController;
@end
