//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@protocol WFVariableDataSource;

@protocol WFVariableStringContent <NSObject>
- (unsigned long long)wf_lengthInVariableString;
- (void)wf_getContentItemsWithVariableSource:(id <WFVariableDataSource>)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
@end
