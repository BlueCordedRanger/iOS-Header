//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBDataString, _INPBReservationAction, _INPBTimestamp;

@protocol _INPBReservation <NSObject>
+ (Class)actionsType;
@property(nonatomic) _Bool hasReservationStatus;
@property(nonatomic) int reservationStatus;
@property(readonly, nonatomic) _Bool hasReservationNumber;
@property(copy, nonatomic) NSString *reservationNumber;
@property(readonly, nonatomic) _Bool hasReservationHolderName;
@property(copy, nonatomic) NSString *reservationHolderName;
@property(readonly, nonatomic) _Bool hasItemReference;
@property(retain, nonatomic) _INPBDataString *itemReference;
@property(readonly, nonatomic) _Bool hasBookingTime;
@property(retain, nonatomic) _INPBTimestamp *bookingTime;
@property(readonly, nonatomic) unsigned long long actionsCount;
@property(copy, nonatomic) NSArray *actions;
- (int)StringAsReservationStatus:(NSString *)arg1;
- (NSString *)reservationStatusAsString:(int)arg1;
- (_INPBReservationAction *)actionsAtIndex:(unsigned long long)arg1;
- (void)addActions:(_INPBReservationAction *)arg1;
- (void)clearActions;
@end
