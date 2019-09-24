//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class CKRecord, CKRecordID, HMDCloudZone, NSData, NSString, NSUUID;

@interface HMDCloudRecord : HMFObject
{
    _Bool _decryptionFailed;
    _Bool _encryptionFailed;
    _Bool _controllerIdentifierChanged;
    _Bool _recordCreated;
    NSUUID *_objectID;
    NSString *_recordName;
    HMDCloudZone *_cloudZone;
    CKRecordID *_recordID;
    NSData *_cachedData;
    CKRecord *_record;
}

+ (id)shortDescription;
@property(readonly, nonatomic, getter=isRecordCreated) _Bool recordCreated; // @synthesize recordCreated=_recordCreated;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(retain, nonatomic) NSData *cachedData; // @synthesize cachedData=_cachedData;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(nonatomic) __weak HMDCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(readonly, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
@property(nonatomic) _Bool controllerIdentifierChanged; // @synthesize controllerIdentifierChanged=_controllerIdentifierChanged;
@property(nonatomic) _Bool encryptionFailed; // @synthesize encryptionFailed=_encryptionFailed;
@property(nonatomic) _Bool decryptionFailed; // @synthesize decryptionFailed=_decryptionFailed;
@property(retain, nonatomic) NSUUID *objectID; // @synthesize objectID=_objectID;
- (void).cxx_destruct;
@property(readonly) unsigned long long objectEncoding;
- (void)clearData;
@property(retain, nonatomic) NSData *data;
@property(readonly, nonatomic, getter=isRecordCached) _Bool recordCached;
@property(readonly, nonatomic) NSString *recordType;
- (_Bool)encodeObjectChange:(id)arg1;
- (id)extractObjectChange;
- (id)description;
- (id)shortDescription;
- (id)initWithObjectID:(id)arg1 recordName:(id)arg2 cloudZone:(id)arg3;
- (id)init;

@end
