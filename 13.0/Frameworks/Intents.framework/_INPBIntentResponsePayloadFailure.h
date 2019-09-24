//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentResponsePayloadFailure-Protocol.h>

@class NSString;

@interface _INPBIntentResponsePayloadFailure : PBCodable <_INPBIntentResponsePayloadFailure, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int appLaunchRequested:1;
        unsigned int errorCode:1;
    } _has;
    _Bool _appLaunchRequested;
    _Bool __encodeLegacyGloryData;
    int _errorCode;
    NSString *_enumTypeName;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *enumTypeName; // @synthesize enumTypeName=_enumTypeName;
@property(nonatomic) _Bool appLaunchRequested; // @synthesize appLaunchRequested=_appLaunchRequested;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasEnumTypeName;
@property(nonatomic) _Bool hasAppLaunchRequested;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
