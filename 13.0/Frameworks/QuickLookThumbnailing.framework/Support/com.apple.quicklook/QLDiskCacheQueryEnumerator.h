//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "QLDiskCacheEnumerator.h"

@class NSData, NSMutableArray, NSMutableDictionary, QLCacheBlobInfo, QLCacheFileIdentifier, QLCacheIndexDatabaseQueryEnumerator, QLCacheThumbnailData, QLTGeneratorThumbnailRequest;

@interface QLDiskCacheQueryEnumerator : QLDiskCacheEnumerator
{
    struct NSDictionary *_generatorRequests;
    struct NSMutableDictionary *_generatorRequestBeingProcessed;
    QLCacheIndexDatabaseQueryEnumerator *_cacheIndexDatabaseEnumerator;
    NSMutableArray *_sameGeneratorRequests;
    QLCacheThumbnailData *_thumbnailData;
    QLTGeneratorThumbnailRequest *_generatorRequest;
    _Bool _valueFound;
    _Bool _iconMode;
    long long _iconVariant;
    int _interpolationQuality;
    unsigned long long _badgeType;
    unsigned long long _cacheId;
    QLCacheFileIdentifier *_fileIdentifier;
    float _size;
    unsigned int _width;
    unsigned int _height;
    unsigned int _bitsPerComponent;
    unsigned int _bitsPerPixel;
    unsigned int _bytesPerRow;
    unsigned int _bitmapInfo;
    NSData *_bitmapData;
    QLCacheBlobInfo *_bitmapDataBlobInfo;
    NSData *_metadata;
    QLCacheBlobInfo *_metadataBlobInfo;
    int _flavor;
    struct CGRect _contentRect;
}

@property float size; // @synthesize size=_size;
@property int interpolationQuality; // @synthesize interpolationQuality=_interpolationQuality;
@property long long iconVariant; // @synthesize iconVariant=_iconVariant;
@property unsigned long long badgeType; // @synthesize badgeType=_badgeType;
@property _Bool iconMode; // @synthesize iconMode=_iconMode;
@property(retain) NSMutableArray *sameGeneratorRequests; // @synthesize sameGeneratorRequests=_sameGeneratorRequests;
@property(retain) QLCacheBlobInfo *bitmapDataBlobInfo; // @synthesize bitmapDataBlobInfo=_bitmapDataBlobInfo;
@property(retain) NSMutableDictionary *generatorRequestBeingProcessed; // @synthesize generatorRequestBeingProcessed=_generatorRequestBeingProcessed;
- (void).cxx_destruct;
- (id)nextThumbnailRequestWithThumbnailData:(id *)arg1;
- (void)_findThumbnailRequestsToProcess;
- (void)moveThumbnailRequestsFromBeingProcessedToSameRequestIfTheyMatch:(CDUnknownBlockType)arg1;
- (void)_cleanUpValues;
- (void)_createNewCacheIndexDatabaseEnumerator;
- (void)dealloc;
- (id)initWithDiskCache:(id)arg1 thumbnailRequests:(struct NSDictionary *)arg2;

@end
