//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUUID.h>

#import <HomeKitBackingStore/HMBModelQueryableParameterCoder-Protocol.h>

@class NSString;

@interface NSUUID (HMB) <HMBModelQueryableParameterCoder>
+ (id)hmbDecodeQueryableParameterFromData:(id)arg1;
+ (id)hmbUUIDFromData:(id)arg1;
+ (id)hmbUUIDWithSQLite3Column:(struct sqlite3_stmt *)arg1 column:(int)arg2;
- (id)hmbEncodeQueryableParameter;
- (id)data;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
