//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface OKAudioDucker : NSObject
{
    float _volume;
    float _currentVolume;
    float _fadeToVolume;
    float _fadeFromVolume;
    float _duckLevel;
    double _startFadeTime;
    long long _duckState;
    double _fadeDuration;
    double _duckDuration;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    CDUnknownBlockType _setVolumeBlock;
}

@property(nonatomic) float volume; // @synthesize volume=_volume;
- (void)_handleTimerEvent;
- (void)cancel;
- (void)endFading:(_Bool)arg1;
- (void)endFading;
- (void)beginFadingWithDuration:(double)arg1;
- (void)endDucking;
- (void)beginDuckingToLevel:(double)arg1 fadeDuration:(double)arg2;
- (void)setSetVolumeBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
