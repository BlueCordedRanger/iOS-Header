//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SQLiteDatabaseSession-Protocol.h"

@class NSString, SQLiteConnection;

@interface PurchaseHistoryDatabaseSession : NSObject <SQLiteDatabaseSession>
{
    SQLiteConnection *_connection;
}

+ (id)_serverRevisionPropertyForAccountID:(id)arg1;
+ (id)_propertyForSortOptionName:(id)arg1;
+ (id)_predicateFromQuery:(id)arg1;
+ (id)_lastUpdatedPropertyForAccountID:(id)arg1;
@property(readonly) SQLiteConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)_valueForDatabaseProperty:(id)arg1 withError:(id *)arg2;
- (id)revisionForAccountID:(id)arg1 withError:(id *)arg2;
- (id)lastUpdatedTimestampForAccountID:(id)arg1 withError:(id *)arg2;
- (id)executeQuery:(id)arg1 withError:(id *)arg2;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
