//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/_TimelineNode.h>

@class NSDate;
@protocol CLKTimelineEntry;

@interface _TimelineEntryNode : _TimelineNode
{
    id <CLKTimelineEntry> _entry;
}

@property(retain, nonatomic) id <CLKTimelineEntry> entry; // @synthesize entry=_entry;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *date;

@end

