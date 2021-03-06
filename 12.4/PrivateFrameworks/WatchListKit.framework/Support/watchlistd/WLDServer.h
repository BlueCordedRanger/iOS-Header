//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "WLDClientConnectionDelegate-Protocol.h"

@class NSMutableSet, NSString, NSXPCListener, WLDPlaybackManager, WLDPushNotificationController;

__attribute__((visibility("hidden")))
@interface WLDServer : NSObject <NSXPCListenerDelegate, WLDClientConnectionDelegate>
{
    NSMutableSet *_clients;
    NSXPCListener *_xpcListener;
    WLDPlaybackManager *_playbackManager;
    WLDPushNotificationController *_pushController;
}

+ (id)server;
- (void).cxx_destruct;
- (void)handleSubscriptionRegistration;
- (void)start;
- (void)clientConnectionDidInvalidate:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)_init;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

