//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface __CNCallStack : NSObject
{
    void **_frames;
    unsigned int _count;
}

- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyArrayRepresentation;
- (void **)frames;
- (unsigned int)frameCount;
- (void)dealloc;
- (id)initWithFrames:(void **)arg1 count:(unsigned int)arg2;

@end
