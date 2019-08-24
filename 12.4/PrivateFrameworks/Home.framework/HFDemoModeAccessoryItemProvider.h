//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSSet;

@interface HFDemoModeAccessoryItemProvider : HFItemProvider
{
    CDUnknownBlockType _filter;
    HMHome *_home;
    NSSet *_demoItems;
}

@property(retain, nonatomic) NSSet *demoItems; // @synthesize demoItems=_demoItems;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithHome:(id)arg1;

@end
