//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIFirstTimeExperienceViewController.h>

@interface SPUISearchFirstTimeViewController : SearchUIFirstTimeExperienceViewController
{
    _Bool _hasBeenDisplayed;
}

+ (void)updateViewCountToCount:(long long)arg1;
+ (void)dismissForever;
+ (long long)viewCount;
+ (_Bool)needsDisplay;
@property _Bool hasBeenDisplayed; // @synthesize hasBeenDisplayed=_hasBeenDisplayed;
- (void)updateViewCount;
- (id)initWithSupportedDomains:(unsigned long long)arg1 explanationText:(id)arg2 learnMoreText:(id)arg3 continueButtonTitle:(id)arg4;

@end
