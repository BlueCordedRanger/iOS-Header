//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class RLMRealm;

@protocol RLMFastEnumerable
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) struct RLMClassInfo *objectInfo;
@property(readonly, nonatomic) RLMRealm *realm;
- (struct TableView)tableView;
- (unsigned long long)indexInSource:(unsigned long long)arg1;
@end
