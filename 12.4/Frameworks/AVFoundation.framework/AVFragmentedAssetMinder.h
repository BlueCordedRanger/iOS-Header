//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVFragmentedAssetMinderInternal, NSArray;

@interface AVFragmentedAssetMinder : NSObject
{
    AVFragmentedAssetMinderInternal *_fragmentedAssetMinder;
}

+ (id)fragmentedAssetMinderWithAsset:(id)arg1 mindingInterval:(double)arg2;
- (void)removeFragmentedAsset:(id)arg1;
- (void)addFragmentedAsset:(id)arg1;
- (void)_setMindingInterval:(double)arg1 removeAllAssets:(_Bool)arg2;
@property(nonatomic) double mindingInterval;
@property(readonly, nonatomic) NSArray *assets;
- (_Bool)_throwsWhenAlreadyMindedAssetIsAdded;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 mindingInterval:(double)arg2;
- (id)init;

@end
