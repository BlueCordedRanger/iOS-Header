//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSgPTPPort;
@protocol OS_dispatch_queue;

@interface TSPortInterface : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    TSgPTPPort *_port;
}

@property(retain, nonatomic) TSgPTPPort *port; // @synthesize port=_port;
- (void)dealloc;
- (id)initWithgPTPPort:(id)arg1 onClockIdentifier:(unsigned long long)arg2;

@end
