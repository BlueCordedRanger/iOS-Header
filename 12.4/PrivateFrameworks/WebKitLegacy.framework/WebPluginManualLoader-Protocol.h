//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSError, NSURLResponse, WAKView;

@protocol WebPluginManualLoader
- (void)pluginViewFinishedLoading:(WAKView *)arg1;
- (void)pluginView:(WAKView *)arg1 receivedError:(NSError *)arg2;
- (void)pluginView:(WAKView *)arg1 receivedData:(NSData *)arg2;
- (void)pluginView:(WAKView *)arg1 receivedResponse:(NSURLResponse *)arg2;
@end
