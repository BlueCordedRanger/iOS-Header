//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol CKKnowledgeStoreWriteBatch
- (void)writeWithCompletionHandler:(void (^)(NSError *))arg1;
- (_Bool)writeAndReturnError:(id *)arg1;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
@end
