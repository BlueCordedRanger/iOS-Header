//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchZeroKeywordCategorySuggestionResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_categorys;
    NSMutableArray *_zeroKeywordEntrys;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_categorys:1;
        unsigned int read_zeroKeywordEntrys:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_categorys:1;
        unsigned int wrote_zeroKeywordEntrys:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)zeroKeywordEntryType;
+ (Class)categoryType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)zeroKeywordEntryAtIndex:(unsigned long long)arg1;
- (unsigned long long)zeroKeywordEntrysCount;
- (void)_addNoFlagsZeroKeywordEntry:(id)arg1;
- (void)addZeroKeywordEntry:(id)arg1;
- (void)clearZeroKeywordEntrys;
@property(retain, nonatomic) NSMutableArray *zeroKeywordEntrys;
- (void)_readZeroKeywordEntrys;
- (id)categoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)categorysCount;
- (void)_addNoFlagsCategory:(id)arg1;
- (void)addCategory:(id)arg1;
- (void)clearCategorys;
@property(retain, nonatomic) NSMutableArray *categorys;
- (void)_readCategorys;

@end
