//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPContainedObject.h>

__attribute__((visibility("hidden")))
@interface TSTTableTileRowInfo : TSPContainedObject
{
    struct __CFData *_storageBuffer;
    unsigned short _storageOffsets[255];
    unsigned short _bufferSize;
    struct __CFData *_storageBufferPreBNC;
    unsigned short _storageOffsetsPreBNC[255];
    unsigned short _bufferSizePreBNC;
    unsigned short _maxTileColumnIndex;
    _Bool _maxTileColumnIndexValid;
    unsigned char _storageVersion;
    unsigned short _cellCount;
    unsigned int _tileRowIndex;
}

@property(readonly, nonatomic) unsigned short cellCount; // @synthesize cellCount=_cellCount;
@property(nonatomic) unsigned int tileRowIndex; // @synthesize tileRowIndex=_tileRowIndex;
@property(readonly, nonatomic) unsigned short maxTileColumnIndex;
- (_Bool)searchCellStorageRefAtColumnIndex:(unsigned short)arg1 searchMask:(unsigned long long)arg2;
- (void)enumerateStoragesInColumnRange:(struct _NSRange)arg1 getPreBNC:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)enumerateStoragesInColumnRange:(struct _NSRange)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)moveColumnsFromIndex:(unsigned short)arg1 toIndex:(unsigned short)arg2 count:(unsigned int)arg3;
- (void)removeColumnsAtIndex:(unsigned short)arg1 count:(unsigned int)arg2;
- (void)insertColumnsAtIndex:(unsigned short)arg1 count:(unsigned int)arg2;
- (void)setCell:(id)arg1 atIndex:(unsigned short)arg2 formatKeys:(CDStruct_c8ca99d5 *)arg3;
- (unsigned short)cellIndexAtOrBeforeIndex:(unsigned short)arg1;
- (unsigned short)cellIndexAtOrAfterIndex:(unsigned short)arg1;
- (struct TSTCellStorage *)preBNCStorageRefAtIndex:(unsigned short)arg1;
- (struct TSTCellStorage *)cellStorageRefAtIndex:(unsigned short)arg1;
- (void)_removeCellAtIndex:(unsigned short)arg1;
- (void)_insertCell:(id)arg1 atIndex:(unsigned short)arg2 formatKeys:(CDStruct_c8ca99d5 *)arg3;
- (void)_replaceCellAtIndex:(unsigned short)arg1 withCell:(id)arg2 formatKeys:(CDStruct_c8ca99d5 *)arg3;
- (void)_recalculateMaxTileColumnIndex;
- (void)_invalidateMaxTileColumnIndex;
- (id)description;
- (_Bool)validateWithResult:(id *)arg1;
- (void)validate;
@property(readonly, nonatomic) _Bool bncStorageBufferExists;
- (void)saveToArchive:(struct TileRowInfo *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct TileRowInfo *)arg1 owner:(id)arg2;
- (void)dealloc;
- (id)initWithOwner:(id)arg1 tileRowIndex:(unsigned int)arg2;

@end
