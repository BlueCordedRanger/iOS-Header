//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVPlayback/TVPChapterCollection.h>

@class NSArray, NSDate, NSString, NSURL;

@interface TVPMutableChapterCollection : TVPChapterCollection
{
}


// Remaining properties
@property(retain, nonatomic) id backingData; // @dynamic backingData;
@property(retain, nonatomic) NSArray *chapters; // @dynamic chapters;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) double refreshInterval; // @dynamic refreshInterval;
@property(copy, nonatomic) NSURL *refreshURL; // @dynamic refreshURL;
@property(nonatomic) _Bool shouldDisplayChapterMarkers; // @dynamic shouldDisplayChapterMarkers;
@property(nonatomic) _Bool shouldShowDescriptionOnChapterSkip; // @dynamic shouldShowDescriptionOnChapterSkip;
@property(nonatomic) _Bool shouldStartPlaybackFromStartDate; // @dynamic shouldStartPlaybackFromStartDate;
@property(retain, nonatomic) NSDate *startDate; // @dynamic startDate;
@property(nonatomic) long long type; // @dynamic type;
@end
