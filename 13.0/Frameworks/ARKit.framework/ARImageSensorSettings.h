//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>

@class ARVideoFormat, NSDictionary, NSString;

@interface ARImageSensorSettings : NSObject <NSCopying>
{
    _Bool _autoFocusEnabled;
    _Bool _mirrorVideoOutput;
    _Bool _visionDataOutputEnabled;
    _Bool _geometricDistortionCorrectionEnabled;
    _Bool _enabled;
    float _maxGainOverride;
    ARVideoFormat *_videoFormat;
    NSString *_metaData;
    NSDictionary *_visionDataOutputParameters;
}

@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSDictionary *visionDataOutputParameters; // @synthesize visionDataOutputParameters=_visionDataOutputParameters;
@property(copy, nonatomic) NSString *metaData; // @synthesize metaData=_metaData;
@property(nonatomic) _Bool geometricDistortionCorrectionEnabled; // @synthesize geometricDistortionCorrectionEnabled=_geometricDistortionCorrectionEnabled;
@property(nonatomic) float maxGainOverride; // @synthesize maxGainOverride=_maxGainOverride;
@property(nonatomic) _Bool visionDataOutputEnabled; // @synthesize visionDataOutputEnabled=_visionDataOutputEnabled;
@property(nonatomic) _Bool mirrorVideoOutput; // @synthesize mirrorVideoOutput=_mirrorVideoOutput;
@property(nonatomic) _Bool autoFocusEnabled; // @synthesize autoFocusEnabled=_autoFocusEnabled;
@property(retain, nonatomic) ARVideoFormat *videoFormat; // @synthesize videoFormat=_videoFormat;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithVideoFormat:(id)arg1;

@end
