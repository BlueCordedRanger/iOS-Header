//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreNFC/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface NFCVASCommandConfiguration : NSObject <NSCopying>
{
    long long _mode;
    NSString *_passTypeIdentifier;
    NSURL *_url;
}

@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVASMode:(long long)arg1 passTypeIdentifier:(id)arg2 url:(id)arg3;
- (id)init;
- (void)dealloc;

@end
