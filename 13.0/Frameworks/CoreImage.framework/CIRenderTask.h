//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CIRenderTask : NSObject
{
    void *_priv;
}

+ (id)rendertaskWithInternalTask:(struct RenderTask *)arg1;
- (id)waitUntilCompletedAndReturnError:(id *)arg1;
- (void)dealloc;
- (struct RenderTask *)internalRepresentation;
- (id)initWithInternalTask:(struct RenderTask *)arg1;
- (id)init;
- (id)_pdfDataRepresentation;

@end
