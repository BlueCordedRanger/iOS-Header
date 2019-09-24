//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSystemServiceServerAppSwitcherDelegate-Protocol.h>

@class FBServiceClientAuthenticator, NSString, SBCommandTabController, SBRecentAppLayouts;

@interface SBAppSwitcherSystemService : NSObject <SBSystemServiceServerAppSwitcherDelegate>
{
    FBServiceClientAuthenticator *_requestAppearanceForHiddenAppAuthenticator;
    SBRecentAppLayouts *_recentAppLayouts;
    SBCommandTabController *_commandTabController;
}

- (void).cxx_destruct;
- (void)systemServiceServer:(id)arg1 requestAppearanceForHiddenAppWithBundleIdentifier:(id)arg2 assertionPort:(id)arg3 forClient:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)requestAppearanceForHiddenAppWithBundleIdentifier:(id)arg1 assertionPort:(id)arg2 forClient:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)initWithRecentAppLayoutsController:(id)arg1 commandTabController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
