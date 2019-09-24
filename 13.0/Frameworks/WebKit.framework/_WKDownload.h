//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSCopying-Protocol.h>
#import <WebKit/WKObject-Protocol.h>

@class NSArray, NSData, NSString, NSURLRequest, WKWebView;

@interface _WKDownload : NSObject <WKObject, NSCopying>
{
    struct ObjectStorage<WebKit::DownloadProxy> _download;
}

@property(readonly) struct Object *_apiObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *resumeData;
@property(readonly, nonatomic) _Bool wasUserInitiated;
@property(readonly, copy, nonatomic) NSArray *redirectChain;
@property(readonly, nonatomic) __weak WKWebView *originatingWebView;
@property(readonly, nonatomic) NSURLRequest *request;
- (void)publishProgressAtURL:(id)arg1;
- (void)cancel;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
