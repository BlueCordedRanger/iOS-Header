//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol MNLocationHistoryProvider;

@interface MNLocationHistory : NSObject
{
    id <MNLocationHistoryProvider> _locationHistoryProvider;
}

@property(retain, nonatomic) id <MNLocationHistoryProvider> locationHistoryProvider; // @synthesize locationHistoryProvider=_locationHistoryProvider;
- (void).cxx_destruct;
@property(readonly) NSArray *locationHistory;
- (id)init;

@end
