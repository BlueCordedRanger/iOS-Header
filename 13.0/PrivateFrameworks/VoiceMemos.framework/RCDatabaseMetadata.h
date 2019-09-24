//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSPersistentStore, NSPersistentStoreCoordinator;

__attribute__((visibility("hidden")))
@interface RCDatabaseMetadata : NSObject
{
    NSPersistentStore *_store;
    NSPersistentStoreCoordinator *_coordinator;
    NSMutableDictionary *_metadata;
    _Bool _dirty;
}

@property(readonly) _Bool dirty; // @synthesize dirty=_dirty;
- (void).cxx_destruct;
- (void)save;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithPersistentStore:(id)arg1;

@end
