//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureAudioChannelInternal;

@interface AVCaptureAudioChannel : NSObject
{
    AVCaptureAudioChannelInternal *_internal;
    _Bool _enabled;
    float _volume;
}

@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) float peakHoldLevel;
@property(readonly, nonatomic) float averagePowerLevel;
- (void)invalidate;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

@end
