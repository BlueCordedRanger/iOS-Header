//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPCPlayerItem.h>

@class MPAVItem;

@interface MPCMediaPlayerLegacyItem : MPCPlayerItem
{
    CDStruct_fce57115 _snapshot;
    MPAVItem *_avItem;
}

@property(readonly, nonatomic) MPAVItem *avItem; // @synthesize avItem=_avItem;
- (void).cxx_destruct;
- (void)_updateSnapshot;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_titlesDidChangeNotification:(id)arg1;
- (void)_rateDidChangeNotification:(id)arg1;
- (void)_modelGenericObjectDidChangeNotification:(id)arg1;
- (void)_explicitDidChangeNotification:(id)arg1;
- (void)_durationAvailablityDidChangeNotification:(id)arg1;
- (void)_artworkDidChangeNotification:(id)arg1;
- (id)composerName;
- (id)artworkCatalog;
- (_Bool)isExplicit;
- (id)artistName;
- (id)albumName;
- (id)modelGenericObjectRepresentation;
- (id)title;
- (CDStruct_fce57115)durationSnapshot;
- (void)dealloc;
- (id)initWithAVItem:(id)arg1;

@end
