//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString, NSURL;

@interface PKPeerPaymentServiceRegistrationResponse : PKPeerPaymentWebServiceResponse
{
    NSString *_deviceIdentifier;
    NSString *_peerPaymentServicesPushTopic;
    NSURL *_peerPaymentServiceURL;
}

@property(readonly, copy, nonatomic) NSURL *peerPaymentServiceURL; // @synthesize peerPaymentServiceURL=_peerPaymentServiceURL;
@property(readonly, copy, nonatomic) NSString *peerPaymentServicesPushTopic; // @synthesize peerPaymentServicesPushTopic=_peerPaymentServicesPushTopic;
@property(readonly, copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end
