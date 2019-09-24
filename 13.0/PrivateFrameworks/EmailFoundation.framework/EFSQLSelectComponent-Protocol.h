//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailFoundation/NSObject-Protocol.h>

@class NSString;
@protocol EFSQLExpressable, EFSQLSelectComponent;

@protocol EFSQLSelectComponent <NSObject>
- (void)orderByColumn:(NSString *)arg1 ascending:(_Bool)arg2;
- (void)groupByColumn:(NSString *)arg1;
- (void)addResultColumn:(NSString *)arg1;
- (id <EFSQLSelectComponent>)leftOuterJoin:(NSString *)arg1 alias:(NSString *)arg2 sourceColumn:(NSString *)arg3 targetColumn:(NSString *)arg4;
- (id <EFSQLSelectComponent>)join:(NSString *)arg1 alias:(NSString *)arg2 sourceColumn:(NSString *)arg3 targetColumn:(NSString *)arg4;
- (id <EFSQLSelectComponent>)leftOuterJoin:(NSString *)arg1 sourceColumn:(NSString *)arg2 targetColumn:(NSString *)arg3;
- (id <EFSQLSelectComponent>)join:(NSString *)arg1 sourceColumn:(NSString *)arg2 targetColumn:(NSString *)arg3;
- (id <EFSQLSelectComponent>)leftOuterJoin:(NSString *)arg1 alias:(NSString *)arg2 on:(id <EFSQLExpressable>)arg3;
- (id <EFSQLSelectComponent>)join:(NSString *)arg1 alias:(NSString *)arg2 on:(id <EFSQLExpressable>)arg3;
- (id <EFSQLSelectComponent>)leftOuterJoin:(NSString *)arg1 on:(id <EFSQLExpressable>)arg2;
- (id <EFSQLSelectComponent>)join:(NSString *)arg1 on:(id <EFSQLExpressable>)arg2;
@end
