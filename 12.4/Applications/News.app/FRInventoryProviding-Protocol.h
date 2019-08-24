//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol FRInventoryProviding <NSObject>
- (id)nextAvailableItem;
- (unsigned long long)countOfAvailableItems;
- (id)itemForIdentifier:(NSString *)arg1;
- (void)purgeInventory;
- (void)requestAdditionalInventory;
@end
