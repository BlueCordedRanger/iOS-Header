//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIBezierPath, UIImage;

__attribute__((visibility("hidden")))
@interface DragAndDropPreviewImage : NSObject
{
    UIImage *_image;
    UIBezierPath *_visiblePath;
    double _cornerRadius;
}

@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIBezierPath *visiblePath; // @synthesize visiblePath=_visiblePath;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)targetedDragPreviewWithTarget:(id)arg1;
- (id)dragPreview;

@end
