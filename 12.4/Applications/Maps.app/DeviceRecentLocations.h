//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEORecentLocations, NSArray, NSLock;

__attribute__((visibility("hidden")))
@interface DeviceRecentLocations : NSObject
{
    NSLock *locationsLock;
    GEORecentLocations *deviceLocations;
    NSArray *_recentLocations;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSArray *recentLocations; // @synthesize recentLocations=_recentLocations;
- (void).cxx_destruct;
- (void)updateLocationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

