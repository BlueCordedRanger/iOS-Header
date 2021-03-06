//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface IPodLibrary : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    ISOperationQueue *_operationQueue;
    NSMutableArray *_scheduledItems;
    NSObject<OS_dispatch_source> *_scheduledItemTimer;
}

+ (void)observeXPCServer:(id)arg1;
+ (void)deleteIPodPurchaseWithMessage:(id)arg1 connection:(id)arg2;
+ (id)deviceIPodLibrary;
- (void)_setDownloadPropertiesForTrack:(id)arg1 usingLibraryItem:(id)arg2;
- (_Bool)_removeDownloadWithIdentifier:(long long)arg1 canceled:(_Bool)arg2 inLibrary:(id)arg3;
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;
- (void)_commitScheduledLibraryItems;
- (_Bool)_addLibraryItems:(id)arg1 toMusicLibrary:(id)arg2 itemPids:(long long *)arg3 error:(id *)arg4;
- (void)setAppleIdentifier:(id)arg1 forAccountIdentifier:(unsigned long long)arg2;
- (void)scheduleLibraryItems:(id)arg1;
- (void)scheduleLibraryItem:(id)arg1;
- (void)removeDownloadWithIdentifier:(long long)arg1 canceled:(_Bool)arg2;
- (void)removeDownloadsWithIdentifiers:(id)arg1 canceled:(_Bool)arg2;
- (void)deleteAllOTATracks;
- (void)commitScheduledLibraryItems;
- (_Bool)addLibraryItems:(id)arg1 error:(id *)arg2;
- (long long)addLibraryItem:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

@end

