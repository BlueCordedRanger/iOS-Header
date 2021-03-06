//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHMediaRequestContext.h>

@class NSProgress, PHVideoRequestOptions;

@interface PHVideoRequestContext : PHMediaRequestContext
{
    NSProgress *_progress;
    PHVideoRequestOptions *_videoOptions;
    long long _intent;
}

+ (long long)type;
@property(readonly, nonatomic) long long intent; // @synthesize intent=_intent;
@property(readonly, nonatomic) PHVideoRequestOptions *videoOptions; // @synthesize videoOptions=_videoOptions;
- (void).cxx_destruct;
- (void)processMediaResult:(id)arg1 forRequest:(id)arg2;
- (id)progresses;
- (CDUnknownBlockType)progressHandler;
- (_Bool)shouldReportProgress;
- (id)initialRequests;
- (_Bool)representsShareableHighQualityResource;
- (_Bool)isNetworkAccessAllowed;
- (id)_lazyProgress;
- (id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 options:(id)arg5 intent:(long long)arg6 resultHandler:(CDUnknownBlockType)arg7;

@end

