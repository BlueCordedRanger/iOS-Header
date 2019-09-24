//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKWrapperViewController.h>

@interface PKCompactNavigationWrapperViewController : PKWrapperViewController
{
    _Bool _hasExplicitTargetNavigationHeight;
    double _targetNavigationHeight;
}

@property(nonatomic) double targetNavigationHeight; // @synthesize targetNavigationHeight=_targetNavigationHeight;
@property(readonly, nonatomic) _Bool hasExplicitTargetNavigationHeight; // @synthesize hasExplicitTargetNavigationHeight=_hasExplicitTargetNavigationHeight;
- (struct CGRect)_wrappedViewControllerFrameForBounds:(struct CGRect)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillLayoutSubviews;
- (_Bool)_canShowWhileLocked;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (id)initWithWrappedViewController:(id)arg1;
- (id)initWithWrappedViewController:(id)arg1 type:(long long)arg2;

@end
