//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPCPlaybackDelegationProperties.h>

@class MPCPrivateListeningStateSource, NSString, NSTimeZone;

@interface MPCMutablePlaybackDelegationProperties : MPCPlaybackDelegationProperties
{
}

@property(copy, nonatomic) NSTimeZone *timeZone; // @dynamic timeZone;
@property(nonatomic) long long systemReleaseType; // @dynamic systemReleaseType;
@property(copy, nonatomic) NSString *requestUserAgent; // @dynamic requestUserAgent;
@property(copy, nonatomic) MPCPrivateListeningStateSource *privateListeningStateSource; // @dynamic privateListeningStateSource;
@property(copy, nonatomic) NSString *deviceName; // @dynamic deviceName;
@property(copy, nonatomic) NSString *deviceGUID; // @dynamic deviceGUID;
@property(nonatomic) unsigned long long storeAccountID; // @dynamic storeAccountID;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
