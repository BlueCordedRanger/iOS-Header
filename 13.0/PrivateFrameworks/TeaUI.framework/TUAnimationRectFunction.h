//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction, TUAnimationPointFunction, TUAnimationSizeFunction;

@interface TUAnimationRectFunction : NSObject
{
    CAMediaTimingFunction *_timingFunction;
    double _speed;
    TUAnimationPointFunction *_originFunction;
    TUAnimationSizeFunction *_sizeFunction;
    struct CGRect _startValue;
    struct CGRect _endValue;
}

@property(retain, nonatomic) TUAnimationSizeFunction *sizeFunction; // @synthesize sizeFunction=_sizeFunction;
@property(retain, nonatomic) TUAnimationPointFunction *originFunction; // @synthesize originFunction=_originFunction;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) struct CGRect endValue; // @synthesize endValue=_endValue;
@property(nonatomic) struct CGRect startValue; // @synthesize startValue=_startValue;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
- (void).cxx_destruct;
- (void)_reloadFunctions;
- (struct CGRect)solveForTime:(double)arg1;
- (id)initWithTimingFunction:(id)arg1 startRect:(struct CGRect)arg2 endRect:(struct CGRect)arg3 speed:(double)arg4;

@end
