//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AXPIFingerModelDelegate;

@interface AXPIFingerModel : NSObject
{
    _Bool _pressed;
    _Bool _selected;
    double _force;
    id <AXPIFingerModelDelegate> _delegate;
    struct CGPoint _location;
}

+ (id)fingerModelForLocation:(struct CGPoint)arg1;
@property(retain, nonatomic) id <AXPIFingerModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)description;

@end
