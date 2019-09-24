//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKObject.h>

@class EKSource, NSSet;

@interface EKNotificationCollection : EKObject
{
}

+ (Class)frozenClass;
+ (_Bool)isWeakRelationship;
+ (id)knownRelationshipMultiValueKeys;
- (void)_setFlags:(unsigned int)arg1;
- (unsigned int)_flags;
- (_Bool)_hasNotificationsCollectionFlag;
- (void)_setNotificationsCollectionFlag;
- (void)_setExternalIDTag:(id)arg1;
- (void)_setExternalID:(id)arg1;
- (void)_setSource:(id)arg1;
- (_Bool)commit:(id *)arg1;
- (_Bool)validate:(id *)arg1;
- (void)removeNotification:(id)arg1;
- (void)addNotification:(id)arg1;
@property(copy, nonatomic) NSSet *notifications;
@property(readonly, nonatomic) EKSource *source;
- (id)initWithOptions:(id)arg1;

@end
