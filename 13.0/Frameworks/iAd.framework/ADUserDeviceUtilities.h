//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;
@protocol NSObject;

@interface ADUserDeviceUtilities : NSObject
{
    NSNumber *_lastiTunesAccountID;
    id <NSObject> _notifyToken;
}

+ (_Bool)educationModeEnabled;
+ (_Bool)isManagedAppleId;
+ (_Bool)isiTunesManagedAppleId;
+ (_Bool)isiCloudManagedAppleId;
+ (_Bool)isiTunesAccountAvailable;
+ (_Bool)isiCloudAccountAvailable;
+ (id)iTunesAccountIdentifier;
+ (id)iTunesStoreAccount;
+ (id)iCloudAccount;
+ (id)sharedInstance;
@property(retain, nonatomic) id <NSObject> notifyToken; // @synthesize notifyToken=_notifyToken;
@property(retain) NSNumber *lastiTunesAccountID; // @synthesize lastiTunesAccountID=_lastiTunesAccountID;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool deviceHasHomeButton;
- (void)unregisterForiTunesAccountChanges;

@end
