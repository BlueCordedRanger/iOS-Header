//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKTableHeaderView.h>

@class UILabel, UITextField;

@interface PKSearchableTableHeaderView : PKTableHeaderView
{
    UITextField *_searchField;
    UILabel *_searchFieldLabel;
    _Bool _showsSearchField;
}

@property(nonatomic) _Bool showsSearchField; // @synthesize showsSearchField=_showsSearchField;
- (void).cxx_destruct;
@property(readonly, nonatomic) double searchFieldOffset;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UILabel *searchFieldLabel;
@property(readonly, nonatomic) UITextField *searchField;

@end

