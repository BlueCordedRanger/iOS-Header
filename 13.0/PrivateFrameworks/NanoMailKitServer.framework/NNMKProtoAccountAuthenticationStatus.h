//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NNMKProtoAccountAuthenticationStatus : PBCodable <NSCopying>
{
    double _requestTime;
    NSMutableArray *_accountsStatus;
    CDStruct_b7a4e4f9 _has;
}

+ (Class)accountsStatusType;
@property(nonatomic) double requestTime; // @synthesize requestTime=_requestTime;
@property(retain, nonatomic) NSMutableArray *accountsStatus; // @synthesize accountsStatus=_accountsStatus;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasRequestTime;
- (id)accountsStatusAtIndex:(unsigned long long)arg1;
- (unsigned long long)accountsStatusCount;
- (void)addAccountsStatus:(id)arg1;
- (void)clearAccountsStatus;

@end
