//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface NWAWDLBEndpointsFetchReport : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _connectionCellularFallbackCount;
    int _endpointsFetchTaskBadReplyCount;
    int _endpointsFetchTaskCount;
    int _endpointsFetchTaskFailureCount;
    int _endpointsFetchTaskSuccessCount;
    struct {
        unsigned int timestamp:1;
        unsigned int connectionCellularFallbackCount:1;
        unsigned int endpointsFetchTaskBadReplyCount:1;
        unsigned int endpointsFetchTaskCount:1;
        unsigned int endpointsFetchTaskFailureCount:1;
        unsigned int endpointsFetchTaskSuccessCount:1;
    } _has;
}

@property(nonatomic) int connectionCellularFallbackCount; // @synthesize connectionCellularFallbackCount=_connectionCellularFallbackCount;
@property(nonatomic) int endpointsFetchTaskBadReplyCount; // @synthesize endpointsFetchTaskBadReplyCount=_endpointsFetchTaskBadReplyCount;
@property(nonatomic) int endpointsFetchTaskFailureCount; // @synthesize endpointsFetchTaskFailureCount=_endpointsFetchTaskFailureCount;
@property(nonatomic) int endpointsFetchTaskSuccessCount; // @synthesize endpointsFetchTaskSuccessCount=_endpointsFetchTaskSuccessCount;
@property(nonatomic) int endpointsFetchTaskCount; // @synthesize endpointsFetchTaskCount=_endpointsFetchTaskCount;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasConnectionCellularFallbackCount;
@property(nonatomic) BOOL hasEndpointsFetchTaskBadReplyCount;
@property(nonatomic) BOOL hasEndpointsFetchTaskFailureCount;
@property(nonatomic) BOOL hasEndpointsFetchTaskSuccessCount;
@property(nonatomic) BOOL hasEndpointsFetchTaskCount;
@property(nonatomic) BOOL hasTimestamp;

@end
