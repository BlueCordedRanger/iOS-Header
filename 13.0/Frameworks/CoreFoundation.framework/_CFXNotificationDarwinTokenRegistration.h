//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreFoundation/_CFXNotificationTokenRegistration.h>

__attribute__((visibility("hidden")))
@interface _CFXNotificationDarwinTokenRegistration : _CFXNotificationTokenRegistration
{
    int _notifyToken;
}

@property(readonly) int notifyToken; // @synthesize notifyToken=_notifyToken;
- (void)invalidate;
- (id)initWithToken:(unsigned long long)arg1 notifyToken:(int)arg2 options:(unsigned long long)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5;

@end
