//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSARenderingExporterDelegate-Protocol.h>

@class NSString, NSURL, TSARenderingExporter;
@protocol TSKImageExporter;

__attribute__((visibility("hidden")))
@interface TSAImageRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate>
{
    TSARenderingExporter<TSKImageExporter> *mRenderingExporter;
    unsigned long long mWidth;
    unsigned long long mHeight;
    _Bool mScaleToFit;
    NSURL *mURL;
    NSString *mImageType;
    float mCompressionFactor;
}

@property(nonatomic) float compressionFactor; // @synthesize compressionFactor=mCompressionFactor;
@property(retain, nonatomic) NSString *imageType; // @synthesize imageType=mImageType;
@property(nonatomic) _Bool scaleToFit; // @synthesize scaleToFit=mScaleToFit;
@property(nonatomic) unsigned long long height; // @synthesize height=mHeight;
@property(nonatomic) unsigned long long width; // @synthesize width=mWidth;
- (void).cxx_destruct;
- (_Bool)supportsRenderingQuality;
- (_Bool)supportsPaging;
- (void)releaseCGContext:(struct CGContext *)arg1;
- (struct CGContext *)newCGContextForURL:(id)arg1;
- (double)viewScale;
- (void)teardown;
- (void)setup;
- (id)initWithRenderingExporter:(id)arg1;

@end
