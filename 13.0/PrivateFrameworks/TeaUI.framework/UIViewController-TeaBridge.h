//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TeaUI/TSPresenterType-Protocol.h>

@class TSTransitionContainerViewController;

@interface UIViewController (TeaBridge) <TSPresenterType>
- (_Bool)ts_setAppearanceTransitionsAreDisabled:(_Bool)arg1;
@property(readonly, nonatomic) UIViewController *ts_parentVC;
@property(nonatomic, readonly) TSTransitionContainerViewController *ts_transitionContainerViewController;
- (void)removeCommand:(id)arg1 forContextProvider:(id)arg2;
- (void)removeCommands:(id)arg1 forContextProvider:(id)arg2;
- (void)removeContextProvider:(id)arg1;
- (void)addContextProvider:(id)arg1 forCommand:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)tabBarSplitViewFocusable;
- (id)tabBarSplitViewFousable;
@end
