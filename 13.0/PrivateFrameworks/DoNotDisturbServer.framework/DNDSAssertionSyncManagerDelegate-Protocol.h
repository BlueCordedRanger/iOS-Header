//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@protocol DNDSAssertionSyncManager;

@protocol DNDSAssertionSyncManagerDelegate <NSObject>
- (void)syncManager:(id <DNDSAssertionSyncManager>)arg1 performModeAssertionUpdatesWithHandler:(_Bool (^)(id <DNDSModeAssertionUpdateContext>))arg2;
@end
