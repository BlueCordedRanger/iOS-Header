//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosFormats/PFRWSampleBufferChannelDelegate-Protocol.h>

@class AVAsset, AVAssetReader, AVAssetWriter, AVAssetWriterInput, NSArray, NSString, NSURL;
@protocol OS_dispatch_queue, PFAVReaderWriterAdjustDelegate;

@interface PFAVReaderWriter : NSObject <PFRWSampleBufferChannelDelegate>
{
    NSObject<OS_dispatch_queue> *_serializationQueue;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    AVAssetReader *assetReader;
    AVAssetWriter *assetWriter;
    NSArray *videoChannels;
    NSArray *passthroughChannels;
    _Bool cancelled;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    _Bool _writeInProgress;
    CDStruct_1b6d18a9 _stillImagetime;
    id <PFAVReaderWriterAdjustDelegate> _delegate;
    AVAsset *_asset;
    AVAssetWriterInput *_metadataInput;
    NSURL *_outputURL;
    CDStruct_e83c9415 _timeRange;
}

@property(copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(retain, nonatomic) AVAssetWriterInput *metadataInput; // @synthesize metadataInput=_metadataInput;
@property(copy, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) __weak id <PFAVReaderWriterAdjustDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sampleBufferChannel:(id)arg1 didReadSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 andMadeWriteSampleBuffer:(struct __CVBuffer *)arg3;
- (void)sampleBufferChannel:(id)arg1 didReadSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)readingAndWritingDidFinishSuccessfully:(_Bool)arg1 withError:(id)arg2;
- (void)cancel;
- (_Bool)startReadingAndWritingReturningError:(id *)arg1;
- (_Bool)setUpReaderAndWriterReturningError:(id *)arg1;
- (void)_didLoadAVAssetValues;
- (void)writeToURL:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithAsset:(id)arg1 stillImageTime:(CDStruct_1b6d18a9)arg2;
- (id)initWithAsset:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
