//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIItemViewElement.h>

@class NSArray, SKUIImageViewElement;

@interface SKUIBrowseItemViewElement : SKUIItemViewElement
{
    _Bool _expands;
}

@property(readonly, nonatomic) _Bool expands; // @synthesize expands=_expands;
- (long long)pageComponentType;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) NSArray *metadata;
@property(readonly, nonatomic) SKUIImageViewElement *decorationImage;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
