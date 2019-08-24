//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CTXPCServiceSubscriptionContext;

@protocol CTXPCServiceDataInterface
- (void)getPreferredDataSubscriptionContext:(void (^)(CTXPCServiceSubscriptionContext *, NSError *))arg1;
- (void)getCurrentDataSubscriptionContext:(void (^)(CTXPCServiceSubscriptionContext *, NSError *))arg1;
- (void)isTetheringEditingSupported:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)getNATTKeepAliveOverCell:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(unsigned int, NSError *))arg2;
- (void)getDataStatus:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(CTDataStatus *, NSError *))arg2;
- (void)getConnectionState:(CTXPCServiceSubscriptionContext *)arg1 connectionType:(int)arg2 completion:(void (^)(CTDataConnectionStatus *, NSError *))arg3;
- (void)getActiveConnections:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)getConnectionAvailability:(CTXPCServiceSubscriptionContext *)arg1 connectionType:(int)arg2 completion:(void (^)(CTDataConnectionAvailabilityStatus *, NSError *))arg3;
- (void)getPacketContextCount:(void (^)(unsigned int))arg1;
- (void)getSupportDynamicDataSimSwitchOnBBCall:(void (^)(_Bool, NSError *))arg1;
- (void)setSupportDynamicDataSimSwitchOnBBCall:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)getInternationalDataAccessStatus:(void (^)(_Bool, NSError *))arg1;
- (void)setInternationalDataAccessStatus:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)resetAPNSettings:(void (^)(NSError *))arg1;
- (void)setPacketContextActiveByServiceType:(CTXPCServiceSubscriptionContext *)arg1 connectionType:(int)arg2 active:(_Bool)arg3 completion:(void (^)(NSError *))arg4;
@end
