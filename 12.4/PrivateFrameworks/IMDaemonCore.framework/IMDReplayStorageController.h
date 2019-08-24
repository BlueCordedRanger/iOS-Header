//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSKVStore, NSString;

@interface IMDReplayStorageController : NSObject
{
    NSString *_filePath;
    IDSKVStore *_store;
}

@property(retain, nonatomic) IDSKVStore *store; // @synthesize store=_store;
@property(readonly, retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void)dealloc;
- (void)deleteReplayDB;
- (id)copyNextBatchWithSize:(unsigned long long)arg1 iterationContext:(id *)arg2;
- (_Bool)storeDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithFilePath:(id)arg1;

@end
