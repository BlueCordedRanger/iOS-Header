//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@protocol GEOMotionContextProvider;

@protocol GEOMotionContextProviderDelegate <NSObject>
- (void)motionContextProvider:(id <GEOMotionContextProvider>)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4;
@end
