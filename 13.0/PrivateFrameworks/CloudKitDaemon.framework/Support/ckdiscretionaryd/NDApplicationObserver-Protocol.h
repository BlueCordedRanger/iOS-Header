//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NDApplication;

@protocol NDApplicationObserver <NSObject>

@optional
- (void)applicationNoLongerInForeground:(NDApplication *)arg1;
- (void)applicationEnteredForeground:(NDApplication *)arg1;
@end
