//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@class SVVideoViewController;

@protocol SVVideoViewControllerAppearanceObserver <NSObject>

@optional
- (void)videoViewControllerDidDisappear:(SVVideoViewController *)arg1;
- (void)videoViewControllerWillDisappear:(SVVideoViewController *)arg1;
- (void)videoViewControllerDidAppear:(SVVideoViewController *)arg1;
- (void)videoViewControllerWillAppear:(SVVideoViewController *)arg1;
@end
