//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpotlightDaemon/MDIndexer-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString, SPCoreSpotlightInteractionHandler, SPCoreSpotlightTask;
@protocol CSIndexExtensionDelegate, NSObject, OS_dispatch_queue, OS_dispatch_source, SPCoreSpotlightIndexerDelegate;

@interface SPCoreSpotlightIndexer : NSObject <MDIndexer>
{
    int cancelFlags[4];
    double _lastUpdateTime;
    NSArray *_reindexIndexers;
    id <CSIndexExtensionDelegate> extensionDelegate;
    NSDictionary *_fileProviderAppToExtensionBundleMap;
    NSDictionary *_fileProviderExtensionToAppBundleMap;
    id <SPCoreSpotlightIndexerDelegate> _indexerDelegate;
    SPCoreSpotlightInteractionHandler *_interactionHandler;
    NSDictionary *_concreteIndexers;
    NSObject<OS_dispatch_source> *_prefsChangeSource;
    id <NSObject> _dataMigrationStartObserver;
    id <NSObject> _dataMigrationFinishObserver;
    NSSet *_dataMigrationBundleIDs;
    NSSet *_prefsDisabledBundleIDs;
    NSObject<OS_dispatch_source> *_reindexAllItemsSource;
    NSObject<OS_dispatch_source> *_reindexAllItemsWithIdentifiersSource;
    SPCoreSpotlightTask *_reindexAllItemsTask;
    NSObject<OS_dispatch_queue> *_indexQueue;
    NSObject<OS_dispatch_queue> *_firstUnlockQueue;
    NSObject<OS_dispatch_queue> *_reindexAllQueue;
    unsigned long long _dataMigrationStage;
    long long _transactionCount;
}

+ (id)_filterReindexAllExtensions:(id)arg1;
+ (_Bool)writeDiagnostic:(id)arg1 bundleID:(id)arg2 identifier:(id)arg3;
+ (id)sharedInstance;
+ (id)sharedInstanceWithDelegate:(id)arg1;
+ (void)setPrivate:(_Bool)arg1;
+ (void)setIndexerDelegate:(id)arg1;
+ (id)allProtectionClasses;
+ (void)shutdown;
+ (void)deactivate;
+ (void)setMemoryPressureStatus:(unsigned long long)arg1;
+ (void)shrink:(unsigned long long)arg1;
+ (void)unlock;
+ (void)sync;
+ (void)cooldown;
+ (void)preheat;
+ (void)initialize;
@property(readonly, nonatomic) long long transactionCount; // @synthesize transactionCount=_transactionCount;
@property(nonatomic) unsigned long long dataMigrationStage; // @synthesize dataMigrationStage=_dataMigrationStage;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reindexAllQueue; // @synthesize reindexAllQueue=_reindexAllQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *firstUnlockQueue; // @synthesize firstUnlockQueue=_firstUnlockQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *indexQueue; // @synthesize indexQueue=_indexQueue;
@property(retain) SPCoreSpotlightTask *reindexAllItemsTask; // @synthesize reindexAllItemsTask=_reindexAllItemsTask;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *reindexAllItemsWithIdentifiersSource; // @synthesize reindexAllItemsWithIdentifiersSource=_reindexAllItemsWithIdentifiersSource;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *reindexAllItemsSource; // @synthesize reindexAllItemsSource=_reindexAllItemsSource;
@property(retain, nonatomic) NSSet *prefsDisabledBundleIDs; // @synthesize prefsDisabledBundleIDs=_prefsDisabledBundleIDs;
@property(retain, nonatomic) NSSet *dataMigrationBundleIDs; // @synthesize dataMigrationBundleIDs=_dataMigrationBundleIDs;
@property(retain, nonatomic) id <NSObject> dataMigrationFinishObserver; // @synthesize dataMigrationFinishObserver=_dataMigrationFinishObserver;
@property(retain, nonatomic) id <NSObject> dataMigrationStartObserver; // @synthesize dataMigrationStartObserver=_dataMigrationStartObserver;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *prefsChangeSource; // @synthesize prefsChangeSource=_prefsChangeSource;
@property(retain) NSDictionary *concreteIndexers; // @synthesize concreteIndexers=_concreteIndexers;
@property(retain, nonatomic) SPCoreSpotlightInteractionHandler *interactionHandler; // @synthesize interactionHandler=_interactionHandler;
@property __weak id <SPCoreSpotlightIndexerDelegate> indexerDelegate; // @synthesize indexerDelegate=_indexerDelegate;
@property __weak id <CSIndexExtensionDelegate> extensionDelegate; // @synthesize extensionDelegate;
- (void).cxx_destruct;
- (void)_reindexAllItemsWithExtensionsAndIdentifiersAndCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_reindexAllItemsWithExtensionsAndCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_reindexAllIdentifiersWithExtension:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)runMigration;
- (void)migrateForced:(_Bool)arg1;
- (void)_migrateIndexExtensionsWithEnumerator:(id)arg1 forced:(_Bool)arg2 migratedBundleIds:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)provideFileURLForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)provideDataForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_fetchAccumulatedStorageSizeForBundleId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleRankingCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)queryForWord:(id)arg1 matchingAttributes:(id)arg2 prefixMatch:(_Bool)arg3;
- (void)powerStateChanged;
- (void)revokeExpiredItems:(id)arg1;
- (void)fetchAttributesForProtectionClass:(id)arg1 attributes:(id)arg2 bundleID:(id)arg3 identifiers:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchAttributes:(id)arg1 protectionClass:(id)arg2 bundleID:(id)arg3 identifiers:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (double)lastUpdateTime;
- (void)performIndexerTask:(id)arg1 withIndexExtensionsAndCompletionHandler:(CDUnknownBlockType)arg2;
- (void)addCompletedBundleIDs:(id)arg1 forIndexerTask:(id)arg2;
- (void)performIndexerTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_issueCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getDBLogsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteActionsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteActionsBeforeTime:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteAllUserActivities:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clientDidCheckin:(id)arg1 protectionClass:(id)arg2 service:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)willModifySearchableItemsWithIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)userPerformedAction:(id)arg1 withItem:(id)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4;
- (void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4 forUTIType:(id)arg5 options:(long long)arg6;
- (void)fetchLastClientStateWithProtectionClass:(id)arg1 forBundleID:(id)arg2 clientStateName:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)deleteSearchableItemsSinceDate:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)deleteAllSearchableItemsWithProtectionClass:(id)arg1 forBundleID:(id)arg2 options:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deleteAllSearchableItemsWithBundleID:(id)arg1 protectionClass:(id)arg2 shouldGC:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 protectionClass:(id)arg5 forBundleID:(id)arg6 options:(long long)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 protectionClass:(id)arg4 forBundleID:(id)arg5 options:(long long)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)indexFromBundle:(id)arg1 protectionClass:(id)arg2 options:(long long)arg3 items:(id)arg4 itemsText:(id)arg5 itemsHTML:(id)arg6 clientState:(id)arg7 clientStateName:(id)arg8 deletes:(id)arg9 completionHandler:(CDUnknownBlockType)arg10;
- (_Bool)writeData:(id)arg1 toFile:(id)arg2;
- (int)openIndex:(_Bool)arg1;
@property(readonly, nonatomic) NSDictionary *fileProviderExtensionToAppBundleMap; // @synthesize fileProviderExtensionToAppBundleMap=_fileProviderExtensionToAppBundleMap;
@property(readonly, nonatomic) NSDictionary *fileProviderAppToExtensionBundleMap; // @synthesize fileProviderAppToExtensionBundleMap=_fileProviderAppToExtensionBundleMap;
- (void)extensionsChanged:(id)arg1;
- (void)checkIfExtensionsNeedToBeLoaded;
- (void)fileProviderInfoSetup;
- (void)writeFileProviderBundleMap:(id)arg1;
- (int)_openIndex:(_Bool)arg1;
- (void)reindexAllItemsWithIndexers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)recordEngagementForBundleID:(id)arg1 uniqueIdentifier:(id)arg2 protectionClass:(id)arg3 userQuery:(id)arg4 date:(id)arg5;
- (void)cancelQuery:(id)arg1;
- (id)startQuery:(id)arg1 withContext:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)startQuery:(id)arg1 withContext:(id)arg2 eventHandler:(CDUnknownBlockType)arg3 handler:(CDUnknownBlockType)arg4;
- (id)taskForTopHitQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)startQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_startQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)startQueryTask:(id)arg1;
- (id)taskForQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_taskForQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)shutdown;
- (void)closeIndex;
- (void)_closeIndexWithIndexers:(id)arg1;
- (void)shrink:(unsigned long long)arg1;
- (void)coolDown;
- (void)issueConsistencyCheck:(id)arg1;
- (void)issueCleanup:(id)arg1 flags:(int)arg2;
- (void)issueRepair:(id)arg1;
- (void)cleanupStringsWithProtectionClasses:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)mergeWithProtectionClasses:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)mergeWithProtectionClasses:(id)arg1 power:(_Bool)arg2;
- (void)mergeWithProtectionClasses:(id)arg1 power:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)issueSplit:(id)arg1;
- (void)commitUpdates;
- (void)commitUpdatesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)flush;
- (void)preheat;
- (void)_reindexAllItemsForBundleIDs:(id)arg1 reason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_reindexAllItemsOnPrefsChanges;
- (void)_registerForPrefsChanges;
- (void)_enumerateIndexersWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateIndexersWithProtectionClasses:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)start;
- (void)locked;
- (void)locking;
- (void)unlock;
- (void)resume;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
