//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteUI/RUIHTTPRequest.h>

#import <RemoteUI/NSURLSessionTaskDelegate-Protocol.h>

@class NSString, NSURL, RUIParser, RUIStyle, _RUILoaderSessionDelegateAdapter;
@protocol RUIParserDelegate;

@interface RUILoader : RUIHTTPRequest <NSURLSessionTaskDelegate>
{
    RUIParser *_parser;
    NSURL *_url;
    _RUILoaderSessionDelegateAdapter *_sessionDelegateAdapter;
    _Bool _allowNonSecureHTTP;
    id <RUIParserDelegate> _parserDelegate;
    RUIStyle *_style;
}

@property(retain, nonatomic) RUIStyle *style; // @synthesize style=_style;
@property(nonatomic) __weak id <RUIParserDelegate> parserDelegate; // @synthesize parserDelegate=_parserDelegate;
@property(nonatomic) _Bool allowNonSecureHTTP; // @synthesize allowNonSecureHTTP=_allowNonSecureHTTP;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)receivedValidResponse:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)webViewFinishedLoading;
- (void)didParseData;
- (_Bool)anyWebViewLoading;
- (void)allWebViewsFinishedLoading;
- (void)_finishLoad;
- (void)parseData:(id)arg1;
- (id)URL;
- (void)loadXMLUIWithData:(id)arg1 baseURL:(id)arg2;
- (void)loadXMLUIWithRequest:(id)arg1;
- (void)loadXMLUIWithURL:(id)arg1;
- (id)urlSessionDelegate;
- (id)sessionConfiguration;
- (void)shouldLoadRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleShouldLoadRequestResult:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadRequest:(id)arg1;
- (void)cancel;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
