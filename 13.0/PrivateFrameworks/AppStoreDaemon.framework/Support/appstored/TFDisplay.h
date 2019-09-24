//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface TFDisplay : PBCodable <NSCopying>
{
    unsigned int _heightPixels;
    unsigned int _widthPixels;
    struct {
        unsigned int heightPixels:1;
        unsigned int widthPixels:1;
    } _has;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasHeightPixels;
@property(nonatomic) unsigned int heightPixels; // @synthesize heightPixels=_heightPixels;
@property(nonatomic) _Bool hasWidthPixels;
@property(nonatomic) unsigned int widthPixels; // @synthesize widthPixels=_widthPixels;

@end
