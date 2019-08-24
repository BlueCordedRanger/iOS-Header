//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusFoundation/OFUIViewController.h>

#import <OpusFoundation/OFUICircularPagingViewDelegate-Protocol.h>

@class NSString, OFUICircularPagingView;

@interface OFUICircularPagingViewController : OFUIViewController <OFUICircularPagingViewDelegate>
{
    OFUICircularPagingView *_circularPagingView;
}

+ (Class)circularPagingViewClass;
- (void)circularPagingViewDidMoveBackward:(id)arg1;
- (void)circularPagingViewDidMoveForward:(id)arg1;
@property(retain, nonatomic) OFUICircularPagingView *circularPagingView; // @synthesize circularPagingView=_circularPagingView;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (void)viewWillUnload;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
