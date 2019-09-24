//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKit/SKStoreProductViewController.h>

#import <SearchUI/SKStoreProductViewControllerDelegate-Protocol.h>

@class NSString;
@protocol SFFeedbackListener;

@interface SearchUIStoreViewController : SKStoreProductViewController <SKStoreProductViewControllerDelegate>
{
    id <SFFeedbackListener> _feedbackListener;
}

@property __weak id <SFFeedbackListener> feedbackListener; // @synthesize feedbackListener=_feedbackListener;
- (void).cxx_destruct;
- (void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (id)initWithIdentifier:(id)arg1 feedbackListener:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
