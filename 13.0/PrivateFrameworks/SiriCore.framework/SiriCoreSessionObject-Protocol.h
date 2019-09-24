//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriCore/NSObject-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_data;

@protocol SiriCoreSessionObject <NSObject>
@property(copy, nonatomic) NSString *refId;
@property(copy, nonatomic) NSString *aceId;
- (_Bool)siriCore_supportedByLocalSession;
- (void)siriCore_setSessionRequestId:(NSString *)arg1;
- (NSString *)siriCore_requestId;
- (NSObject<OS_dispatch_data> *)siriCore_serializedAceDataError:(id *)arg1;
- (void)siriCore_logDiagnostics;
- (_Bool)siriCore_isProvisional;
- (_Bool)siriCore_isRestartable;
- (_Bool)siriCore_isRetryable;
- (_Bool)siriCore_bufferingAllowedDuringActiveSession;
@end
