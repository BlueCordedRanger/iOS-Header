//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSString, PBDataReader, PBUnknownFields;

@interface GEOMapItemStorageUserValues : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    NSString *_name;
    NSString *_phoneNumber;
    NSData *_timeZoneData;
    NSString *_timeZoneName;
    NSString *_url;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_name:1;
        unsigned int read_phoneNumber:1;
        unsigned int read_timeZoneData:1;
        unsigned int read_timeZoneName:1;
        unsigned int read_url:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_name:1;
        unsigned int wrote_phoneNumber:1;
        unsigned int wrote_timeZoneData:1;
        unsigned int wrote_timeZoneName:1;
        unsigned int wrote_url:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
@property(retain, nonatomic) NSData *timeZoneData;
@property(readonly, nonatomic) _Bool hasTimeZoneData;
- (void)_readTimeZoneData;
@property(retain, nonatomic) NSString *timeZoneName;
@property(readonly, nonatomic) _Bool hasTimeZoneName;
- (void)_readTimeZoneName;
@property(retain, nonatomic) NSString *url;
@property(readonly, nonatomic) _Bool hasUrl;
- (void)_readUrl;
@property(retain, nonatomic) NSString *phoneNumber;
@property(readonly, nonatomic) _Bool hasPhoneNumber;
- (void)_readPhoneNumber;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hasName;
- (void)_readName;

@end
