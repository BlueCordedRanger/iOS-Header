//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKModernToolbarPicker.h>

@class NSArray;

@interface AKFillableShapeStylePicker : AKModernToolbarPicker
{
    NSArray *_buttons;
    _Bool _showFill;
}

@property(nonatomic) _Bool showFill; // @synthesize showFill=_showFill;
- (void).cxx_destruct;
- (void)_updateImagesForAnnotationType:(id)arg1;
- (void)revalidateItems:(id)arg1;
- (void)_styleButtonPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2;

@end
