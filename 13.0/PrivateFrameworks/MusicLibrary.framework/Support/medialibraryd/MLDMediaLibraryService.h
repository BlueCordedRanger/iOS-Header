//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ML3MusicLibraryDelegate-Protocol.h"
#import "MLDDiagnosticCollection-Protocol.h"
#import "MLDMediaLibraryWriterDelegate-Protocol.h"
#import "MLMediaLibraryServiceProtocol-Protocol.h"
#import "NSXPCConnectionDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class MLDCacheDeleteController, MLDDatabaseImportManager, MLDDatabaseValidationController, MLDMediaLibraryWriter, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, NSTimer;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MLDMediaLibraryService : NSObject <NSXPCConnectionDelegate, NSXPCListenerDelegate, MLDMediaLibraryWriterDelegate, ML3MusicLibraryDelegate, MLMediaLibraryServiceProtocol, MLDDiagnosticCollection>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_spotlightIndexQueue;
    NSObject<OS_dispatch_queue> *_writerBeginTransactionQueue;
    NSObject<OS_dispatch_queue> *_writerUpdateQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_xpcListeners;
    NSMutableDictionary *_xpcClients;
    MLDMediaLibraryWriter *_writer;
    MLDDatabaseImportManager *_importManager;
    MLDCacheDeleteController *_cacheDeleteController;
    MLDDatabaseValidationController *_validationController;
    NSOperationQueue *_maintenanceTasksOperationQueue;
    NSOperationQueue *_databaseRecoveryOperationQueue;
    NSMutableArray *_databaseRecoveryCompletionHandlers;
    NSObject<OS_dispatch_source> *_signalDispatchSource;
    NSObject<OS_dispatch_source> *_spotlightIndexCoalescingTimer;
    NSTimer *_idleTimer;
    NSMutableDictionary *_mediaLibraries;
    NSString *_deviceSharedLibraryPath;
    NSMutableDictionary *_currentAssertions;
    _Bool _databaseLocked;
    long long _currentLockReason;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)faultForQuery:(id)arg1 fromClientBundleID:(id)arg2 onTrustError:(id)arg3;
- (_Bool)_isMediaPath:(id)arg1 selector:(SEL)arg2 resolvedPath:(id *)arg3;
- (_Bool)_platformSupportsSpotlightIndexing;
- (void)_unregisterServiceOriginatedTransactionWithConnection:(id)arg1;
- (void)_validateDatabaseAtPath:(id)arg1 byTruncatingFirst:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_unregisterAssertionForTransactionID:(id)arg1;
- (void)_registerAssertion:(id)arg1 forTransactionID:(id)arg2;
- (void)_performMaintenanceOnDatabaseAtPath:(id)arg1 withActivity:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performScheduledBackupOnDatabaseAtPath:(id)arg1 withActivity:(id)arg2;
- (void)_stopIdleTimer;
- (void)_resetIdleTimer;
- (void)_idleTimerFired:(id)arg1;
- (void)_startIdleTimer;
- (void)_tearDownLibraryContentsDidChangeNotification;
- (void)_handleLibraryContentsDidChangeNotification:(id)arg1;
- (void)_registerForLibraryContentChangeNotifications;
- (void)_writeDiagnosticToDisk:(id)arg1;
- (void)_performDiagnosticWithReason:(id)arg1;
- (void)_handleDebugSignal;
- (void)_tearDownSignalHandler;
- (void)_setupSignalHandler;
- (id)_clientForConnection:(id)arg1;
- (id)_currentXPCClient;
- (void)_handleXPCDisconnect:(id)arg1;
- (id)_deviceSharedLibraryPath;
- (id)_allMediaLibraries;
- (id)_mediaLibraryForPath:(id)arg1;
- (long long)_MLDSupportedServiceForXPCListener:(id)arg1;
- (id)_XPCListenerForService:(long long)arg1;
- (void)_setupCacheDeleteController;
- (void)_setupActivityHandlers;
- (void)_setupNotifyEventHandlers;
- (void)_reconnectLibraries:(id)arg1;
- (void)_disconnectLibraries:(id)arg1;
@property(nonatomic) long long currentLockReason; // @synthesize currentLockReason=_currentLockReason;
@property(nonatomic, getter=isDatabaseLocked) _Bool databaseLocked; // @synthesize databaseLocked=_databaseLocked;
- (void)start;
- (void)collectDiagnostic:(id)arg1;
- (void)mediaLibraryWriter:(id)arg1 terminatedTransaction:(id)arg2 withError:(id)arg3;
- (void)library:(id)arg1 didRollbackDatabaseTransactionWithConnection:(id)arg2;
- (void)library:(id)arg1 didCommitDatabaseTransactionWithConnection:(id)arg2;
- (void)library:(id)arg1 didBeginDatabaseTransactionWithConnection:(id)arg2;
- (_Bool)_shouldAcceptConnectionForMediaLibraryService:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)getMediaLibraryResourcesServiceListenerEndpointWithCompletion:(CDUnknownBlockType)arg1;
- (void)performMaintenanceTasksForDatabaseAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)performRestoreOfLatestBackupForDatabaseAtPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)performBackupOfDatabaseAtPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateSpotlightIndexMetadataForItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)updateSpotlightIndexForBundleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getLanguageResourcesWithCompletion:(CDUnknownBlockType)arg1;
- (void)unlockDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)lockDatabaseForReason:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)cancelImportOperation:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performImport:(id)arg1 fromSource:(unsigned long long)arg2 withUUID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setOptions:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)performDatabaseOperation:(unsigned long long)arg1 withAttributes:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)endTransaction:(id)arg1 shouldCommit:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (void)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)beginTransactionForDatabaseAtPath:(id)arg1 withPriorityLevel:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)recreateDatabaseAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)performDiagnosticWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)checkIntegrityOfDatabaseAtPath:(id)arg1 repairFaults:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)attemptDatabaseFileRecoveryAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)validateDatabaseAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
