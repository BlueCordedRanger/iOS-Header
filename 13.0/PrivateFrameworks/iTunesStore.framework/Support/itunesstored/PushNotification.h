//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, PushNotificationClient;

@interface PushNotification : NSManagedObject
{
}

+ (id)entityFromContext:(id)arg1;

// Remaining properties
@property(retain, nonatomic) PushNotificationClient *client; // @dynamic client;
@property(copy, nonatomic) NSData *userInfo; // @dynamic userInfo;

@end
