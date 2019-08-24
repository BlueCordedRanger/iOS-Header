//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

@class INCurrencyAmount, NSNumber, NSString;

@interface INSendRideFeedbackIntent : INIntent
{
    NSString *_rideIdentifier;
    NSNumber *_rating;
    INCurrencyAmount *_tip;
}

+ (id)intentDescription;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) INCurrencyAmount *tip; // @synthesize tip=_tip;
@property(copy, nonatomic) NSNumber *rating; // @synthesize rating=_rating;
@property(readonly, copy, nonatomic) NSString *rideIdentifier; // @synthesize rideIdentifier=_rideIdentifier;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRideIdentifier:(id)arg1;

@end
