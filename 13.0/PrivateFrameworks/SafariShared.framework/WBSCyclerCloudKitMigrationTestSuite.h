//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCyclerTestSuite-Protocol.h>

@class NSString, WBSCyclerBookmarkListRepresentation, WBSCyclerTestSuiteBookmarkAuxiliary;

@interface WBSCyclerCloudKitMigrationTestSuite : NSObject <WBSCyclerTestSuite>
{
    WBSCyclerTestSuiteBookmarkAuxiliary *_bookmarkAuxiliary;
    unsigned long long _bookmarksGeneratedPriorToMigration;
    WBSCyclerBookmarkListRepresentation *_topLevelBookmarksPriorToMigration;
    _Bool _hasValidatedResultsOfPrimaryMigration;
    _Bool _finished;
}

+ (_Bool)setValue:(id)arg1 forConfigurationKey:(id)arg2;
@property(readonly, nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
- (void).cxx_destruct;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1;
- (void)_validateResultsOfMigrationWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_migrateToCloudKitWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchBookmarksPriorToMigrationWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_generateDAVServerIDsForExistingBookmarksWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createRandomBookmarkWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)runWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
