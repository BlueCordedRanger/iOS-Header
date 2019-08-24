//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class ASCodableDatabaseCompetition;

__attribute__((visibility("hidden")))
@interface ASDatabaseCompetitionJournalEntry : HDJournalEntry
{
    ASCodableDatabaseCompetition *_databaseCompetition;
}

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) ASCodableDatabaseCompetition *databaseCompetition; // @synthesize databaseCompetition=_databaseCompetition;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatabaseCompetition:(id)arg1;

@end
