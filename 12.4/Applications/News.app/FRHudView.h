//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, _UIBackdropView;

@interface FRHudView : UIView
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_backupSubtitle;
    UIImage *_image;
    _UIBackdropView *_backdropView;
    UIImageView *_backdropMaskImageView;
}

+ (id)HUDViewWithStyle:(long long)arg1 tagName:(id)arg2;
+ (id)HUDViewWithStyle:(long long)arg1;
@property(retain, nonatomic) UIImageView *backdropMaskImageView; // @synthesize backdropMaskImageView=_backdropMaskImageView;
@property(retain, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *backupSubtitle; // @synthesize backupSubtitle=_backupSubtitle;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_updateBackdropMask;
- (id)init;

@end
