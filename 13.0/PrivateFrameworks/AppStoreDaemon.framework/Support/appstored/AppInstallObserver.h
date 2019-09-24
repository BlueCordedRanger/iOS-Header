//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IXAppInstallCoordinatorObserver-Protocol.h"
#import "IXAppInstallObserverDelegate-Protocol.h"

@class AppInstallScheduler, AppInstallsDatabaseStore, IXAppInstallObserver, NSString, TaskQueue;
@protocol OS_dispatch_queue;

@interface AppInstallObserver : NSObject <IXAppInstallObserverDelegate, IXAppInstallCoordinatorObserver>
{
    AppInstallsDatabaseStore *_databaseStore;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    TaskQueue *_policyQueue;
    IXAppInstallObserver *_installObserver;
    AppInstallScheduler *_installScheduler;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_presentNetworkDialogWithProxy:(id)arg1;
- (void)_reviewConstrainedPolicyForInstallID:(long long)arg1 usingDownload:(id)arg2 coordinator:(id)arg3;
- (void)_reviewCellularPolicyForInstallID:(long long)arg1 usingDownload:(id)arg2 coordinator:(id)arg3;
- (void)_pauseCoordinator:(id)arg1 withLogKey:(id)arg2;
- (void)_handleAppMayBeUninstalledNotification:(id)arg1;
- (void)_applicationInstallsDidPrioritize:(id)arg1 coordinator:(id)arg2;
- (void)shouldPrioritizeAppWithBundleID:(id)arg1;
- (void)coordinatorShouldResume:(id)arg1;
- (void)coordinatorShouldPause:(id)arg1;
- (void)coordinatorShouldPrioritize:(id)arg1;
- (void)coordinatorDidCompleteSuccessfully:(id)arg1;
- (void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
