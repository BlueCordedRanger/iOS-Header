//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DownloadAgentState.h"

@interface WaitingDownloadAgentState : DownloadAgentState
{
}

- (void)_didStart;
- (void)_didPause;
- (void)_didCancel;
- (void)onMessage:(id)arg1;
- (void)onEnter;

@end

