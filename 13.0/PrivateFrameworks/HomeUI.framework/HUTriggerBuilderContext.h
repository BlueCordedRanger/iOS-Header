//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HFTriggerBuilderContextProviding-Protocol.h>

@class NSSet, NSString;

@interface HUTriggerBuilderContext : NSObject <HFTriggerBuilderContextProviding>
{
    _Bool _showTriggerSummary;
    _Bool _showTriggerEnableSwitch;
    _Bool _showActionSetsInstructions;
    _Bool _showConditionTriggers;
    _Bool _allowDurationEditing;
    NSString *_testActionsInstructionDescription;
    NSString *_serviceActionsInstructionDescription;
    NSString *_deleteInstructionDescription;
    NSString *_actionEditorInstructionsDescription;
    NSString *_triggerContextAwareTitle;
    NSSet *_unsupportedTriggers;
    NSString *_deleteConfirmationAlertTitle;
    NSString *_deleteConfirmationAlertMessage;
}

@property(copy, nonatomic) NSString *deleteConfirmationAlertMessage; // @synthesize deleteConfirmationAlertMessage=_deleteConfirmationAlertMessage;
@property(copy, nonatomic) NSString *deleteConfirmationAlertTitle; // @synthesize deleteConfirmationAlertTitle=_deleteConfirmationAlertTitle;
@property(copy, nonatomic) NSSet *unsupportedTriggers; // @synthesize unsupportedTriggers=_unsupportedTriggers;
@property(copy, nonatomic) NSString *triggerContextAwareTitle; // @synthesize triggerContextAwareTitle=_triggerContextAwareTitle;
@property(copy, nonatomic) NSString *actionEditorInstructionsDescription; // @synthesize actionEditorInstructionsDescription=_actionEditorInstructionsDescription;
@property(copy, nonatomic) NSString *deleteInstructionDescription; // @synthesize deleteInstructionDescription=_deleteInstructionDescription;
@property(copy, nonatomic) NSString *serviceActionsInstructionDescription; // @synthesize serviceActionsInstructionDescription=_serviceActionsInstructionDescription;
@property(copy, nonatomic) NSString *testActionsInstructionDescription; // @synthesize testActionsInstructionDescription=_testActionsInstructionDescription;
@property(nonatomic) _Bool allowDurationEditing; // @synthesize allowDurationEditing=_allowDurationEditing;
@property(nonatomic) _Bool showConditionTriggers; // @synthesize showConditionTriggers=_showConditionTriggers;
@property(nonatomic) _Bool showActionSetsInstructions; // @synthesize showActionSetsInstructions=_showActionSetsInstructions;
@property(nonatomic) _Bool showTriggerEnableSwitch; // @synthesize showTriggerEnableSwitch=_showTriggerEnableSwitch;
@property(nonatomic) _Bool showTriggerSummary; // @synthesize showTriggerSummary=_showTriggerSummary;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTriggerBuilderContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
