//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpotlight/CSXPCConnection.h>

@class NSArray, NSObject;
@protocol SpotlightReceiver;

@interface CSRecieverConnection : CSXPCConnection
{
    int _supportedJobs;
    NSObject<SpotlightReceiver> *_receiver;
    NSArray *_bundleIDs;
    NSArray *_contentTypes;
    NSArray *_INIntentClassNames;
}

@property(copy, nonatomic) NSArray *INIntentClassNames; // @synthesize INIntentClassNames=_INIntentClassNames;
@property(copy, nonatomic) NSArray *contentTypes; // @synthesize contentTypes=_contentTypes;
@property(copy, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
@property(readonly, nonatomic) NSObject<SpotlightReceiver> *receiver; // @synthesize receiver=_receiver;
@property(readonly, nonatomic) int supportedJobs; // @synthesize supportedJobs=_supportedJobs;
- (void).cxx_destruct;
- (int)donateRelevantActions:(id)arg1 bundleID:(id)arg2;
- (int)donateRelevantShortcuts:(id)arg1 bundleID:(id)arg2;
- (int)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2;
- (int)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (int)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (int)addInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (int)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 bundleID:(id)arg2;
- (int)deleteAllUserActivities:(id)arg1;
- (int)addUserActions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (int)purgeFromBundle:(id)arg1 identifiers:(id)arg2;
- (int)deleteFromBundle:(id)arg1 sinceDate:(id)arg2 domains:(id)arg3 deletes:(id)arg4;
- (int)indexFromBundle:(id)arg1 protectionClass:(id)arg2 items:(id)arg3 itemsContent:(id)arg4;
- (int)handleSetup:(id)arg1;
- (_Bool)handleCommand:(const char *)arg1 info:(id)arg2 connection:(id)arg3;
- (_Bool)lostClientConnection:(id)arg1 error:(id)arg2;
- (_Bool)addClientConnectionIfAllowedForConnection:(id)arg1;
- (id)initWithReceiver:(id)arg1 forServiceName:(id)arg2;

@end

