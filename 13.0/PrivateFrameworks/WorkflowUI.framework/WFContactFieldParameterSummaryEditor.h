//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFModuleSummaryEditor.h>

#import <WorkflowUI/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <WorkflowUI/WFRecipientFieldViewControllerDelegate-Protocol.h>

@class NSString, UIViewController;

@interface WFContactFieldParameterSummaryEditor : WFModuleSummaryEditor <WFRecipientFieldViewControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    UIViewController *_presentedViewController;
}

+ (_Bool)supportsLongPressGestureForSlotWithIdentifier:(id)arg1;
@property(nonatomic) __weak UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)recipientViewControllerDidFinish:(id)arg1 cancelled:(_Bool)arg2;
- (unsigned long long)variableResultType;
- (id)stateByReplacingVariableFromInitialState:(id)arg1 withVariable:(id)arg2;
- (id)stateForVariable:(id)arg1;
- (void)cancelEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentSinglePickerFromSourceViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3;
- (void)beginEditingNewArrayElementFromSourceViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3;
- (void)beginEditingSlotWithIdentifier:(id)arg1 fromLongPressGesture:(_Bool)arg2 sourceViewController:(id)arg3 sourceView:(id)arg4 sourceRect:(struct CGRect)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
