//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFAccount, NSArray, NSString, NSURL;

@interface CRDiagnosticsData : NSObject
{
    _Bool _mapsActive;
    NSString *_timestamp;
    NSURL *_deviceScreenshotURL;
    NSURL *_carScreenshotURL;
    NSURL *_remoteLogsURL;
    NSURL *_carplayLogsURL;
    NSURL *_sysdiagnoseURL;
    NSURL *_configurationURL;
    NSArray *_attachmentURLs;
    NSString *_transcription;
    NSString *_overlayBundleIdentifier;
    NSString *_activeBundleIdentifier;
    AFAccount *_siriInfo;
    NSString *_locationDescription;
}

@property(nonatomic, getter=isMapsActive) _Bool mapsActive; // @synthesize mapsActive=_mapsActive;
@property(retain, nonatomic) NSString *locationDescription; // @synthesize locationDescription=_locationDescription;
@property(retain, nonatomic) AFAccount *siriInfo; // @synthesize siriInfo=_siriInfo;
@property(retain, nonatomic) NSString *activeBundleIdentifier; // @synthesize activeBundleIdentifier=_activeBundleIdentifier;
@property(retain, nonatomic) NSString *overlayBundleIdentifier; // @synthesize overlayBundleIdentifier=_overlayBundleIdentifier;
@property(retain, nonatomic) NSString *transcription; // @synthesize transcription=_transcription;
@property(retain, nonatomic) NSArray *attachmentURLs; // @synthesize attachmentURLs=_attachmentURLs;
@property(retain, nonatomic) NSURL *configurationURL; // @synthesize configurationURL=_configurationURL;
@property(retain, nonatomic) NSURL *sysdiagnoseURL; // @synthesize sysdiagnoseURL=_sysdiagnoseURL;
@property(retain, nonatomic) NSURL *carplayLogsURL; // @synthesize carplayLogsURL=_carplayLogsURL;
@property(retain, nonatomic) NSURL *remoteLogsURL; // @synthesize remoteLogsURL=_remoteLogsURL;
@property(retain, nonatomic) NSURL *carScreenshotURL; // @synthesize carScreenshotURL=_carScreenshotURL;
@property(retain, nonatomic) NSURL *deviceScreenshotURL; // @synthesize deviceScreenshotURL=_deviceScreenshotURL;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)description;
- (void)_createCarPlayDiagnosticsFolder;
- (id)initWithDeviceScreenshot:(id)arg1 carScreenshot:(id)arg2 configuration:(id)arg3 attachmentURLs:(id)arg4 overlayBundleID:(id)arg5 siriInfo:(id)arg6 activeBundleID:(id)arg7;

@end
