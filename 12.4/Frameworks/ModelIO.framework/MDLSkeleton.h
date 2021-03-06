//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLObject.h>

#import <ModelIO/NSCopying-Protocol.h>

@class MDLMatrix4x4Array, NSArray;

@interface MDLSkeleton : MDLObject <NSCopying>
{
    NSArray *_jointPaths;
    MDLMatrix4x4Array *_jointBindTransforms;
    MDLMatrix4x4Array *_jointRestTransforms;
}

@property(readonly, nonatomic) MDLMatrix4x4Array *jointRestTransforms; // @synthesize jointRestTransforms=_jointRestTransforms;
@property(readonly, nonatomic) MDLMatrix4x4Array *jointBindTransforms; // @synthesize jointBindTransforms=_jointBindTransforms;
@property(readonly, nonatomic) NSArray *jointPaths; // @synthesize jointPaths=_jointPaths;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 jointPaths:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

