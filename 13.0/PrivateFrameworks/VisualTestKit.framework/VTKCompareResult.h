//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface VTKCompareResult : NSObject
{
    _Bool _succesfull;
    UIImage *_comparisonImage;
}

@property(readonly, nonatomic) UIImage *comparisonImage; // @synthesize comparisonImage=_comparisonImage;
@property(readonly, nonatomic, getter=isSuccesfull) _Bool succesfull; // @synthesize succesfull=_succesfull;
- (void).cxx_destruct;
- (id)initWithComparisonImage:(id)arg1 isSuccesfull:(_Bool)arg2;

@end
