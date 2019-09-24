//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DACoreDAVGlue/NSObject-Protocol.h>

@class CoreDAVTask, NSRunLoop;

@protocol CoreDAVTaskManager <NSObject>
@property(retain, nonatomic) NSRunLoop *workRunLoop;
- (void)shutdown;
- (void)coreDAVTaskDidFinish:(CoreDAVTask *)arg1;
- (void)coreDAVTaskEndModal:(CoreDAVTask *)arg1;
- (void)coreDAVTaskRequestModal:(CoreDAVTask *)arg1;
- (void)submitIndependentCoreDAVTask:(CoreDAVTask *)arg1;
- (void)submitQueuedCoreDAVTask:(CoreDAVTask *)arg1;
@end
