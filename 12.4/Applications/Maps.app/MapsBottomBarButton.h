//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

__attribute__((visibility("hidden")))
@interface MapsBottomBarButton : UIButton
{
    _Bool _shouldInvertSelectionColor;
    _Bool shouldInvertSelectionColor;
}

@property _Bool shouldInvertSelectionColor; // @synthesize shouldInvertSelectionColor;
- (id)_selectedIndicatorViewWithImage:(id)arg1;
- (double)_selectedIndicatorAlpha;
- (void)setSelected:(_Bool)arg1;
- (void)updateSelectedTintColor;
- (void)tintColorDidChange;

@end

