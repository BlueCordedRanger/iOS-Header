//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCalendar, NSMutableArray, NSSet, NSString, PLAssetsdClient, PLFetchingAlbum, PLGenericAlbum, PLManagedAlbum, PLManagedAlbumList, PLManagedFolder, PLManagedObjectContext, PLPhotoAnalysisServiceClient, PLPhotoLibraryPathManager, PLSimpleDCIMDirectory;
@protocol PLAlbumProtocol;

@interface PLPhotoLibrary : NSObject
{
    _Bool _listeningForITunesSyncing;
    _Bool _isTransient;
    unsigned long long _pendingTransactions;
    struct __CFDictionary *_allPhotos;
    int _databaseMigrationKind;
    NSMutableArray *_transactionCompletionHandlers;
    PLGenericAlbum *_allImportedPhotosAlbum;
    PLGenericAlbum *_lastImportedPhotosAlbum;
    NSCalendar *_exifConversionCalendar;
    NSSet *_imageFileExtensions;
    NSSet *_rawImageFileExtensions;
    NSSet *_audioFileExtensions;
    NSSet *_extraVideoExtensions;
    PLManagedAlbum *_cameraRollAlbum;
    PLFetchingAlbum *_userLibraryAlbum;
    PLFetchingAlbum *_cameraSessionAlbum;
    PLManagedAlbumList *_rootAlbumList;
    PLManagedFolder *_rootFolder;
    NSString *_cachedName;
    PLAssetsdClient *_assetsdClient;
    PLPhotoAnalysisServiceClient *_photoAnalysisClient;
    PLSimpleDCIMDirectory *_simpleDCIMDirectory;
    PLSimpleDCIMDirectory *_iTunesSyncedAssetsDCIMDirectory;
    PLManagedObjectContext *managedObjectContext;
    PLPhotoLibraryPathManager *_pathManager;
    NSArray *_importAlbums;
    NSArray *_eventAlbums;
    NSArray *_faceAlbums;
    NSArray *_placeAlbums;
}

+ (unsigned long long)CloudPhotoLibrarySize;
+ (_Bool)_assetsLibrary_isSharedPhotoStreamsSupportEnabled;
+ (void)_assetsLibrary_disableSharedPhotoStreamsSupport;
+ (unsigned long long)sharedStreamsSize;
+ (void)updateAlbumKeyAssetsInContext:(id)arg1 withPredicate:(id)arg2;
+ (void)_updateMemoryCountKeyPath:(id)arg1 withPendingCountKeyPath:(id)arg2 inContext:(id)arg3;
+ (void)updateMemoryPlayShareViewCountsInContext:(id)arg1;
+ (void)_updateAssetCountKeyPath:(id)arg1 withPendingCountKeyPath:(id)arg2 inContext:(id)arg3;
+ (void)updateAssetPlayShareViewCountsInContext:(id)arg1;
+ (void)refreshCachedCountsOnAssetsContainerClass:(Class)arg1 inContext:(id)arg2 withPredicate:(id)arg3;
+ (void)refreshCachedCountsOnAllAssetContainersInContext:(id)arg1;
+ (void)delayedRefreshCachedCountsInAlbumIDs:(id)arg1;
+ (_Bool)isAlbumSynced:(id)arg1;
+ (id)syncedAlbumSubtitleStringFormat;
+ (_Bool)canSaveVideoToCameraRoll:(id)arg1;
+ (int)priorityForFileExtension:(id)arg1;
+ (_Bool)isAudioFileExtension:(id)arg1;
+ (_Bool)isVideoFileExtension:(id)arg1;
+ (_Bool)isNonRawImageFileExtension:(id)arg1;
+ (_Bool)isRawImageFileExtension:(id)arg1;
+ (_Bool)isImageFileExtension:(id)arg1;
+ (void)_loadFileExtensionInformation;
+ (id)photoOutboundSharingTmpDirectoryURL;
+ (void)exitToRelocatePhotoLibrary;
+ (id)_getLibraryPathFromTriggerFile;
+ (void)removeRelocateLibraryTriggerFile;
+ (void)createRelocateLibraryTriggerFileWithPath:(id)arg1;
+ (void)_setSqliteErrorAndExitIfNecessaryForReason:(int)arg1;
+ (void)setSqliteErrorAndExitIfNecessaryForDemoContentInstallation;
+ (void)setSqliteErrorAndExitIfNecessaryForSimulatedCorruption:(_Bool)arg1;
+ (_Bool)createSqliteErrorIndicatorFile;
+ (_Bool)processWithID:(int)arg1 canWriteSandboxForPath:(id)arg2;
+ (_Bool)processCanWriteSandboxForPath:(id)arg1;
+ (_Bool)processWithID:(int)arg1 canReadSandboxForPath:(id)arg2;
+ (_Bool)processCanReadSandboxForPath:(id)arg1;
+ (_Bool)removeFaceMetadataAtURL:(id)arg1 includingPeople:(_Bool)arg2;
+ (_Bool)isDataMigratorFinished;
+ (void)setDataMigratorFinished:(_Bool)arg1;
+ (id)_dataMigratorFinishedMarkerQueue;
+ (_Bool)isDataProtectionComplete;
+ (void)setDataProtectionComplete:(_Bool)arg1;
+ (_Bool)isStreamsLibraryUpdatingExpired;
+ (void)setStreamsLibraryUpdatingExpired:(_Bool)arg1;
+ (_Bool)libraryAvailableIndicatorState;
+ (void)setLibraryAvailableIndicatorState:(_Bool)arg1;
+ (_Bool)_isRebuildingPersons;
+ (void)_setIsRebuildingPersons:(_Bool)arg1;
+ (_Bool)isDupeAnalysisNeeded;
+ (void)setDupeAnalysisNeeded:(_Bool)arg1;
+ (_Bool)isDisableICloudPhotos;
+ (_Bool)isEnableICloudPhotos;
+ (_Bool)isForceSoftResetSync;
+ (_Bool)isUserPause;
+ (short)currentPauseReason;
+ (_Bool)isICloudPhotosPaused;
+ (id)unpauseTime;
+ (id)_pauseDataOnPath:(id)arg1;
+ (void)createPauseMarkerWithUnpauseTime:(id)arg1 reason:(short)arg2;
+ (void)_createPauseMarkerForReason:(short)arg1 withUnpauseTime:(id)arg2 withPath:(id)arg3;
+ (_Bool)_canSetPauseMarkerWithUnpauseTime:(id)arg1 onPauseData:(id)arg2;
+ (_Bool)clearPauseMarkerForReason:(short)arg1;
+ (void)updateICloudPhotosMarkerForEnable:(_Bool)arg1;
+ (void)setCameraRollCountedInQuota:(_Bool)arg1;
+ (void)setICloudPhotosEnabled:(_Bool)arg1;
+ (void)setICloudPhotosEnabledInternal:(_Bool)arg1;
+ (void)_writeEnableICloudPhotosMarker;
+ (void)_writeDisableICloudPhotosMarker;
+ (void)forceSoftResetSync;
+ (_Bool)isMomentAnalysisNeeded;
+ (void)setMomentAnalysisNeeded:(_Bool)arg1;
+ (id)fileReservationForFileAtPath:(id)arg1 exclusive:(_Bool)arg2;
+ (void)setTakingPhotoIsBusy:(_Bool)arg1;
+ (void)setVideoCaptureIsBusy:(_Bool)arg1;
+ (void)setImageWriterIsBusy:(_Bool)arg1;
+ (void)repairSingletonObjects;
+ (void)postGlobalPhotoLibraryAvailableNotification;
+ (_Bool)isRunningInStoreDemoMode;
+ (void)recordDataMigrationInfo:(id)arg1;
+ (_Bool)photoLibraryIsObtainable;
+ (id)crashRecoveryIndicatorFilePaths:(_Bool)arg1;
+ (id)_rebuildingPersonsIndicatorFilePath;
+ (id)_dataMigratorFinishedFilePath;
+ (id)_dataProtectionIndicatorFilePath;
+ (id)pauseICloudPhotosFilePath;
+ (id)enableICloudPhotosFilePath;
+ (id)deletedMemoryUUIDsFilePath;
+ (void)deleteCPLDownloadFinishedMarkerFilePath;
+ (id)cplDownloadFinishedMarkerFilePath;
+ (id)cplEnableMarkerFilePath;
+ (id)disableICloudPhotosFilePath;
+ (id)forceSoftResetSyncPath;
+ (id)momentAnalysisNeededFilePath;
+ (id)dupeAnalysisNeededFilePath;
+ (void)createPhotoStreamAlbumWithStreamID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)createPhotoStreamAlbumWithStreamID:(id)arg1 inLibrary:(id)arg2;
+ (void)_inq_createPhotoStreamAlbumStreamID:(id)arg1 inLibrary:(id)arg2;
+ (void)setCloudAlbumSharingEnabled:(_Bool)arg1;
+ (void)setPhotoStreamEnabled:(_Bool)arg1;
+ (void)deleteITunesSyncedContentForEnablingiCPL;
+ (id)iTunesSyncedContentInfo;
+ (_Bool)hasITunesSyncedContent;
+ (void)updateUnverifiedFaceCountThreshold;
+ (void)setUnverifiedFaceCountThreshold:(unsigned long long)arg1;
+ (unsigned long long)unverifiedFaceCountThreshold;
+ (unsigned long long)defaultUnverifiedFaceCountThreshold;
+ (_Bool)isSafeToRecoverAfterCrash;
+ (_Bool)areOpportunisticTasksDisabled;
+ (void)disableOpportunisticTasks;
+ (void)enableOpportunisticTasks;
+ (id)opportunisticTaskIsolationQueue;
+ (void)recoverFromCrashIfNeeded;
+ (void)_enqeueRecoveryJob:(id)arg1;
+ (void)handlePossibleCoreDataError:(id)arg1;
+ (_Bool)isApplicationWildcat;
+ (void)setApplicationIsWildcat:(_Bool)arg1;
+ (id)sharedPhotoLibrary;
+ (void)_context:(id)arg1 saveFailedWithError:(id)arg2;
+ (void)_contextSaveFailedWithError:(id)arg1;
+ (void)_contextSaveFailedWithSQLiteError:(id)arg1;
+ (void)_contextSaveFailedWithTimeoutError:(id)arg1;
+ (void)_enqueueOperationWithName:(id)arg1 priority:(long long)arg2 block:(CDUnknownBlockType)arg3;
+ (id)_operationQueueForPriority:(long long)arg1;
+ (_Bool)_assetsdQueueingMode;
+ (void)performTransactionAndWaitOnTransientLibraryWithName:(const char *)arg1 block:(CDUnknownBlockType)arg2;
+ (void)performAndWaitOnTransientLibraryWithName:(const char *)arg1 block:(CDUnknownBlockType)arg2;
+ (void)performOnTransientLibraryWithPriority:(long long)arg1 name:(const char *)arg2 block:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)performOnTransientLibraryWithPriority:(long long)arg1 name:(const char *)arg2 block:(CDUnknownBlockType)arg3;
+ (id)queueStatusDescription;
+ (id)_statusDescriptionForQueue:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *placeAlbums; // @synthesize placeAlbums=_placeAlbums;
@property(readonly, copy, nonatomic) NSArray *faceAlbums; // @synthesize faceAlbums=_faceAlbums;
@property(readonly, copy, nonatomic) NSArray *eventAlbums; // @synthesize eventAlbums=_eventAlbums;
@property(readonly, copy, nonatomic) NSArray *importAlbums; // @synthesize importAlbums=_importAlbums;
@property(readonly, nonatomic) PLPhotoLibraryPathManager *pathManager; // @synthesize pathManager=_pathManager;
@property(retain, nonatomic) PLManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext;
- (void).cxx_destruct;
- (unsigned long long)numberOfUnpushedAssetsOfKind:(short)arg1;
- (unsigned long long)numberOfCPLSupportedAssetsOfKind:(short)arg1 includingTrashedSinceDate:(id)arg2;
- (void)deleteExpiredTrashBinObjects;
- (void)scheduleUserInitiatedAnalysisForAssets:(id)arg1;
- (_Bool)_checkMomentAnalysisCompletion;
- (_Bool)hasCompletedMomentAnalysis;
- (id)incompleteRestoreProcesses;
- (_Bool)isReadyForCloudPhotoLibrary;
- (_Bool)_isOTARestoreInProgress;
- (_Bool)hasCompletedRestorePostProcessing;
- (_Bool)_hasPendingAssetsIgnoreiTunes:(_Bool)arg1;
- (id)syncProgressAlbumsIgnoreiTunes:(_Bool)arg1;
- (id)librarySizes;
- (id)estimatedLibrarySizes;
- (unsigned long long)_dbFileSizes;
- (unsigned long long)_fileSizeAtPath:(id)arg1;
- (id)librarySizesFromDB;
- (_Bool)getPhotoCount:(unsigned long long *)arg1 videoCount:(unsigned long long *)arg2;
- (_Bool)getPhotoCount:(unsigned long long *)arg1 videoCount:(unsigned long long *)arg2 excludeTrashed:(_Bool)arg3 excludeInvisible:(_Bool)arg4 excludeCloudShared:(_Bool)arg5;
- (id)albumListForContentMode:(int)arg1;
- (void)cleanupFilesAfteriTunesSyncBeforeDate:(id)arg1;
- (void)processSyncSaveJob:(id)arg1 albumMap:(id)arg2;
- (_Bool)_isHeifUTI:(struct __CFString *)arg1;
- (void)_resetSyncedAssetsDCIMDirectory;
- (id)assetsdClient;
- (id)iTunesSyncedAssetsDCIMDirectory;
- (id)simpleDCIMDirectory;
- (_Bool)hasPhotoWithFileCreationDate:(id)arg1 fileName:(id)arg2 fileSize:(long long)arg3;
- (id)masterURLFromSidecarURLs:(id)arg1;
- (void)_processPhotoIrisSidecarIfNecessary:(id)arg1 forAsset:(id)arg2;
- (void)_applyAdjustmentFileInfo:(id)arg1 renderedContentFileInfo:(id)arg2 renderedVideoComplementFileInfo:(id)arg3 toAsset:(id)arg4 withMainFileURL:(id)arg5;
- (void)_applySideCarFiles:(id)arg1 toAsset:(id)arg2 withMainFileURL:(id)arg3;
- (id)addDCIMEntryAtFileURL:(id)arg1 toEvent:(struct NSObject *)arg2 sidecarFileInfo:(id)arg3 progress:(id)arg4 importSessionIdentifier:(id)arg5 isImported:(_Bool)arg6 previewImage:(id)arg7 thumbnailImage:(id)arg8 savedAssetType:(short)arg9 replacementUUID:(id)arg10 publicGlobalUUID:(id)arg11 extendedInfo:(id)arg12 withUUID:(id)arg13 ignoreEmbeddedMetadata:(_Bool)arg14 isPlaceholder:(_Bool)arg15;
- (void)modifyDCIMEntryForPhoto:(id)arg1;
- (id)newImageForPhoto:(id)arg1 format:(int)arg2;
- (id)newImageForPhoto:(id)arg1 format:(int)arg2 allowPlaceholder:(_Bool)arg3 outImageProperties:(const struct __CFDictionary **)arg4 outDeliveredPlaceholder:(_Bool *)arg5;
- (id)imageForFormat:(int)arg1 forAsset:(id)arg2;
- (struct NSObject *)filesystemImportProgressAlbum;
- (struct NSObject *)otaRestoreProgressAlbum;
- (struct NSObject *)syncProgressAlbum;
- (struct NSObject *)iPadAllPhotosAlbumIfExists;
- (struct NSObject *)iPadAllPhotosAlbum;
- (struct NSObject *)allPhotosAlbumIfExists;
- (struct NSObject *)allPhotosAlbum;
- (unsigned long long)editableAlbumCount;
- (id)syncedAlbums;
- (void)_updateWithInsertedAssetsCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2;
- (void)resetCachedImportAlbumsIfNeededForAlbum:(id)arg1;
- (id)lastImportedPhotosAlbumCreateIfNeeded:(_Bool)arg1;
- (id)lastImportedPhotosAlbum;
- (id)allImportedPhotosAlbumCreateIfNeeded:(_Bool)arg1;
- (id)allImportedPhotosAlbum;
- (void)_removeOldFaceMetadataAsync;
- (void)_enumerateFilesAtURL:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateFilesAtURLs:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_recreateItemsFromMetadataAtDirectoryURLs:(id)arg1;
- (void)_deleteEmptyImportAlbumsWithAddedAlbums:(id)arg1;
- (void)recreatePersonsFromMetadata;
- (void)recreateAlbumsAndPersonsFromMetadata;
- (_Bool)needsMigration;
- (id)managedObjectContextStoreUUID;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (id)globalValueForKey:(id)arg1;
- (unsigned long long)concurrencyType;
- (_Bool)isTransient;
- (void)_loadDatabase:(const char *)arg1;
- (_Bool)_shouldCreateDatabase;
- (void)_linkAsideAlbumMetadataForOTARestore;
- (void)cleanupForStoreDemoMode;
- (void)_legacyCleanupForStoreDemoMode;
- (_Bool)_stageDemoLibraryContentForStoreDemoMode;
- (void)cleanupIncompleteAssetsAfterOTARestore;
- (void)cleanupModelForDataMigrationPurgeMissingSharedAndSynced;
- (id)_dataMigrationInfo;
- (void)prepareDatabaseForOTAAssetsPhase;
- (id)_allAssetsForDeletion:(id)arg1;
- (id)_fetchCompleteAssetIDsWithSavedAssetType:(short)arg1 context:(id)arg2;
- (_Bool)batchDeleteObjectsWithEntity:(id)arg1 predicate:(id)arg2 error:(id *)arg3;
- (_Bool)batchDeleteAssetsWithPredicate:(id)arg1 reason:(id)arg2 error:(id *)arg3;
- (id)_fetchedObjectsForDeleteWithEntity:(id)arg1 predicate:(id)arg2 batchSize:(unsigned long long)arg3 error:(id *)arg4;
- (void)batchDeleteAssets:(id)arg1 withReason:(id)arg2;
- (_Bool)_safeSave:(id)arg1 error:(id *)arg2;
- (void)_safeSave:(id)arg1;
- (void)_calculatePendingItemCountsAfterOTARestoreWithMangedObjectContext:(id)arg1;
- (void)_removeSyncedAlbumsInTransactionWithManagedObjectContext:(id)arg1;
- (_Bool)_hasAtLeastOneItem:(_Bool)arg1;
- (void)cleanupAfterImportAllDCIMAssets;
- (void)_deleteObsoleteMetadataFiles;
- (_Bool)deleteAllDiagnosticFiles:(id *)arg1;
- (struct NSObject *)albumFromGroupURL:(id)arg1;
- (id)photoFromAssetURL:(id)arg1;
- (id)assetURLForPhoto:(id)arg1;
- (id)assetURLForPhoto:(id)arg1 extension:(id)arg2;
- (void)setLastImportSessionUUID:(id)arg1;
- (id)duplicatePhotoStreamPhotosForPhotos:(id)arg1;
- (void)userExpungeAssets:(id)arg1;
- (void)userUntrashAssets:(id)arg1;
- (void)userTrashAssets:(id)arg1;
- (void)_reportExpungedAssets:(id)arg1;
- (void)_userApplyTrashedState:(short)arg1 toAssets:(id)arg2;
- (void)_filterAssets:(id)arg1 toTrashableAssets:(id *)arg2 deletableAssets:(id *)arg3 otherAssets:(id *)arg4;
- (void)_userDeleteAssets:(id)arg1 withReason:(id)arg2;
- (id)assetWithUUID:(id)arg1 inContainer:(id)arg2;
- (id)assetWithUUID:(id)arg1;
- (id)objectWithObjectID:(id)arg1;
- (unsigned long long)countOfLocalAlbumsContainingAssets:(id)arg1 assetsInSomeAlbumCount:(long long *)arg2;
- (struct NSObject *)eventAlbumContainingPhoto:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *photoStreamAlbumsForPreferences;
@property(readonly, copy, nonatomic) NSObject<PLAlbumProtocol> *placesAlbum;
@property(readonly, copy, nonatomic) NSObject<PLAlbumProtocol> *favoritesAlbum;
@property(readonly, copy, nonatomic) NSArray *photoStreamAlbums;
- (id)albumListForAlbumOfKind:(int)arg1;
- (void)userExpungeAlbums:(id)arg1;
- (void)userUntrashAlbums:(id)arg1;
- (void)userTrashAlbums:(id)arg1;
- (void)_userApplyTrashedState:(short)arg1 toAlbums:(id)arg2;
- (void)_filterAlbums:(id)arg1 toTrashableAlbums:(id *)arg2 deletableAlbums:(id *)arg3 otherAlbums:(id *)arg4;
- (void)_userDeleteAlbums:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *userAlbums;
@property(readonly, copy, nonatomic) NSArray *albums;
@property(readonly, retain, nonatomic) PLManagedFolder *rootFolder;
@property(readonly, retain, nonatomic) PLManagedAlbumList *rootAlbumList;
- (struct NSObject *)albumWithUuid:(id)arg1;
- (struct NSObject *)eventWithName:(id)arg1 andImportSessionIdentifier:(id)arg2;
@property(readonly, retain, nonatomic) PLFetchingAlbum *userLibraryAlbum;
- (void)addCompletionHandlerToCurrentTransaction:(CDUnknownBlockType)arg1;
- (_Bool)_hasIncompleteAsset;
- (_Bool)hasAtLeastOnePhoto;
- (_Bool)hasAtLeastOneItem;
- (void)_photoLibraryForceClientExitNotification;
- (void)_photoLibraryCorruptNotification;
- (id)photoAnalysisClient;
- (void)clientApplicationWillEnterForeground;
- (void)_doFilesystemImportIfNeededWithMOC:(id)arg1 reason:(id)arg2;
- (id)name;
- (void)dealloc;
- (id)initWithTransientContext:(_Bool)arg1 name:(const char *)arg2 pathManager:(id)arg3;
- (id)initWithTransientContext:(_Bool)arg1 name:(const char *)arg2 basePath:(id)arg3;
- (id)initWithTransientContext:(_Bool)arg1 name:(const char *)arg2;
- (id)initWithName:(const char *)arg1;
- (id)init;
- (void)testForRecoveryInBackground;
- (void)_withDispatchGroup:(id)arg1 synchronously:(_Bool)arg2 priority:(long long)arg3 name:(id)arg4 shouldSave:(_Bool)arg5 performTransaction:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)withDispatchGroup:(id)arg1 performBlock:(CDUnknownBlockType)arg2;
- (void)withDispatchGroup:(id)arg1 performTransaction:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)withDispatchGroup:(id)arg1 performTransaction:(CDUnknownBlockType)arg2;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 withPriority:(long long)arg3;
- (void)performBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1 withPriority:(long long)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performTransactionAndWaitWithName:(id)arg1 transaction:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performTransactionAndWait:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performTransaction:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performTransaction:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 withPriority:(long long)arg3;
- (void)performTransactionAndWait:(CDUnknownBlockType)arg1;
- (void)performTransaction:(CDUnknownBlockType)arg1;
- (void)performTransaction:(CDUnknownBlockType)arg1 withPriority:(long long)arg2;

@end
