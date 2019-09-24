//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIAccessibilityHUDGestureManager, UIAccessibilityHUDItem, UIGestureRecognizer;

@protocol UIAccessibilityHUDGestureDelegate <NSObject>
- (_Bool)_accessibilityHUDGestureManager:(UIAccessibilityHUDGestureManager *)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)_accessibilityHUDGestureManager:(UIAccessibilityHUDGestureManager *)arg1 gestureLiftedAtPoint:(struct CGPoint)arg2;
- (UIAccessibilityHUDItem *)_accessibilityHUDGestureManager:(UIAccessibilityHUDGestureManager *)arg1 HUDItemForPoint:(struct CGPoint)arg2;

@optional
- (_Bool)_accessibilityHUDGestureManagerCancelsTouchesInView:(UIAccessibilityHUDGestureManager *)arg1;
- (void)_dismissAccessibilityHUDForGestureManager:(UIAccessibilityHUDGestureManager *)arg1;
- (void)_accessibilityHUDGestureManager:(UIAccessibilityHUDGestureManager *)arg1 showHUDItem:(UIAccessibilityHUDItem *)arg2;
- (_Bool)_accessibilityHUDGestureManager:(UIAccessibilityHUDGestureManager *)arg1 shouldTerminateHUDGestureForOtherGestureRecognizer:(UIGestureRecognizer *)arg2;
- (_Bool)_accessibilityHUDGestureManager:(UIAccessibilityHUDGestureManager *)arg1 shouldBeginAtPoint:(struct CGPoint)arg2;
@end
