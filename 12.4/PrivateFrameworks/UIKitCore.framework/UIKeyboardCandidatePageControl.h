//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIKeyboardCandidateBarSegmentControl;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidatePageControl : UIView
{
    UIKeyboardCandidateBarSegmentControl *_pageControl;
    _Bool _usingVerticalArrows;
}

+ (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updatePageControlWithStatus:(_Bool)arg1 rightControlButtonEnabled:(_Bool)arg2;
- (void)_changePage:(id)arg1;
- (void)setUseVerticalArrows:(_Bool)arg1;
- (void)_setRenderConfig:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
