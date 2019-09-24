//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CALayer;

@interface MCDButton : UIButton
{
    CALayer *_focusColorLayer;
    _Bool _showBezelInTouch;
    _Bool _showHighlight;
}

@property(nonatomic) _Bool showHighlight; // @synthesize showHighlight=_showHighlight;
@property(nonatomic) _Bool showBezelInTouch; // @synthesize showBezelInTouch=_showBezelInTouch;
- (void).cxx_destruct;
- (_Bool)shouldUpdateButtonOpacityForKnobUnfocused;
- (id)colorForKnobFocused;
- (id)colorForKnobFocusLayerSelected;
- (id)colorForKnobFocusLayer;
- (void)updateButtonOpacityForKnobUnfocused;
- (id)colorForKnobContentSelected;
- (id)colorForTouchFocusLayerSelected;
- (id)colorForTouchFocusLayer;
- (id)colorForTouchContentSelected;
- (void)_updateButtonStyle;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (double)focusLayerCornerRadius;
- (id)_buttonBackGroundColorTouch;
- (id)tintColorForUnhighlightedTextLabel;
- (void)setHidden:(_Bool)arg1;
@property(nonatomic, getter=isSelected) _Bool selected; // @dynamic selected;
- (void)willMoveToWindow:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (_Bool)canShowHighlight;
- (id)initWithFrame:(struct CGRect)arg1;

@end
