//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACXDeviceManagerDelegate-Protocol.h"
#import "ACXIDSMessagingDelegate-Protocol.h"

@class ACXIDSMessaging, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ACXCompanionSyncConnectionManager : NSObject <ACXIDSMessagingDelegate, ACXDeviceManagerDelegate>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_connectionMap;
    ACXIDSMessaging *_messagingService;
}

+ (id)sharedConnectionManager;
@property(readonly) ACXIDSMessaging *messagingService; // @synthesize messagingService=_messagingService;
@property(readonly) NSMutableDictionary *connectionMap; // @synthesize connectionMap=_connectionMap;
@property(readonly) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void).cxx_destruct;
- (void)devicesAreNoLongerConnected:(id)arg1;
- (void)devicesAreNowConnected:(id)arg1;
- (void)newDevices:(id)arg1 removedDevices:(id)arg2;
- (void)incomingMessage:(id)arg1 fromDevice:(id)arg2;
- (id)connectionForDevice:(id)arg1;
- (id)connectionForActivePairedDevice;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
