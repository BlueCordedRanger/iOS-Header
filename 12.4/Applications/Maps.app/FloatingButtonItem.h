//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface FloatingButtonItem : NSObject
{
    UIButton *_button;
    long long _option;
}

@property(readonly, nonatomic) long long option; // @synthesize option=_option;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (id)initWithButton:(id)arg1 option:(long long)arg2;

@end
