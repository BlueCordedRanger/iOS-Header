//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface ARUIWaveCurve : NSObject <NSCopying>
{
    CDStruct_515bcf56 _parameters;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)solveForX:(float)arg1;
- (id)initWithParameters:(CDStruct_515bcf56)arg1;

@end
