//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@class NSString;

@interface MPCAssistantRadioPlaybackQueue : MPCAssistantPlaybackQueue
{
    NSString *_stationStringID;
}

+ (id)radioQueueWithContextID:(id)arg1 stationStringID:(id)arg2;
@property(readonly, nonatomic) NSString *stationStringID; // @synthesize stationStringID=_stationStringID;
- (void).cxx_destruct;
- (struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;
- (_Bool)supportedOnCurrentPlatform;
- (id)description;
- (id)initWithContextID:(id)arg1 stationStringID:(id)arg2;

@end
