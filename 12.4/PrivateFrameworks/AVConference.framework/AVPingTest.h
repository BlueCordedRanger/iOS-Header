//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AVPingTest : NSObject
{
    NSString *ipAsString;
    _Bool usingWifi;
    NSString *interfaceNameToTest;
    float min;
    float max;
    float avg;
    float stddev;
    float packetLossRate;
    long long lastReturnedError;
}

@property(readonly, nonatomic) float packetLossRate; // @synthesize packetLossRate;
@property(readonly, nonatomic) float stddev; // @synthesize stddev;
@property(readonly, nonatomic) float avg; // @synthesize avg;
@property(readonly, nonatomic) float max; // @synthesize max;
@property(readonly, nonatomic) float min; // @synthesize min;
@property(readonly, nonatomic) _Bool usingWifi; // @synthesize usingWifi;
- (id)description;
- (long long)start;
- (void)calculateInterfaceName;
- (void)dealloc;
- (id)initWithIPAsString:(id)arg1 usingWifi:(_Bool)arg2;
- (long long)parseResults:(char *)arg1 secondLastLine:(char *)arg2;
- (_Bool)parsePingLineForPLR:(char *)arg1;
- (_Bool)parsePingLineForBadCommand:(char *)arg1;
- (_Bool)parsePingLineForBadInterface:(char *)arg1;
- (_Bool)parsePingLineForLatencyStats:(char *)arg1;

@end
