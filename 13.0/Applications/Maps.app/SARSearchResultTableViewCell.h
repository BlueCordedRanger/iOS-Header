//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_SearchResultTableViewCell.h"

@class BackgroundColorButton;
@protocol SARSearchResultTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SARSearchResultTableViewCell : _SearchResultTableViewCell
{
    id <SARSearchResultTableViewCellDelegate> _delegate;
    BackgroundColorButton *_actionButton;
}

@property(readonly, nonatomic) BackgroundColorButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak id <SARSearchResultTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_buttonAction;
- (id)attributedSecondPartDetailString;
- (id)attributedFirstPartDetailString;
- (void)updateTheme;
- (double)trailingMargin;
- (id)titleRegularFont;
- (id)titleFont;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
