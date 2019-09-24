//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSProgressReporting-Protocol.h>

@class NSDictionary, NSProgress, NSString, NSURL, PHAsset;
@protocol PHAssetExportRequestDelegate;

@interface PHAssetExportRequest : NSObject <NSProgressReporting>
{
    NSURL *_outputDirectory;
    PHAsset *_asset;
    NSProgress *_progress;
    unsigned long long _state;
    id <PHAssetExportRequestDelegate> _delegate;
    NSDictionary *_variants;
}

+ (id)assetExportLog;
+ (id)exportRequestForAsset:(id)arg1 variants:(id)arg2 error:(id *)arg3;
+ (id)exportRequestForAsset:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSDictionary *variants; // @synthesize variants=_variants;
@property(nonatomic) __weak id <PHAssetExportRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)exportWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)preflightExportWithOptions:(id)arg1 isDownloadingRequired:(_Bool *)arg2 isProcessingRequired:(_Bool *)arg3 fileURLs:(id *)arg4 info:(id *)arg5;
- (void)performCompletionWithFileURLs:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)outputDirectory;
@property(readonly, copy) NSString *description;
- (void)setState:(unsigned long long)arg1;
- (id)initWithAsset:(id)arg1 variants:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
