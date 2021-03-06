//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <coreroutine/RTPersistenceImportable-Protocol.h>

@class NSData, NSDate, NSString, NSUUID, RTDeviceMO;

@interface RTCloudManagedObject : NSManagedObject <RTPersistenceImportable>
{
}

+ (id)entityNamesEligibleForDeletionByOtherDevices;
+ (id)notTombstonedPredicate;
- (void)willChangeValueForKey:(id)arg1;
- (void)awakeFromInsert;
@property(copy, nonatomic) NSUUID *identifier;

// Remaining properties
@property(copy, nonatomic) NSString *ckRecordID; // @dynamic ckRecordID;
@property(copy, nonatomic) NSData *ckRecordSystemFields; // @dynamic ckRecordSystemFields;
@property(copy, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) RTDeviceMO *device; // @dynamic device;
@property(copy, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(nonatomic) unsigned long long flags; // @dynamic flags;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

