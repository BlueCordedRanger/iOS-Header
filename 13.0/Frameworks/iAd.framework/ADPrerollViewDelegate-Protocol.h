//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iAd/NSObject-Protocol.h>

@protocol ADPrerollViewDelegate <NSObject>
- (void)privacyButtonPressed;
- (void)actionButtonPressed;
- (void)skipButtonPressed;
- (void)pauseButtonPressed;
- (void)playButtonPressed;
- (void)doneButtonPressed;
- (_Bool)prerollViewRequestsEmbeddedStatus;
@end
