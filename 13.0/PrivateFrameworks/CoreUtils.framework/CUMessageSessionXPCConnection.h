//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUMessageSessionXPCServerInterface-Protocol.h>

@class CUMessageSessionServer, NSMutableSet, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CUMessageSessionXPCConnection : NSObject <CUMessageSessionXPCServerInterface>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _invalidated;
    NSMutableSet *_registeredRequestIDs;
    CUMessageSessionServer *_server;
    NSXPCConnection *_xpcCnx;
}

- (void).cxx_destruct;
- (void)remoteSendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)remoteRegisterRequestID:(id)arg1 options:(id)arg2;
- (void)connectionInvalidated;

@end
