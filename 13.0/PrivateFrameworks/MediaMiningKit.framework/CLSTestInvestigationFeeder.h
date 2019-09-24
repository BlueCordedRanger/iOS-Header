//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSInvestigationFeeder.h>

@class NSArray;

@interface CLSTestInvestigationFeeder : CLSInvestigationFeeder
{
    NSArray *_items;
}

- (void).cxx_destruct;
- (void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)allItems;
- (id)approximateLocation;
- (id)localEndDateComponents;
- (id)localStartDateComponents;
- (unsigned long long)numberOfItems;
- (id)initWithItems:(id)arg1;

@end
