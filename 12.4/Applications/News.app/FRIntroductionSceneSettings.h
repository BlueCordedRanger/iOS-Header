//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRIntroductionSceneSettings-Protocol.h"

@class NSArray, NSString, UIColor, UIView;
@protocol FRIntroductionView;

@interface FRIntroductionSceneSettings : NSObject <FRIntroductionSceneSettings>
{
    _Bool _singleLineInLandscape;
    _Bool _blurUnderControls;
    NSString *_titleText;
    UIColor *_titleTintColor;
    NSString *_bodyText;
    NSArray *_features;
    UIView<FRIntroductionView> *_introductionView;
    NSString *_primaryButtonTitle;
    NSString *_secondaryButtonTitle;
    struct _NSRange _coloredTitleRange;
}

+ (id)favoritesPickerIntroductionSceneSettings;
+ (id)emailIntroductionSceneSettings;
@property(readonly, nonatomic) NSString *secondaryButtonTitle; // @synthesize secondaryButtonTitle=_secondaryButtonTitle;
@property(readonly, nonatomic) NSString *primaryButtonTitle; // @synthesize primaryButtonTitle=_primaryButtonTitle;
@property(readonly, nonatomic) UIView<FRIntroductionView> *introductionView; // @synthesize introductionView=_introductionView;
@property(readonly, nonatomic) _Bool blurUnderControls; // @synthesize blurUnderControls=_blurUnderControls;
@property(readonly, nonatomic) NSArray *features; // @synthesize features=_features;
@property(readonly, nonatomic) NSString *bodyText; // @synthesize bodyText=_bodyText;
@property(readonly, nonatomic) UIColor *titleTintColor; // @synthesize titleTintColor=_titleTintColor;
@property(readonly, nonatomic) struct _NSRange coloredTitleRange; // @synthesize coloredTitleRange=_coloredTitleRange;
@property(readonly, nonatomic) _Bool singleLineInLandscape; // @synthesize singleLineInLandscape=_singleLineInLandscape;
@property(readonly, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (id)initWithTitleText:(id)arg1 coloredTitleRange:(struct _NSRange)arg2 titleTintColor:(id)arg3 bodyText:(id)arg4 singleLineInLandscape:(_Bool)arg5 features:(id)arg6 continueButtonText:(id)arg7 skipButtonText:(id)arg8 blurUnderControls:(_Bool)arg9 introductionView:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
