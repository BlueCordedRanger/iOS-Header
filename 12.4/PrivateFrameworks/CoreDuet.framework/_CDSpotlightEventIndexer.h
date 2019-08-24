//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchableIndex, _CDEventIndexerContext, _CDSpotlightEventIndexerDataSource;

@interface _CDSpotlightEventIndexer : NSObject
{
    _CDEventIndexerContext *_context;
    CSSearchableIndex *_index;
    _CDSpotlightEventIndexerDataSource *_dataSource;
}

+ (id)keyPathsForValuesAffectingIndexing;
@property(readonly, nonatomic) _CDSpotlightEventIndexerDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) CSSearchableIndex *index; // @synthesize index=_index;
@property(retain, nonatomic) _CDEventIndexerContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)resetIndex;
- (void)indexAdditionsAsBatch;
- (void)indexDeletionsAsBatch;
- (void)_beginIndexingFromLatestSpotlightClientState;
- (void)finishIndexing;
- (void)beginIndexingWithBatchSize:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isIndexing) _Bool indexing;
- (id)initWithDataSource:(id)arg1;

@end
