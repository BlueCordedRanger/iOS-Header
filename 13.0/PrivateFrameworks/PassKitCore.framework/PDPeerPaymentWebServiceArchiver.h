//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPeerPaymentWebServiceArchiver-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface PDPeerPaymentWebServiceArchiver : NSObject <PKPeerPaymentWebServiceArchiver>
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)archiveContext:(id)arg1;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
