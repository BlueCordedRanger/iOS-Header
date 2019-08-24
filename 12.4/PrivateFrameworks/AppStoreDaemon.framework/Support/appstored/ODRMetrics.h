//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ODRMetrics : NSObject
{
    double _lastManifestReportTimeStamp;
    double _lastAssetPackReportTimeStamp;
}

+ (id)sharedInstance;
- (void)reportAssetPackFetchFailedForAssetPackID:(id)arg1 applicationID:(id)arg2 adamID:(id)arg3 url:(id)arg4 code:(long long)arg5;
- (void)reportManifestFetchFailedForApplicationID:(id)arg1 adamID:(id)arg2 externalVersion:(id)arg3 code:(long long)arg4;
- (void)incrementODRFailures;
- (void)incrementODRCancelled;
- (void)incrementODRCompleted;
- (void)incrementODRInitiated;
- (void)addBytesDownloaded:(unsigned long long)arg1;
- (void)addBytesPurged:(unsigned long long)arg1;
- (void)incrementPurgingRequests;

@end
