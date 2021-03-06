//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INSpeakableString, NSNumber;

@protocol INStartWorkoutIntentExport <NSObject, JSExport>
@property(copy, nonatomic) NSNumber *isOpenEnded;
@property(nonatomic) long long workoutLocationType;
@property(nonatomic) long long workoutGoalUnitType;
@property(copy, nonatomic) NSNumber *goalValue;
@property(copy, nonatomic) INSpeakableString *workoutName;
- (id)init;
@end

