//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface CKBannerCollectionViewCell : UICollectionViewCell
{
    UIImageView *_bannerView;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UIImageView *bannerView; // @synthesize bannerView=_bannerView;
- (void).cxx_destruct;
- (void)setBannerImage:(id)arg1;
- (void)configureWithEntity:(id)arg1;
- (void)layoutSubviews;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end
