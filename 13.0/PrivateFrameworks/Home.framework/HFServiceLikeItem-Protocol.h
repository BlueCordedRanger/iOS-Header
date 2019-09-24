//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFHomeKitItemProtocol-Protocol.h>
#import <Home/HFNamingComponentCreating-Protocol.h>
#import <Home/HFServiceVendor-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@protocol HFCharacteristicValueSource;

@protocol HFServiceLikeItem <HFHomeKitItemProtocol, HFServiceVendor, NSCopying, HFNamingComponentCreating>
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource;
- (id)copyWithValueSource:(id <HFCharacteristicValueSource>)arg1;
@end
