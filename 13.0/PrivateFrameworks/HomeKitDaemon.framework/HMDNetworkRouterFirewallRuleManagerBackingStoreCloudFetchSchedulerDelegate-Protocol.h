//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler;

@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate <NSObject>
- (void)cloudFetchSchedulerFired:(id <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler>)arg1 completion:(void (^)(NSError *))arg2;

@optional
- (void)cloudFetchSchedulerStopped:(id <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler>)arg1;
- (void)cloudFetchSchedulerStarted:(id <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler>)arg1;
@end
