//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <boringssl/OS_boringssl_handshake_callback_status-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface boringssl_concrete_boringssl_handshake_callback_status : NSObject <OS_boringssl_handshake_callback_status>
{
    _Bool complete;
    int message_type;
    CDUnknownBlockType completion_callback;
}

- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
