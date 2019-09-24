//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSString, PHAssetCollection, PHPhotoLibrary;
@protocol PGHighlightModelChangeRequest;

@protocol PGHighlightModel <NSObject>
@property(readonly, nonatomic) PHAssetCollection *assetCollection;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) _Bool isGroup;
@property(readonly, nonatomic, getter=isRecent) _Bool recent;
@property(nonatomic) unsigned short enrichmentState;
@property(nonatomic) unsigned short type;
- (id <PGHighlightModelChangeRequest>)changeRequest;
- (double)nonDefaultCurationScorePercentageForPhotoLibrary:(PHPhotoLibrary *)arg1;
- (double)faceAnalysisProgressForPhotoLibrary:(PHPhotoLibrary *)arg1;
- (double)sceneAnalysisProgressForPhotoLibrary:(PHPhotoLibrary *)arg1;
@end
