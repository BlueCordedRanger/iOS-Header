//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface PUCurationKeyAssetComparisonViewCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIImage *_thumbnailImage;
    NSString *_representedAssetIdentifier;
}

+ (double)cellHeightWithCellWidth:(double)arg1;
@property(retain, nonatomic) NSString *representedAssetIdentifier; // @synthesize representedAssetIdentifier=_representedAssetIdentifier;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
