//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchConnectivity/WCXPCManagerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, NSURL, WCQueueManager, WCSessionUserInfoTransfer;
@protocol WCSessionDelegate;

@interface WCSession : NSObject <WCXPCManagerDelegate>
{
    _Bool _reachableForced;
    _Bool _hasContentPending;
    _Bool _iOSDeviceNeedsUnlockAfterRebootForReachability;
    _Bool _paired;
    _Bool _reachable;
    _Bool _complicationEnabled;
    _Bool _watchAppInstalled;
    _Bool _companionAppInstalled;
    _Bool _hasCompletedInitialActivation;
    _Bool _connectionWasInterrupted;
    _Bool _delegateSupportsAsyncActivate;
    _Bool _delegateSupportsActiveDeviceSwitch;
    id <WCSessionDelegate> _delegate;
    long long _activationState;
    unsigned long long _remainingComplicationUserInfoTransfers;
    NSURL *_watchDirectoryURL;
    NSDictionary *_applicationContext;
    NSDictionary *_receivedApplicationContext;
    NSOperationQueue *_delegateOperationQueue;
    NSOperationQueue *_backgroundWorkOperationQueue;
    NSOperationQueue *_workOperationQueue;
    NSMutableDictionary *_currentMessages;
    NSMutableSet *_currentMessageIdentifiersAwaitingReply;
    NSMutableDictionary *_internalOutstandingUserInfoTransfers;
    NSMutableDictionary *_internalOutstandingFileTransfers;
    WCSessionUserInfoTransfer *_currentComplicationUserInfoTransfer;
    WCQueueManager *_queueManager;
    NSString *_pairingID;
    NSMutableArray *_switchTasksQueue;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)defaultSession;
+ (_Bool)isSupported;
@property(retain) NSMutableArray *switchTasksQueue; // @synthesize switchTasksQueue=_switchTasksQueue;
@property(nonatomic) _Bool delegateSupportsActiveDeviceSwitch; // @synthesize delegateSupportsActiveDeviceSwitch=_delegateSupportsActiveDeviceSwitch;
@property(nonatomic) _Bool delegateSupportsAsyncActivate; // @synthesize delegateSupportsAsyncActivate=_delegateSupportsAsyncActivate;
@property(nonatomic) _Bool connectionWasInterrupted; // @synthesize connectionWasInterrupted=_connectionWasInterrupted;
@property(nonatomic) _Bool hasCompletedInitialActivation; // @synthesize hasCompletedInitialActivation=_hasCompletedInitialActivation;
@property(copy, nonatomic) NSString *pairingID; // @synthesize pairingID=_pairingID;
@property(retain) WCQueueManager *queueManager; // @synthesize queueManager=_queueManager;
@property(retain) WCSessionUserInfoTransfer *currentComplicationUserInfoTransfer; // @synthesize currentComplicationUserInfoTransfer=_currentComplicationUserInfoTransfer;
@property(retain, nonatomic) NSMutableDictionary *internalOutstandingFileTransfers; // @synthesize internalOutstandingFileTransfers=_internalOutstandingFileTransfers;
@property(retain, nonatomic) NSMutableDictionary *internalOutstandingUserInfoTransfers; // @synthesize internalOutstandingUserInfoTransfers=_internalOutstandingUserInfoTransfers;
@property(retain) NSMutableSet *currentMessageIdentifiersAwaitingReply; // @synthesize currentMessageIdentifiersAwaitingReply=_currentMessageIdentifiersAwaitingReply;
@property(readonly) NSMutableDictionary *currentMessages; // @synthesize currentMessages=_currentMessages;
@property(readonly) NSOperationQueue *workOperationQueue; // @synthesize workOperationQueue=_workOperationQueue;
@property(readonly) NSOperationQueue *backgroundWorkOperationQueue; // @synthesize backgroundWorkOperationQueue=_backgroundWorkOperationQueue;
@property(readonly) NSOperationQueue *delegateOperationQueue; // @synthesize delegateOperationQueue=_delegateOperationQueue;
@property(nonatomic, getter=isCompanionAppInstalled) _Bool companionAppInstalled; // @synthesize companionAppInstalled=_companionAppInstalled;
@property(nonatomic, getter=isWatchAppInstalled) _Bool watchAppInstalled; // @synthesize watchAppInstalled=_watchAppInstalled;
@property(copy, nonatomic) NSDictionary *receivedApplicationContext; // @synthesize receivedApplicationContext=_receivedApplicationContext;
@property(copy, nonatomic) NSDictionary *applicationContext; // @synthesize applicationContext=_applicationContext;
@property(nonatomic, getter=isComplicationEnabled) _Bool complicationEnabled; // @synthesize complicationEnabled=_complicationEnabled;
@property(nonatomic, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
@property(retain, nonatomic) NSURL *watchDirectoryURL; // @synthesize watchDirectoryURL=_watchDirectoryURL;
@property(nonatomic, getter=isPaired) _Bool paired; // @synthesize paired=_paired;
@property(nonatomic) _Bool iOSDeviceNeedsUnlockAfterRebootForReachability; // @synthesize iOSDeviceNeedsUnlockAfterRebootForReachability=_iOSDeviceNeedsUnlockAfterRebootForReachability;
@property(nonatomic) unsigned long long remainingComplicationUserInfoTransfers; // @synthesize remainingComplicationUserInfoTransfers=_remainingComplicationUserInfoTransfers;
@property(nonatomic) _Bool hasContentPending; // @synthesize hasContentPending=_hasContentPending;
@property(nonatomic) long long activationState; // @synthesize activationState=_activationState;
@property(nonatomic) __weak id <WCSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)roundValue:(unsigned long long)arg1 toSignificantFigures:(int)arg2;
- (void)reportFileTransfer:(id)arg1;
- (id)fileSizeFromURL:(id)arg1;
- (_Bool)verifySessionFile:(id)arg1;
- (id)errorIfPreconditionsNotSatisfied;
- (id)errorIfNotReachable;
- (_Bool)logAndTestIfUnactivatedOrMissingDelegate;
- (id)createAndStartTimerOnWorkQueueWithHandler:(CDUnknownBlockType)arg1;
- (void)onqueue_notifyOfUserInfoError:(id)arg1 withUserInfoTransfer:(id)arg2;
- (void)notifyOfUserInfoError:(id)arg1 withUserInfoTransfer:(id)arg2;
- (void)onqueue_notifyOfFileError:(id)arg1 withFileTransfer:(id)arg2;
- (void)notifyOfFileError:(id)arg1 withFileTransfer:(id)arg2;
- (void)_onqueue_notifyOfMessageError:(id)arg1 messageID:(id)arg2 withErrorHandler:(CDUnknownBlockType)arg3;
- (void)onqueue_handleMessageCompletionWithError:(id)arg1 withMessageID:(id)arg2;
- (void)onqueue_dequeueContent;
- (void)onqueue_startNextDeviceSwitch;
- (void)didSessionStateChange:(id)arg1 withChangeHandler:(CDUnknownBlockType)arg2;
- (void)onqueue_handleUpdateSessionState:(id)arg1;
- (void)onqueue_completeSwitchTask:(id)arg1 withSessionState:(id)arg2;
- (void)handleUserInfoResultWithPairingID:(id)arg1;
- (void)handleIncomingUserInfoWithPairingID:(id)arg1;
- (void)handleFileResultWithPairingID:(id)arg1;
- (void)handleIncomingFileWithPairingID:(id)arg1;
- (void)handleApplicationContextWithPairingID:(id)arg1;
- (void)handleSentMessageWithIdentifier:(id)arg1 error:(id)arg2;
- (void)onqueue_handleResponseData:(id)arg1 record:(id)arg2 withPairingID:(id)arg3;
- (void)onqueue_handleResponseDictionary:(id)arg1 record:(id)arg2 withPairingID:(id)arg3;
- (void)handleResponse:(id)arg1;
- (void)onqueue_handleDataMessageRequest:(id)arg1 withPairingID:(id)arg2;
- (void)onqueue_handleDictionaryMessageRequest:(id)arg1 withPairingID:(id)arg2;
- (void)handleRequest:(id)arg1;
- (void)handleMessageSendingAllowed;
- (void)xpcConnectionRestoredWithState:(id)arg1;
- (void)handleSessionStateChanged:(id)arg1;
- (void)handleActiveDeviceSwitchStarted;
- (_Bool)supportsActiveDeviceSwitch;
- (id)currentPairingID;
- (void)xpcConnectionInterrupted;
- (void)onqueue_loadAppContexts;
- (void)storeReceivedAppContext:(id)arg1 withAppContextData:(id)arg2;
- (void)storeAppContext:(id)arg1 withAppContextData:(id)arg2;
- (void)_onqueue_sendResponseError:(id)arg1 identifier:(id)arg2 dictionaryMessage:(_Bool)arg3;
- (void)onqueue_sendResponseData:(id)arg1 identifier:(id)arg2 dictionaryMessage:(_Bool)arg3;
- (void)onqueue_sendResponseDictionary:(id)arg1 identifier:(id)arg2;
- (void)onqueue_transferUserInfo:(id)arg1 withUserInfo:(id)arg2;
- (void)onqueue_cancelUserInfo:(id)arg1;
- (void)cancelUserInfo:(id)arg1;
- (id)transferCurrentComplicationUserInfo:(id)arg1;
- (id)transferUserInfo:(id)arg1;
- (void)onqueue_cancelFileTransfer:(id)arg1;
- (void)cancelFileTransfer:(id)arg1;
- (id)transferFile:(id)arg1 metadata:(id)arg2;
- (_Bool)updateApplicationContext:(id)arg1 error:(id *)arg2;
- (void)onqueue_sendMessageData:(id)arg1 replyHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3 dictionaryMessage:(_Bool)arg4;
- (void)sendMessageData:(id)arg1 replyHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)onqueue_handleProgressFinishedForFileTransfer:(id)arg1;
- (void)onqueue_updateClientProgressForFileTransfer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onqueue_removeProgressForFileTransfer:(id)arg1;
- (void)onqueue_updateProgressForFileTransfer:(id)arg1 progress:(id)arg2;
- (void)onqueue_createProgressForFileTransfer:(id)arg1;
- (void)onqueue_loadFileTransferProgress;
- (void)onqueue_removeOutstandingFileTransfer:(id)arg1;
- (void)onqueue_addOutstandingFileTransfer:(id)arg1;
- (void)onqueue_loadOutstandingFileTransfers;
@property(readonly, copy, nonatomic) NSArray *outstandingFileTransfers;
- (void)onqueue_removeOutstandingUserInfoTransfer:(id)arg1;
- (id)onqueue_addOutstandingUserInfoTransfer:(id)arg1;
- (void)onqueue_loadOutstandingUserInfoTransfers;
- (void)onqueue_setCurrentComplicationUserInfoTransfer:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *outstandingUserInfoTransfers;
- (_Bool)didWatchURLChange:(id)arg1;
- (_Bool)didPairingIDChange:(id)arg1;
- (void)updatePairingID:(id)arg1;
- (void)onqueue_cancelMessagesIfAppropriate;
- (void)onqueue_cancelTransfersIfAppropriate;
- (void)onDelegateQueueIfTriggeringKVO_updateSessionState:(id)arg1 triggerKVO:(_Bool)arg2;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)onqueue_loadPersistedContent;
- (void)activateSession;
- (void)dealloc;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
