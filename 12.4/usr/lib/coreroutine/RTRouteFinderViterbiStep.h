//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, RTLocation;

@interface RTRouteFinderViterbiStep : NSObject
{
    RTLocation *_waypoint;
    NSArray *_items;
}

@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) RTLocation *waypoint; // @synthesize waypoint=_waypoint;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool valid;
- (id)initWithWaypoint:(id)arg1;
- (id)initWithRoad:(id)arg1;
- (id)init;

@end

