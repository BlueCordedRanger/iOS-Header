//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <AssistantSettingsSupport/SiriAppsFooterViewDelegate-Protocol.h>

@class NSArray;

@interface AssistantIntentsController : PSListController <SiriAppsFooterViewDelegate>
{
    NSArray *_intentsSpecifiers;
}

@property(retain, nonatomic) NSArray *intentsSpecifiers; // @synthesize intentsSpecifiers=_intentsSpecifiers;
- (void).cxx_destruct;
- (void)viewDidTapLearnMore:(id)arg1;
- (id)accesssForSpecifier:(id)arg1;
- (void)setAccess:(id)arg1 forSpecifier:(id)arg2;
- (void)_fetchIntentsSpecifiersWithCompletion:(CDUnknownBlockType)arg1;
- (id)specifiers;
- (void)tccPreferencesChanged;
- (void)dealloc;
- (id)init;

@end
