//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface AMSHTTPArchive : NSObject
{
    _Bool _compressed;
    NSData *_backingJSONData;
    NSData *_JSONData;
}

+ (double)_timeIntervalFromFilename:(id)arg1;
+ (id)_generateResponseDictionaryForMetrics:(id)arg1 responseData:(id)arg2;
+ (id)_generateRequestDictionaryForMetrics:(id)arg1 requestData:(id)arg2;
+ (id)_generateHeadersArrayForHTTPHeaders:(id)arg1;
+ (id)_generateContentDictionaryForResponse:(id)arg1 responseData:(id)arg2;
+ (id)_generateCommentsStringForMetrics:(id)arg1;
+ (id)_dateFormatterForTimeZone:(id)arg1;
+ (id)_createJSONObjectForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3;
+ (id)_createJSONObjectForEntries:(id)arg1;
+ (void)removeHTTPArchiveFilesOlderThanDate:(id)arg1;
+ (id)merge:(id)arg1 withEstimatedFileSizeLimit:(unsigned long long)arg2;
+ (id)merge:(id)arg1;
+ (id)directory;
@property(readonly, nonatomic) NSData *JSONData; // @synthesize JSONData=_JSONData;
@property(nonatomic, getter=isCompressed) _Bool compressed; // @synthesize compressed=_compressed;
@property(retain, nonatomic) NSData *backingJSONData; // @synthesize backingJSONData=_backingJSONData;
- (void).cxx_destruct;
- (_Bool)writeToDiskWithError:(id *)arg1 compressed:(_Bool)arg2;
- (id)_initWithJSONObject:(id)arg1;
- (id)initWithURLTaskInfo:(id)arg1;

@end

