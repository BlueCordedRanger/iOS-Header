//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class LocalSearchView;

@protocol LocalSearchBusinessController
@property(readonly, nonatomic) _Bool showInCardFooterWhenCardHasExpandedLayout;
@property(retain, nonatomic) LocalSearchView *contentView;
- (void)sendAnalyticsOnBecomeVisibleWithTarget:(int)arg1;
- (void)sendAnalyticsOnUserActionWithTarget:(int)arg1;
- (_Bool)shouldBeVisible;
- (void)viewWillAppear;
@end
