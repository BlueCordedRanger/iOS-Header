//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentSlotResolutionResult-Protocol.h>

@class NSString, _INPBPayloadConfirmation, _INPBPayloadNeedsDisambiguation, _INPBPayloadNeedsExecuteIntent, _INPBPayloadNeedsValue, _INPBPayloadSuccess, _INPBPayloadUnsupported;

@interface _INPBIntentSlotResolutionResult : PBCodable <_INPBIntentSlotResolutionResult, NSSecureCoding, NSCopying>
{
    CDStruct_f953fb60 _has;
    _Bool __encodeLegacyGloryData;
    int _type;
    _INPBPayloadConfirmation *_payloadConfirmation;
    _INPBPayloadNeedsDisambiguation *_payloadNeedsDisambiguation;
    _INPBPayloadNeedsExecuteIntent *_payloadNeedsExecuteIntent;
    _INPBPayloadNeedsValue *_payloadNeedsValue;
    _INPBPayloadSuccess *_payloadSuccess;
    _INPBPayloadUnsupported *_payloadUnsupported;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) _INPBPayloadUnsupported *payloadUnsupported; // @synthesize payloadUnsupported=_payloadUnsupported;
@property(retain, nonatomic) _INPBPayloadSuccess *payloadSuccess; // @synthesize payloadSuccess=_payloadSuccess;
@property(retain, nonatomic) _INPBPayloadNeedsValue *payloadNeedsValue; // @synthesize payloadNeedsValue=_payloadNeedsValue;
@property(retain, nonatomic) _INPBPayloadNeedsExecuteIntent *payloadNeedsExecuteIntent; // @synthesize payloadNeedsExecuteIntent=_payloadNeedsExecuteIntent;
@property(retain, nonatomic) _INPBPayloadNeedsDisambiguation *payloadNeedsDisambiguation; // @synthesize payloadNeedsDisambiguation=_payloadNeedsDisambiguation;
@property(retain, nonatomic) _INPBPayloadConfirmation *payloadConfirmation; // @synthesize payloadConfirmation=_payloadConfirmation;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasPayloadUnsupported;
@property(readonly, nonatomic) _Bool hasPayloadSuccess;
@property(readonly, nonatomic) _Bool hasPayloadNeedsValue;
@property(readonly, nonatomic) _Bool hasPayloadNeedsExecuteIntent;
@property(readonly, nonatomic) _Bool hasPayloadNeedsDisambiguation;
@property(readonly, nonatomic) _Bool hasPayloadConfirmation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
