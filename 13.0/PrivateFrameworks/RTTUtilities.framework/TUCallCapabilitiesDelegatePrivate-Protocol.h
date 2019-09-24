//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RTTUtilities/TUCallCapabilitiesDelegate-Protocol.h>

@class NSUUID;

@protocol TUCallCapabilitiesDelegatePrivate <TUCallCapabilitiesDelegate>

@optional
- (void)didChangeRelayCallingFeatures;
- (void)didChangeEmergencyCallbackPossible;
- (void)didChangeEmergencyCallbackMode;
- (void)didChangeThumperCallingProvisionalURLForSenderIdentityWithUUID:(NSUUID *)arg1;
- (void)didChangeWiFiCallingProvisionalURLForSenderIdentityWithUUID:(NSUUID *)arg1;
- (void)didChangeThumperCallingCapabilitiesForSenderIdentityWithUUID:(NSUUID *)arg1;
- (void)didChangeWiFiCallingCapabilitiesForSenderIdentityWithUUID:(NSUUID *)arg1;
- (void)didChangeVoLTECallingCapabilitiesForSenderIdentityWithUUID:(NSUUID *)arg1;
- (void)didRemoveCapabilitiesForSenderIdentityWithUUID:(NSUUID *)arg1;
- (void)didAddCapabilitiesForSenderIdentityWithUUID:(NSUUID *)arg1;
- (void)didChangeCloudCallingDevices;
- (void)didChangeOutgoingRelayCallerID;
- (void)didChangeRelayCallingAvailability;
- (void)didChangeRelayCallingCapabilities;
- (void)didChangeFaceTimeCallingAvailability;
@end
