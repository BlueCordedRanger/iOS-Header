//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsAction.h"

@class GEOAnnouncement;

__attribute__((visibility("hidden")))
@interface PresentAnnouncementAction : MapsAction
{
    GEOAnnouncement *_announcement;
}

@property(retain, nonatomic) GEOAnnouncement *announcement; // @synthesize announcement=_announcement;
- (void).cxx_destruct;
- (id)initWithAnnouncement:(id)arg1;

@end
