//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface ASDSubscriptionEntitlement : NSObject <NSSecureCoding>
{
    NSDictionary *_dictionary;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_valueForKey:(id)arg1 ofType:(Class)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *vendorID;
@property(readonly, copy) NSNumber *quantity;
@property(readonly, copy) NSNumber *purchaseDownloadID;
@property(readonly, copy) NSNumber *purchasabilityType;
@property(readonly, copy) NSNumber *originalPurchaseDownloadID;
@property(readonly, copy) NSString *offerID;
@property(readonly, getter=isNewsAppPurchase) _Bool newsAppPurchase;
@property(readonly) _Bool isPurchaser;
@property(readonly) _Bool isTrialPeriod;
@property(readonly, copy) NSString *inAppVersion;
@property(readonly, copy) NSNumber *inAppAdamID;
@property(readonly, copy) NSNumber *familyID;
@property(readonly, copy) NSDate *expiryDate;
@property(readonly, copy) NSNumber *chargeStoreFrontID;
@property(readonly, copy) NSString *chargeCurrencyCode;
@property(readonly, copy) NSString *chargeCountryCode;
@property(readonly, copy) NSNumber *appVersion;
@property(readonly, copy) NSNumber *appAdamID;
- (id)initWithDictionary:(id)arg1 forAppAdamID:(id)arg2;

@end

