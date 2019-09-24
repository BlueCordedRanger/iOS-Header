//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GEOMapServiceThrottlableTicket;

__attribute__((visibility("hidden")))
@interface _GEOThrottledTicket : NSObject
{
    unsigned int qos;
    id <GEOMapServiceThrottlableTicket> ticket;
    CDUnknownBlockType submissionHandler;
    double safeTime;
}

+ (id)ticket:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) double safeTime; // @synthesize safeTime;
@property(nonatomic) unsigned int qos; // @synthesize qos;
@property(copy, nonatomic) CDUnknownBlockType submissionHandler; // @synthesize submissionHandler;
@property(retain, nonatomic) id <GEOMapServiceThrottlableTicket> ticket; // @synthesize ticket;
- (void).cxx_destruct;

@end
