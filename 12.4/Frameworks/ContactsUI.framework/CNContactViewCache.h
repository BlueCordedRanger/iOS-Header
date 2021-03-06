//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNCache, CNContactStore, CNUIGeminiDataSource;

__attribute__((visibility("hidden")))
@interface CNContactViewCache : NSObject
{
    CNCache *_cachedContainers;
    CNCache *_cachedPolicies;
    CNCache *_cachedAccounts;
    CNContactStore *_contactStore;
    CNUIGeminiDataSource *_geminiDataSource;
}

@property(retain, nonatomic) CNUIGeminiDataSource *geminiDataSource; // @synthesize geminiDataSource=_geminiDataSource;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNCache *cachedAccounts; // @synthesize cachedAccounts=_cachedAccounts;
@property(retain, nonatomic) CNCache *cachedPolicies; // @synthesize cachedPolicies=_cachedPolicies;
@property(retain, nonatomic) CNCache *cachedContainers; // @synthesize cachedContainers=_cachedContainers;
- (void).cxx_destruct;
- (id)_accountForContact:(id)arg1;
- (id)_policyForContact:(id)arg1;
- (id)_containerForContact:(id)arg1;
- (void)resetCache;
- (id)accountForContact:(id)arg1;
- (id)policyForDefaultContainer;
- (id)policyForContact:(id)arg1;
- (id)nts_lazyContactStore;

@end

