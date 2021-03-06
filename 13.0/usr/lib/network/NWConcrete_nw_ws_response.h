//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_ws_response-Protocol.h>

@class NSString;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_ws_response : NSObject <OS_nw_ws_response>
{
    int status;
    char *selected_subprotocol;
    NSObject<OS_xpc_object> *header_names;
    NSObject<OS_xpc_object> *header_values;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStatus:(int)arg1 selectedProtocol:(const char *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

