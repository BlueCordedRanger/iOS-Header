//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TeaUI/TSBackgroundFetchScheduler-Protocol.h>

@class MISSING_TYPE;

@interface TSApplicationBackgroundFetchScheduler : NSObject <TSBackgroundFetchScheduler>
{
    MISSING_TYPE *application;
}

- (void).cxx_destruct;
- (id)init;
- (void)prepareForUseWithApplicationDelegate:(id)arg1;
- (void)setMinimumBackgroundFetchInterval:(double)arg1;
- (id)initWithApplication:(id)arg1;

@end
