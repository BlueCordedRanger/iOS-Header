//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface EMFakeRepositoryValidityTracker : NSObject
{
    NSMutableArray *_expectedChangeActionValidationBlocks;
}

- (void).cxx_destruct;
- (void)verifyExpectations;
- (void)failWithReason:(id)arg1;
- (void)validateChangeAction:(id)arg1;
- (void)expectChangeActionWithValidationBlock:(CDUnknownBlockType)arg1;

@end
