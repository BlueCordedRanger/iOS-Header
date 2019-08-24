//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UILabel;

@interface SKUIReviewInAppRatingButtonViewController : UIViewController
{
    _Bool _enabled;
    NSString *_titleString;
    unsigned long long _style;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 style:(unsigned long long)arg2;

@end
