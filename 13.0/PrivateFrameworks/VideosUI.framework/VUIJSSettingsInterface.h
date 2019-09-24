//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <VideosUI/VUIJSSettingsInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface VUIJSSettingsInterface : IKJSObject <VUIJSSettingsInterface>
{
}

- (void)_handleSettingsDidChange:(id)arg1;
- (void)updateFeaturesConfiguration:(id)arg1;
- (id)wlkOverrides;
- (id)userPreferences;
- (id)deniedBrands;
- (id)consentedBrands;
- (id)appSettingsByChannelID;
- (void)forceUpdateWithCallback:(id)arg1;
- (_Bool)sportsScoreSpoilersAllowed;
- (_Bool)privateModeEnabled;
- (unsigned long long)privacyFlowContentVersion;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1;

@end
