//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICollectionReusableView.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidatePocketShadow : UICollectionReusableView
{
    _Bool _shadowFadesToBottom;
    _Bool _drawsShadow;
    _Bool _showsInDarkBackground;
}

+ (id)leftShadowImage;
+ (double)widthWithShadow:(_Bool)arg1;
@property(nonatomic) _Bool showsInDarkBackground; // @synthesize showsInDarkBackground=_showsInDarkBackground;
@property(nonatomic) _Bool drawsShadow; // @synthesize drawsShadow=_drawsShadow;
@property(nonatomic) _Bool shadowFadesToBottom; // @synthesize shadowFadesToBottom=_shadowFadesToBottom;
- (void)applyLayoutAttributes:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
