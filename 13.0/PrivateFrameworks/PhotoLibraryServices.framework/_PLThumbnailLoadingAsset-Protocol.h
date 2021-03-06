//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSManagedObjectID, NSString, PLPhotoLibrary;

@protocol _PLThumbnailLoadingAsset <NSObject>
- (PLPhotoLibrary *)pl_photoLibrary;
- (long long)cloudPlaceholderKind;
- (_Bool)complete;
- (unsigned long long)effectiveThumbnailIndex;
- (NSManagedObjectID *)objectID;

@optional
- (struct CGSize)imageSize;
- (NSString *)thumbnailIdentifier;
- (NSString *)uuid;
@end

