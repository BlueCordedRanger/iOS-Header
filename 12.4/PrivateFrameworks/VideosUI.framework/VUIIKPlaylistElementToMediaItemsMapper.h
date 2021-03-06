//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIIKPlaylistElementToMediaItemsMapper : NSObject
{
    unsigned long long _resumeMenuBehavior;
}

@property(nonatomic) unsigned long long resumeMenuBehavior; // @synthesize resumeMenuBehavior=_resumeMenuBehavior;
- (void)_populateMediaItem:(id)arg1 withMetadatafromRelatedContentElement:(id)arg2;
- (void)_populateMediaItem:(id)arg1 withMetadatafromTimelineEventElement:(id)arg2;
- (void)_populateMediaItem:(id)arg1 withMetadatafromVideoElement:(id)arg2;
- (id)_clipMediaItemsMediaItem:(id)arg1 fromTimelineElement:(id)arg2;
- (id)_auxMediaItemForVideoElement:(id)arg1;
- (id)_storeMediaItemsForVideoElement:(id)arg1;
- (id)mediaItemsFromIKPlaylistElement:(id)arg1;
- (_Bool)_shouldDisableResumeMenuForAsset:(id)arg1;
- (id)init;

@end

