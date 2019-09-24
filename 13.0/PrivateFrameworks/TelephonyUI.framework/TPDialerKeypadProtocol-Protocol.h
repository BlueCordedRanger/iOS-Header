//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUI/NSObject-Protocol.h>

@class UIView;
@protocol TPDialerKeypadDelegate, TPNumberPadButtonProtocol;

@protocol TPDialerKeypadProtocol <NSObject>
- (void)setPlaysSounds:(_Bool)arg1;
- (long long)indexForHighlightedKey;
- (void)highlightKeyAtIndex:(long long)arg1;
- (void)setDelegate:(id <TPDialerKeypadDelegate>)arg1;

@optional
- (void)replaceButton:(UIView<TPNumberPadButtonProtocol> *)arg1 atIndex:(unsigned long long)arg2;
- (void)performTapActionCancelForHighlightedKey;
- (void)performTapActionEndForHighlightedKey;
- (void)performTapActionDownForHighlightedKey;
@end
