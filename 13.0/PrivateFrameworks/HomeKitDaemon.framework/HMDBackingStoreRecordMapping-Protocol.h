//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol HMDBackingStoreRecordMapping <NSObject>
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) NSUUID *parentUuid;
@property(readonly, nonatomic) NSUUID *uuid;
@property(readonly, nonatomic) NSString *recordName;
@end
