//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface UIKBTutorialSinglePageView : UIView
{
    _Bool _useAlertStyle;
    UIView *_visualDisplayView;
    UILabel *_textTitle;
    UILabel *_textBody;
}

@property(nonatomic) _Bool useAlertStyle; // @synthesize useAlertStyle=_useAlertStyle;
@property(retain, nonatomic) UILabel *textBody; // @synthesize textBody=_textBody;
@property(retain, nonatomic) UILabel *textTitle; // @synthesize textTitle=_textTitle;
@property(retain, nonatomic) UIView *visualDisplayView; // @synthesize visualDisplayView=_visualDisplayView;
- (void).cxx_destruct;
- (void)configPageView;
- (void)layoutSubviews;
- (id)initWithImageView:(id)arg1;

@end
