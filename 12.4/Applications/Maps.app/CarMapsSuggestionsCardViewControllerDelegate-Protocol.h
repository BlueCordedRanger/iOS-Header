//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CarMapsSuggestionsCardViewController;

@protocol CarMapsSuggestionsCardViewControllerDelegate
- (void)suggestionsCardDidHandOff:(CarMapsSuggestionsCardViewController *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)suggestionsCardDidAccept:(CarMapsSuggestionsCardViewController *)arg1 navigationType:(unsigned long long)arg2;
- (void)suggestionsCardDidDismiss:(CarMapsSuggestionsCardViewController *)arg1;
@end
