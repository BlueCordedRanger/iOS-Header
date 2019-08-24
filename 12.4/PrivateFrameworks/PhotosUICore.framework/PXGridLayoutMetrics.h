//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXGridLayoutMetrics : PXLayoutMetrics
{
    _Bool _displaysHeaderTile;
    long long _axis;
    unsigned long long _additionalTileCount;
    struct CGSize _itemSize;
    struct CGSize _interItemSpacing;
    struct CGSize _headerSize;
    struct CGSize _headerSpacing;
    struct CGSize _footerSize;
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) unsigned long long additionalTileCount; // @synthesize additionalTileCount=_additionalTileCount;
@property(nonatomic) struct CGSize footerSize; // @synthesize footerSize=_footerSize;
@property(nonatomic) struct CGSize headerSpacing; // @synthesize headerSpacing=_headerSpacing;
@property(nonatomic) struct CGSize headerSize; // @synthesize headerSize=_headerSize;
@property(nonatomic) _Bool displaysHeaderTile; // @synthesize displaysHeaderTile=_displaysHeaderTile;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) struct CGSize interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
