//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ODRSpaceReduction : NSObject
{
    long long _spaceReduction;
    NSMutableArray *_preallocatedFiles;
}

@property(retain) NSMutableArray *preallocatedFiles; // @synthesize preallocatedFiles=_preallocatedFiles;
@property(readonly) long long spaceReduction; // @synthesize spaceReduction=_spaceReduction;
- (void).cxx_destruct;
- (id)initWithSpaceReduction:(long long)arg1;

@end
