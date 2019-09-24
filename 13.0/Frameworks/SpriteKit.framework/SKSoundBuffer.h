//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKSoundBuffer : NSObject
{
    unsigned int _bufferId;
    NSString *_path;
    double _duration;
}

+ (id)bufferWithFileNamed:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) unsigned int bufferId;
- (id)description;
- (id)init;

@end
