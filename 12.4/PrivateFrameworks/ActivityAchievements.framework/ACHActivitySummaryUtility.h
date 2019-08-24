//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDActivitySummaryBuilder, HDDatabaseTransactionContext, HDProfile;

@interface ACHActivitySummaryUtility : NSObject
{
    HDDatabaseTransactionContext *_databaseContext;
    HDProfile *_profile;
    HDActivitySummaryBuilder *_summaryBuilder;
}

@property(retain, nonatomic) HDActivitySummaryBuilder *summaryBuilder; // @synthesize summaryBuilder=_summaryBuilder;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(nonatomic) __weak HDDatabaseTransactionContext *databaseContext; // @synthesize databaseContext=_databaseContext;
- (void).cxx_destruct;
- (id)newEmptyActivitySummaryWithIndex:(long long)arg1 calorieGoal:(id)arg2;
- (_Bool)_enumerateActivitySummariesForDateComponentInterval:(id)arg1 handler:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (void)enumerateActivitySummariesForDateComponentInterval:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithProfile:(id)arg1 shouldIncludePrivateProperties:(_Bool)arg2;

@end
