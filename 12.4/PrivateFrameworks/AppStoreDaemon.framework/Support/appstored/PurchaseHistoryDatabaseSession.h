//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SQLiteConnection;

@interface PurchaseHistoryDatabaseSession : NSObject
{
    SQLiteConnection *_connection;
}

+ (id)_tableForSortOptionName:(id)arg1;
+ (id)_serverRevisionPropertyForAccountID:(id)arg1;
+ (id)_queryStringFromQuery:(id)arg1;
+ (id)_lastUpdatedPropertyForAccountID:(id)arg1;
+ (id)_newObjectWithCursor:(id)arg1;
@property(readonly, nonatomic) SQLiteConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)_valueForDatabaseProperty:(id)arg1 withError:(id *)arg2;
- (id)revisionForAccountID:(id)arg1 withError:(id *)arg2;
- (id)lastUpdatedTimestampForAccountID:(id)arg1 withError:(id *)arg2;
- (id)executeQuery:(id)arg1 withError:(id *)arg2;
- (id)initWithConnection:(id)arg1;

@end
