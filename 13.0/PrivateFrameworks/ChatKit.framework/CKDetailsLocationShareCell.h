//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKDetailsCell.h>

#import <ChatKit/CKDetailsCell-Protocol.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface CKDetailsLocationShareCell : CKDetailsCell <CKDetailsCell>
{
    _Bool _showOfferTimeRemaining;
    double _offerTimeRemaining;
    UILabel *_timeRemainingLabel;
}

+ (double)preferredHeight;
+ (_Bool)shouldHighlight;
+ (id)reuseIdentifier;
@property(retain, nonatomic) UILabel *timeRemainingLabel; // @synthesize timeRemainingLabel=_timeRemainingLabel;
@property(nonatomic) double offerTimeRemaining; // @synthesize offerTimeRemaining=_offerTimeRemaining;
@property(nonatomic) _Bool showOfferTimeRemaining; // @synthesize showOfferTimeRemaining=_showOfferTimeRemaining;
- (void).cxx_destruct;
- (id)timeStringForTimeInterval:(double)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
