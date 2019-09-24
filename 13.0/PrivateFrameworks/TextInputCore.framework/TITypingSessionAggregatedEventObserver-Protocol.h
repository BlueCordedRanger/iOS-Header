//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSUUID, TIKeyboardCandidate, TITypingSession, TITypingSessionAligned;

@protocol TITypingSessionAggregatedEventObserver <NSObject>
- (void)sessionDidEnd:(TITypingSession *)arg1 aligned:(TITypingSessionAligned *)arg2;

@optional
- (void)candidateRevised:(TIKeyboardCandidate *)arg1 newCandidate:(TIKeyboardCandidate *)arg2 sessionID:(NSUUID *)arg3 timeStamp:(double)arg4 revisionAction:(unsigned long long)arg5;
- (void)candidateEntered:(TIKeyboardCandidate *)arg1 sessionID:(NSUUID *)arg2 timeStamp:(double)arg3 action:(unsigned long long)arg4;
@end
