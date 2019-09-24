//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/NSCopying-Protocol.h>

@class NSData, PBUnknownFields;

@interface MSPCollectionItemStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSData *_contents;
    NSData *_contentsTimestamp;
    NSData *_position;
    NSData *_positionTimestamp;
    NSData *_storageIdentifier;
}

@property(retain, nonatomic) NSData *positionTimestamp; // @synthesize positionTimestamp=_positionTimestamp;
@property(retain, nonatomic) NSData *position; // @synthesize position=_position;
@property(retain, nonatomic) NSData *contentsTimestamp; // @synthesize contentsTimestamp=_contentsTimestamp;
@property(retain, nonatomic) NSData *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) NSData *storageIdentifier; // @synthesize storageIdentifier=_storageIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPositionTimestamp;
@property(readonly, nonatomic) _Bool hasPosition;
@property(readonly, nonatomic) _Bool hasContentsTimestamp;
@property(readonly, nonatomic) _Bool hasContents;
@property(readonly, nonatomic) _Bool hasStorageIdentifier;

@end
