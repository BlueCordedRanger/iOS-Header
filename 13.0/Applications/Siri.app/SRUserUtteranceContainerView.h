//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SRUserUtteranceView;

@interface SRUserUtteranceContainerView : UIView
{
    _Bool _showEditingView;
    SRUserUtteranceView *_displayView;
    UIView *_tableView;
}

@property(nonatomic) __weak UIView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak SRUserUtteranceView *displayView; // @synthesize displayView=_displayView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (double)baselineOffsetFromBottom;
- (double)firstLineBaselineOffsetFromTop;
- (void)animateToDisplayWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateToEditWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isFirstResponder;

@end

