//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UINavigationController;

@interface VUICurrentSiriNavControllerContainer : NSObject
{
    UINavigationController *_currentSiriNavController;
}

+ (_Bool)isRunningInSiriPluggin;
+ (id)sharedInstance;
@property(nonatomic) __weak UINavigationController *currentSiriNavController; // @synthesize currentSiriNavController=_currentSiriNavController;
- (void).cxx_destruct;
- (id)init;

@end
