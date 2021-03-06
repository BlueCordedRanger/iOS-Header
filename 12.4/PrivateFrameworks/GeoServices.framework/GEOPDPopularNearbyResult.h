//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPopularNearbyResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOPDLitePlaceResult *_litePlaceResults;
    unsigned long long _litePlaceResultsCount;
    unsigned long long _litePlaceResultsSpace;
    NSString *_sectionHeader;
}

@property(retain, nonatomic) NSString *sectionHeader; // @synthesize sectionHeader=_sectionHeader;
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
- (void)setLitePlaceResults:(struct GEOPDLitePlaceResult *)arg1 count:(unsigned long long)arg2;
- (struct GEOPDLitePlaceResult)litePlaceResultAtIndex:(unsigned long long)arg1;
- (void)addLitePlaceResult:(struct GEOPDLitePlaceResult)arg1;
- (void)clearLitePlaceResults;
@property(readonly, nonatomic) struct GEOPDLitePlaceResult *litePlaceResults;
@property(readonly, nonatomic) unsigned long long litePlaceResultsCount;
@property(readonly, nonatomic) _Bool hasSectionHeader;
- (void)dealloc;

@end

