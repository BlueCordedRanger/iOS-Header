//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUI/NSObject-Protocol.h>

@class IMInternalAVAudioPlayer;

@protocol IMInternalAVAudioPlayerDelegate <NSObject>

@optional
- (void)internalAVAudioPlayerDidPrepareAudioForPlaying:(IMInternalAVAudioPlayer *)arg1 successfully:(_Bool)arg2;
- (void)internalAVAudioPlayerDidFinishPlaying:(IMInternalAVAudioPlayer *)arg1 successfully:(_Bool)arg2;
@end
