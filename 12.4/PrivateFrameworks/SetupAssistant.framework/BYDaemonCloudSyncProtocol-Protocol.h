//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistant/NSObject-Protocol.h>

@protocol BYDaemonCloudSyncProtocol <NSObject>
- (void)startSync;
- (void)needsToSync:(void (^)(unsigned long long))arg1;
@end
