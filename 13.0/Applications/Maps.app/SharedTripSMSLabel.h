//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UILabel;

__attribute__((visibility("hidden")))
@interface SharedTripSMSLabel : UIView
{
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_topToBaselineConstraint;
    NSLayoutConstraint *_paddingConstraint;
    UILabel *_textLabel;
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)_updateLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (id)init;

@end

