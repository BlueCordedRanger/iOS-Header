//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUtilities/NSObject-Protocol.h>

@class NSString;
@protocol AXImageMonitor;

@protocol AXImageMonitorObserver <NSObject>
- (void)iterateInitialImageListForImageMonitor:(id <AXImageMonitor>)arg1;
- (void)imageMonitor:(id <AXImageMonitor>)arg1 didAddImage:(NSString *)arg2;
@end
