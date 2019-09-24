//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, _PASCFBurstTrie;

@interface PPConfigurationGuardedData : NSObject
{
    double topicsSigmoidWidth;
    double topicsSigmoidPeakValue;
    double topicsScalingFactor;
    float remoteTopicsMultiplier;
    double halfValuePosition;
    double nonReaderTextWeight;
    double analyticsSamplingRate;
    double musicDataCollectionSamplingRateForCTS;
    double musicDataCollectionSamplingRateForAMP;
    int musicDataCollectionMaximumRecordsPerType;
    NSArray *musicDataCollectionAMPBundleIds;
    NSString *variantName;
    NSString *naturalVariantName;
    NSArray *availableVariantNames;
    NSDictionary *topicMaps;
    NSDictionary *topicMapsScalingFactors;
    NSDictionary *topicsSourceMultiplier;
    NSDictionary *topicsAlgorithmMultiplier;
    _PASCFBurstTrie *topicCalibration;
    _Bool highLevelTopicExtractionEnabled;
    _Bool safariDonationTitleExtractionEnabled;
    _Bool safariDataDetectorsEnabledForHighMemoryDevices;
    double highLevelTopicScoreThreshold;
    float scoreThresholdForNamedEntity;
    float scoreThresholdForTopic;
    float scoreThresholdForLocation;
    float feedbackSessionLogsSamplingRate;
    float feedbackSessionLogsExtractionsSamplingRate;
    int feedbackSessionLogsGeohashLength;
    double analyticsTopicsSamplingRate;
    int analyticsMaximumNumberOfRecords;
    int analyticsGeohashLength;
    double topicDecayHalfLifeSeconds;
    double namedEntityDecayHalfLifeSeconds;
    double locationDecayHalfLifeSeconds;
}

- (void).cxx_destruct;

@end
