//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGFeaturedMemoryGenerator : PGMemoryGenerator
{
    _Bool _usesLowRequirements;
    _Bool _oldMemory;
    NSDate *_upperBoundLocalDate;
}

@property(nonatomic) _Bool oldMemory; // @synthesize oldMemory=_oldMemory;
@property(nonatomic) _Bool usesLowRequirements; // @synthesize usesLowRequirements=_usesLowRequirements;
@property(retain, nonatomic) NSDate *upperBoundLocalDate; // @synthesize upperBoundLocalDate=_upperBoundLocalDate;
- (void).cxx_destruct;

@end
