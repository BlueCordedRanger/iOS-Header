//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "iOSSetupBaseViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

@interface iOSSetupStartViewController : iOSSetupBaseViewController <UIGestureRecognizerDelegate>
{
    UIButton *_dismissButton;
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    UIImageView *_imageView;
    UIView *_progressView;
    UIActivityIndicatorView *_progressSpinner;
    UILabel *_progressLabel;
    UIButton *_startButton;
    _Bool _started;
    _Bool _autoStart;
}

@property(nonatomic) _Bool autoStart; // @synthesize autoStart=_autoStart;
- (void).cxx_destruct;
- (void)handleTapOutsideView:(id)arg1;
- (void)handleStartButton:(id)arg1;
- (void)handleDeviceSetupNotification:(id)arg1;
- (void)handleDismissButton:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
