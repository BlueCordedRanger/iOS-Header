//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "QLDiskCacheEnumerator.h"

@class QLCacheIndexDatabaseFileInfoEnumerator;

@interface QLDiskCacheFileInfoEnumerator : QLDiskCacheEnumerator
{
    _Bool _extraInfo;
    _Bool _ubiquitous;
    QLCacheIndexDatabaseFileInfoEnumerator *_indexEnumerator;
}

- (void).cxx_destruct;
- (id)nextFileInfo;
- (id)initWithDiskCache:(id)arg1 forUbiquitousFiles:(_Bool)arg2 extraInfo:(_Bool)arg3;

@end
