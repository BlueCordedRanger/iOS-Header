//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBHLegibility-Protocol.h>

@class SBHSidebarVisualConfiguration, WGWidgetGroupViewController;
@protocol SBHSidebarProviderDelegate;

@protocol SBHSidebarProvider <SBHLegibility>
@property(nonatomic) __weak id <SBHSidebarProviderDelegate> delegate;
@property(nonatomic) unsigned long long layoutInsetsIgnoredEdges;
@property(retain, nonatomic) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property(retain, nonatomic) WGWidgetGroupViewController *widgetViewController;
- (void)setEditingIcons:(_Bool)arg1;
@end

