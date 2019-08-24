//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, VSRecognitionSession;

@interface VSRecognitionAction : NSObject
{
    NSString *_resultString;
    NSString *_statusString;
    union {
        NSString *stringValue;
        NSAttributedString *attributedStringValue;
    } _spokenString;
    VSRecognitionSession *_session;
    unsigned int _spokenStringIsAttributed:1;
}

- (void)_continueAfterDeferredStart;
- (_Bool)sensitiveActionsEnabled;
- (_Bool)_hasDeferredStartCallback;
- (void)completeWithNextAction:(id)arg1 error:(id)arg2;
- (id)cancel;
- (id)perform;
- (int)completionType;
- (void)setSpokenFeedbackAttributedString:(id)arg1;
- (id)spokenFeedbackAttributedString;
- (void)setSpokenFeedbackString:(id)arg1;
- (id)spokenFeedbackString;
- (void)setStatusDisplayString:(id)arg1;
- (id)statusDisplayString;
- (void)setResultDisplayString:(id)arg1;
- (id)resultDisplayString;
- (void)dealloc;
- (void)_setSession:(id)arg1;
- (id)_session;

@end
