//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/NSObject-Protocol.h>

@class NSString;
@protocol FBSApplicationDataStoreRepositoryClient;

@protocol FBSApplicationDataStoreRepositoryClientObserver <NSObject>

@optional
- (void)applicationDataStoreRepositoryClient:(id <FBSApplicationDataStoreRepositoryClient>)arg1 storeInvalidatedForApplication:(NSString *)arg2;
- (void)applicationDataStoreRepositoryClient:(id <FBSApplicationDataStoreRepositoryClient>)arg1 application:(NSString *)arg2 changedObject:(id)arg3 forKey:(NSString *)arg4;
@end
