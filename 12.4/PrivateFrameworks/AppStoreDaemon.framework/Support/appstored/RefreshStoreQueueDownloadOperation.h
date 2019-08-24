//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSVComplexOperation.h>

@class NSMutableOrderedSet, NSNumber, NSString;

@interface RefreshStoreQueueDownloadOperation : SSVComplexOperation
{
    NSNumber *_accountID;
    NSString *_transactionID;
    NSMutableOrderedSet *_downloads;
}

@property(readonly, nonatomic) NSMutableOrderedSet *downloads; // @synthesize downloads=_downloads;
- (void).cxx_destruct;
- (void)main;
- (id)initWithDownloadTransactionIdentifier:(id)arg1 accountID:(id)arg2;

@end
