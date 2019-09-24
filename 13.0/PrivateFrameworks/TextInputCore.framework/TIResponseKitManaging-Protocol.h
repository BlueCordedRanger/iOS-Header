//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSDate, NSString, TIAutocorrectionList;

@protocol TIResponseKitManaging <NSObject>
- (void)persistResponseKitDynamicDataToDisk;
- (void)resetResponseKit;
- (void)resetResponseKitConversationHistory;
- (void)updateResponseKitConversationHistoryWithMessage:(NSString *)arg1 withSenderID:(NSString *)arg2 withTimestamp:(NSDate *)arg3;
- (void)registerResponseKitResponse:(NSString *)arg1 forMessage:(NSString *)arg2 withLanguage:(NSString *)arg3 withClientID:(NSString *)arg4 withSenderID:(NSString *)arg5 withRecipientID:(NSString *)arg6 withTimestamp:(NSDate *)arg7 shouldUpdateConversationHistory:(_Bool)arg8;
- (void)generateResponseKitSuggestionsForString:(NSString *)arg1 withLanguage:(NSString *)arg2 withClientID:(NSString *)arg3 withRecipientID:(NSString *)arg4 withAdditionalPredictions:(TIAutocorrectionList *)arg5 desiredCandidateCount:(unsigned long long)arg6 shouldDisableAutoCaps:(_Bool)arg7 stringIsBlacklisted:(_Bool)arg8 async:(_Bool)arg9 completionHandler:(void (^)(TIAutocorrectionList *))arg10;
@end
