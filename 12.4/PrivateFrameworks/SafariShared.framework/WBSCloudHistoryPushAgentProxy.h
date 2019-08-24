//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCloudHistoryPushAgent-Protocol.h>

@class NSString, NSXPCConnection;

@interface WBSCloudHistoryPushAgentProxy : NSObject <WBSCloudHistoryPushAgent>
{
    NSXPCConnection *_agentConnection;
}

- (void).cxx_destruct;
- (void)clearAcknowledgedPushNotifications;
- (void)acknowledgePendingPushNotifications;
- (void)queryMemoryFootprint:(CDUnknownBlockType)arg1;
- (id)queryMemoryFootprintWithError:(id *)arg1;
- (void)getPushNotifications:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
