//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBFlow.h>

@class NSArray, NSBundle, NSDictionary, NSString, UIImage;

@interface OBPrivacyFlow : OBFlow
{
    NSBundle *_bundle;
    NSString *_splashContentName;
    NSDictionary *_splashPlist;
    _Bool _buttonIconLoaded;
    struct UIImage *_buttonIcon;
    NSString *_buttonTitle;
    NSString *_buttonCaption;
    NSString *_splashTitle;
    NSString *_splashShortTitle;
}

+ (id)_modelSpecificLocalizedStringKeyForKey:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
+ (id)flowWithBundle:(id)arg1;
- (void).cxx_destruct;
- (id)localizedContentListForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
@property(readonly, nonatomic) NSArray *localizedContentList;
- (id)localizedShortTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
@property(readonly, nonatomic) NSString *localizedShortTitle;
- (id)localizedTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
@property(readonly, nonatomic) NSString *localizedTitle;
- (id)localizedButtonCaptionForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
@property(readonly, nonatomic) NSString *localizedButtonCaption;
- (id)localizedButtonTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
@property(readonly, nonatomic) NSString *localizedButtonTitle;
- (id)_textForConditionalItem:(id)arg1 language:(id)arg2 preferredDeviceType:(unsigned long long)arg3;
- (_Bool)_conformsToRequirements:(id)arg1;
- (_Bool)_conformsToRequirement:(id)arg1;
@property(readonly, nonatomic) _Bool showInCombinedList;
- (void)setButtonIcon:(struct UIImage *)arg1;
@property(readonly, nonatomic) UIImage *buttonIcon;
@property(readonly, nonatomic, getter=isPersonallyIdentifiable) _Bool personallyIdentifiable;
- (struct UIImage *)_bundleImageNamed:(id)arg1;
- (id)_splashLocalizedStringForKey:(id)arg1 language:(id)arg2 table:(id)arg3 preferredDeviceType:(unsigned long long)arg4;
- (id)_splashLocalizedStringForKey:(id)arg1 language:(id)arg2 preferredDeviceType:(unsigned long long)arg3;
@property(readonly, nonatomic) _Bool platformSupported;
- (id)_currentPlatform;
@property(readonly, nonatomic) unsigned long long contentVersion;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithSplashContent:(id)arg1;
- (id)initWithBundle:(id)arg1;

@end
