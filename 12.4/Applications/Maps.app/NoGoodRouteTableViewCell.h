//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface NoGoodRouteTableViewCell : UITableViewCell
{
    UIImageView *_checkmarkImageView;
    UILabel *_titleLabel;
    _Bool _checked;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
- (void).cxx_destruct;
- (id)_autolayoutMetrics;
- (id)_autolayoutViews;
- (void)_addAutolayoutConstraints;
- (void)_createSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
