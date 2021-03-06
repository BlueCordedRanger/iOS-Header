//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICMigrationUtilities : NSObject
{
}

+ (void)deleteMigratedHTMLAccountIfNecessaryForModernAccount:(id)arg1;
+ (void)deleteMigratedHTMLAccounts;
+ (void)updateAllLegacyAccountMigrationStates;
+ (void)updateLegacyAccountMigrationStateForModernAccount:(id)arg1;
+ (void)saveDidChooseToMigrate:(_Bool)arg1 didFinishMigration:(_Bool)arg2 didMigrateOnMac:(_Bool)arg3 toACAccount:(id)arg4 inStore:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)fetchAndSetMigrationStateForAccountID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)fetchMigrationStateAndUserRecordForAccountID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)fetchMigrationStateForAccountID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end

