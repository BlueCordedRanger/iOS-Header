//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface VKMuninJunction : NSObject
{
    NSMutableArray *_roads;
}

@property(readonly, nonatomic) NSArray *roads; // @synthesize roads=_roads;
- (id)description;
- (void)dealloc;
- (id)initWithMuninJunction:(const struct MuninJunction *)arg1;

@end
