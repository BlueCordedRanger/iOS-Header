//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

@interface WFSiriAccessResource : WFAccessResource
{
}

+ (_Bool)isSystemResource;
- (void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1;
- (id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (unsigned long long)workflowLevelStatus;
- (unsigned long long)globalLevelStatus;
- (void)dealloc;
- (id)initWithDefinition:(id)arg1;

@end
