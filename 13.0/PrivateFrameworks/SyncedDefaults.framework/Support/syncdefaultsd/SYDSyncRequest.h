//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SYDMessage;

@interface SYDSyncRequest : NSObject
{
    _Bool _soon;
    int _reason;
    long long _type;
    NSArray *_apps;
    SYDMessage *_message;
}

@property(retain, nonatomic) SYDMessage *message; // @synthesize message=_message;
@property(nonatomic) _Bool soon; // @synthesize soon=_soon;
@property(retain, nonatomic) NSArray *apps; // @synthesize apps=_apps;
@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 reason:(int)arg2 apps:(id)arg3 soon:(_Bool)arg4 message:(id)arg5;

@end
