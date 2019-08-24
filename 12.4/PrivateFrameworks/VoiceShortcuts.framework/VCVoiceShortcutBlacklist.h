//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCVoiceShortcutBlacklist : NSObject
{
}

+ (void)updateAppBlacklistFromBlacklist:(id)arg1;
+ (void)updatePhraseBlacklistFromBlacklist:(id)arg1;
+ (id)defaults;
+ (void)clearBlacklist;
+ (_Bool)updateBlacklistWithFile:(id)arg1;
+ (_Bool)updateBlacklistFromDirectory:(id)arg1;
+ (_Bool)isAppBlacklisted:(id)arg1;
+ (_Bool)isPhraseBlacklisted:(id)arg1;
+ (unsigned long long)blacklistStatusOfVoiceShortcut:(id)arg1;
+ (void)populateBlacklistStatusOnVoiceShortcuts:(id)arg1;

@end
