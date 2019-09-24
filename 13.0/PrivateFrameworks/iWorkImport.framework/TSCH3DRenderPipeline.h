//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCH3DContext, TSCH3DRenderProcessor, TSCH3DSession;

__attribute__((visibility("hidden")))
@interface TSCH3DRenderPipeline : NSObject
{
    TSCH3DRenderProcessor *mProcessor;
    TSCH3DSession *mSession;
}

+ (id)pipelineWithProcessor:(id)arg1 session:(id)arg2;
+ (id)clipRectForTargetSize:(const tvec2_3b141483 *)arg1 intermediateSize:(const tvec2_3b141483 *)arg2;
@property(readonly, nonatomic) TSCH3DSession *session; // @synthesize session=mSession;
@property(retain, nonatomic) TSCH3DRenderProcessor *processor; // @synthesize processor=mProcessor;
@property(readonly, nonatomic) TSCH3DContext *context;
- (void)dealloc;
- (id)initWithProcessor:(id)arg1 session:(id)arg2;

@end
