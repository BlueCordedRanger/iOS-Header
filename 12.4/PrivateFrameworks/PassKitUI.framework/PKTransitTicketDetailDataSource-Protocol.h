//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSString;

@protocol PKTransitTicketDetailDataSource <NSObject>
- (NSString *)transitTicketDetailValueForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2;
- (NSString *)transitTicketDetailTitleForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2;
- (long long)transitTicketDetailNumberOfRowsForLeg:(unsigned long long)arg1;
- (NSString *)titleForLeg:(unsigned long long)arg1;
- (unsigned long long)numberOfLegs;
@end
