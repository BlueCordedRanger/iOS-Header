//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGridInlinePlaybackRecord.h>

@protocol _PXDetailsAutoplayTile;

@interface _PXDetailsPlaybackRecord : PXGridInlinePlaybackRecord
{
    struct PXTileIdentifier _tileIdentifier;
}

@property(nonatomic) struct PXTileIdentifier tileIdentifier; // @synthesize tileIdentifier=_tileIdentifier;
- (long long)desiredPlayState;
- (void)setDesiredPlayState:(long long)arg1;

// Remaining properties
@property(readonly, nonatomic) id <_PXDetailsAutoplayTile> geometryReference; // @dynamic geometryReference;

@end
