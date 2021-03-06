//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/CLKMonochromeComplicationView-Protocol.h>

@class CALayer, CLKDevice, NSString, NTKColoringImageView, UIColor, UIImage, UIImageView;
@protocol CLKMonochromeFilterProvider;

@interface NTKHandView : UIView <CLKMonochromeComplicationView>
{
    UIImageView *_shadowImageView;
    CALayer *_inlayLayer;
    UIView *_handDotView;
    _Bool _shadowsHidden;
    id <CLKMonochromeFilterProvider> _filterProvider;
    UIColor *_color;
    UIImage *_image;
    double _zRotation;
    double _scale;
    UIColor *_inlayColor;
    UIImage *_shadowImage;
    UIView *_transitionContainerView;
    UIColor *_handDotColor;
    NTKColoringImageView *_handImageView;
    CLKDevice *_device;
    unsigned long long _style;
    struct UIEdgeInsets _inlayInsets;
    struct UIEdgeInsets _shadowInsets;
}

@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) NTKColoringImageView *handImageView; // @synthesize handImageView=_handImageView;
@property(readonly, nonatomic) UIView *handDotView; // @synthesize handDotView=_handDotView;
@property(retain, nonatomic) UIColor *handDotColor; // @synthesize handDotColor=_handDotColor;
@property(retain, nonatomic) UIView *transitionContainerView; // @synthesize transitionContainerView=_transitionContainerView;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(nonatomic) struct UIEdgeInsets shadowInsets; // @synthesize shadowInsets=_shadowInsets;
@property(nonatomic) _Bool shadowsHidden; // @synthesize shadowsHidden=_shadowsHidden;
@property(nonatomic) struct UIEdgeInsets inlayInsets; // @synthesize inlayInsets=_inlayInsets;
@property(retain, nonatomic) UIColor *inlayColor; // @synthesize inlayColor=_inlayColor;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double zRotation; // @synthesize zRotation=_zRotation;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) __weak id <CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
- (void).cxx_destruct;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)_adjustHandImageSubviewOrder;
- (void)setupHandDotViewWithDiameter:(double)arg1;
- (void)_updateShadows;
- (void)noModelUpdate_setHandDotColor:(id)arg1;
- (void)noModelUpdate_setInlayInsets:(struct UIEdgeInsets)arg1;
- (void)noModelUpdate_setInlayColor:(id)arg1;
@property(readonly, nonatomic) CALayer *inlayLayer;
- (void)_updateTransform;
- (void)noModelUpdate_setColor:(id)arg1;
- (void)_layoutInlayLayer;
- (void)layoutSubviews;
- (id)initWithImage:(id)arg1 style:(unsigned long long)arg2 forDevice:(id)arg3;
- (id)initWithImage:(id)arg1 forDevice:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

