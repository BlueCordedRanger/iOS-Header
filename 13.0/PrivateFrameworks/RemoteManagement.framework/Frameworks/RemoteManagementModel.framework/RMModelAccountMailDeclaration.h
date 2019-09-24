//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelConfigurationBase.h>

#import <RemoteManagementModel/RMModelRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface RMModelAccountMailDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>
{
    NSString *_payloadEmailAccountDescription;
    NSString *_payloadEmailAccountName;
    NSString *_payloadEmailAccountType;
    NSString *_payloadEmailAddress;
    NSString *_payloadIncomingMailServerAuthentication;
    NSString *_payloadIncomingCredentials;
    NSString *_payloadIncomingMailServerHostName;
    NSNumber *_payloadIncomingMailServerPortNumber;
    NSNumber *_payloadIncomingMailServerUseSSL;
    NSString *_payloadOutgoingMailServerAuthentication;
    NSString *_payloadOutgoingCredentials;
    NSString *_payloadOutgoingMailServerHostName;
    NSNumber *_payloadOutgoingMailServerPortNumber;
    NSNumber *_payloadOutgoingMailServerUseSSL;
    NSNumber *_payloadPreventMove;
    NSNumber *_payloadPreventAppSheet;
    NSNumber *_payloadDisableMailRecentsSyncing;
    NSNumber *_payloadAllowMailDrop;
    NSString *_payloadIncomingMailServerIMAPPathPrefix;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 emailAccountType:(id)arg2 incomingMailServerAuthentication:(id)arg3 incomingMailServerHostName:(id)arg4 outgoingMailServerAuthentication:(id)arg5 outgoingMailServerHostName:(id)arg6;
+ (id)buildWithIdentifier:(id)arg1 emailAccountDescription:(id)arg2 emailAccountName:(id)arg3 emailAccountType:(id)arg4 emailAddress:(id)arg5 incomingMailServerAuthentication:(id)arg6 incomingCredentials:(id)arg7 incomingMailServerHostName:(id)arg8 incomingMailServerPortNumber:(id)arg9 incomingMailServerUseSSL:(id)arg10 outgoingMailServerAuthentication:(id)arg11 outgoingCredentials:(id)arg12 outgoingMailServerHostName:(id)arg13 outgoingMailServerPortNumber:(id)arg14 outgoingMailServerUseSSL:(id)arg15 preventMove:(id)arg16 preventAppSheet:(id)arg17 disableMailRecentsSyncing:(id)arg18 allowMailDrop:(id)arg19 incomingMailServerIMAPPathPrefix:(id)arg20;
+ (id)allowedPayloadKeys;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *payloadIncomingMailServerIMAPPathPrefix; // @synthesize payloadIncomingMailServerIMAPPathPrefix=_payloadIncomingMailServerIMAPPathPrefix;
@property(copy, nonatomic) NSNumber *payloadAllowMailDrop; // @synthesize payloadAllowMailDrop=_payloadAllowMailDrop;
@property(copy, nonatomic) NSNumber *payloadDisableMailRecentsSyncing; // @synthesize payloadDisableMailRecentsSyncing=_payloadDisableMailRecentsSyncing;
@property(copy, nonatomic) NSNumber *payloadPreventAppSheet; // @synthesize payloadPreventAppSheet=_payloadPreventAppSheet;
@property(copy, nonatomic) NSNumber *payloadPreventMove; // @synthesize payloadPreventMove=_payloadPreventMove;
@property(copy, nonatomic) NSNumber *payloadOutgoingMailServerUseSSL; // @synthesize payloadOutgoingMailServerUseSSL=_payloadOutgoingMailServerUseSSL;
@property(copy, nonatomic) NSNumber *payloadOutgoingMailServerPortNumber; // @synthesize payloadOutgoingMailServerPortNumber=_payloadOutgoingMailServerPortNumber;
@property(copy, nonatomic) NSString *payloadOutgoingMailServerHostName; // @synthesize payloadOutgoingMailServerHostName=_payloadOutgoingMailServerHostName;
@property(copy, nonatomic) NSString *payloadOutgoingCredentials; // @synthesize payloadOutgoingCredentials=_payloadOutgoingCredentials;
@property(copy, nonatomic) NSString *payloadOutgoingMailServerAuthentication; // @synthesize payloadOutgoingMailServerAuthentication=_payloadOutgoingMailServerAuthentication;
@property(copy, nonatomic) NSNumber *payloadIncomingMailServerUseSSL; // @synthesize payloadIncomingMailServerUseSSL=_payloadIncomingMailServerUseSSL;
@property(copy, nonatomic) NSNumber *payloadIncomingMailServerPortNumber; // @synthesize payloadIncomingMailServerPortNumber=_payloadIncomingMailServerPortNumber;
@property(copy, nonatomic) NSString *payloadIncomingMailServerHostName; // @synthesize payloadIncomingMailServerHostName=_payloadIncomingMailServerHostName;
@property(copy, nonatomic) NSString *payloadIncomingCredentials; // @synthesize payloadIncomingCredentials=_payloadIncomingCredentials;
@property(copy, nonatomic) NSString *payloadIncomingMailServerAuthentication; // @synthesize payloadIncomingMailServerAuthentication=_payloadIncomingMailServerAuthentication;
@property(copy, nonatomic) NSString *payloadEmailAddress; // @synthesize payloadEmailAddress=_payloadEmailAddress;
@property(copy, nonatomic) NSString *payloadEmailAccountType; // @synthesize payloadEmailAccountType=_payloadEmailAccountType;
@property(copy, nonatomic) NSString *payloadEmailAccountName; // @synthesize payloadEmailAccountName=_payloadEmailAccountName;
@property(copy, nonatomic) NSString *payloadEmailAccountDescription; // @synthesize payloadEmailAccountDescription=_payloadEmailAccountDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithType:(short)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)assetReferences;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
