//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, OTConfigurationContext;

@interface OTClique : NSObject
{
    NSString *_cliqueMemberIdentifier;
    OTConfigurationContext *_ctx;
    NSMutableDictionary *_defaults;
}

+ (void)recoverOctagonUsingData:(id)arg1 recoveryKey:(id)arg2 reply:(CDUnknownBlockType)arg3;
+ (void)setNewRecoveryKeyWithData:(id)arg1 recoveryKey:(id)arg2 reply:(CDUnknownBlockType)arg3;
+ (id)recoverWithContextData:(id)arg1 bottleID:(id)arg2 escrowedEntropy:(id)arg3 error:(id *)arg4;
+ (id)findOptimalBottleIDsWithContextData:(id)arg1 error:(id *)arg2;
+ (id)performEscrowRecoveryWithContextData:(id)arg1 escrowArguments:(id)arg2 error:(id *)arg3;
+ (id)newFriendsWithContextData:(id)arg1 error:(id *)arg2;
+ (_Bool)platformSupportsSOS;
@property(retain, nonatomic) NSMutableDictionary *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) OTConfigurationContext *ctx; // @synthesize ctx=_ctx;
@property(copy, nonatomic) NSString *cliqueMemberIdentifier; // @synthesize cliqueMemberIdentifier=_cliqueMemberIdentifier;
- (void).cxx_destruct;
- (void)performedSuccessfulCDPStateMachineRun:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)performedFailureCDPStateMachineRun:(id)arg1 error:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)performedCDPStateMachineRun:(id)arg1 success:(_Bool)arg2 error:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)performedCoreFollowUp:(id)arg1 error:(id)arg2;
- (void)fetchEscrowContents:(CDUnknownBlockType)arg1;
- (_Bool)accountUserKeyAvailable;
- (_Bool)requestToJoinCircle:(id *)arg1;
- (_Bool)peersHaveViewsEnabled:(id)arg1 error:(id *)arg2;
- (id)copyPeerPeerInfo:(id *)arg1;
- (_Bool)tryUserCredentialsAndDSID:(id)arg1 password:(id)arg2 error:(id *)arg3;
- (_Bool)setUserCredentialsAndDSID:(id)arg1 password:(id)arg2 error:(id *)arg3;
- (_Bool)viewSet:(id)arg1 disabledViews:(id)arg2;
- (id)copyViewUnawarePeerInfo:(id *)arg1;
- (_Bool)waitForInitialSync:(id *)arg1;
- (_Bool)isLastFriend:(id *)arg1;
- (_Bool)safariPasswordSyncingEnabled:(id *)arg1;
- (_Bool)joinAfterRestore:(id *)arg1;
- (id)peerDeviceNamesByPeerID:(id *)arg1;
- (_Bool)leaveClique:(id *)arg1;
- (_Bool)removeFriendsInClique:(id)arg1 error:(id *)arg2;
- (long long)cachedCliqueStatus:(_Bool)arg1 error:(id *)arg2;
- (long long)fetchCliqueStatus:(id *)arg1;
- (long long)fetchCliqueStatus:(id)arg1 error:(id *)arg2;
- (long long)_fetchCliqueStatus:(id)arg1 cached:(_Bool)arg2 error:(id *)arg3;
- (id)setupPairingChannelAsAcceptor:(id)arg1 error:(id *)arg2;
- (id)setupPairingChannelAsAcceptor:(id)arg1;
- (id)setupPairingChannelAsInitator:(id)arg1 error:(id *)arg2;
- (id)setupPairingChannelAsInitiator:(id)arg1;
- (_Bool)resetAndEstablish:(id *)arg1;
- (_Bool)establish:(id *)arg1;
- (id)makeOTControl:(id *)arg1;
- (id)initWithContextData:(id)arg1 error:(id *)arg2;
- (void)removePairingDefault;
- (void)setPairingDefault:(_Bool)arg1;
- (_Bool)isOctagonPairingEnabled;

@end
