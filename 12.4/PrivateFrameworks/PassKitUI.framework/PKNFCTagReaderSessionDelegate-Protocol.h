//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSArray, PKNFCTagReaderSession;

@protocol PKNFCTagReaderSessionDelegate <NSObject>

@optional
- (void)nfcTagReaderSessionDidEndUnexpectedly:(PKNFCTagReaderSession *)arg1;
- (void)nfcTagReaderSession:(PKNFCTagReaderSession *)arg1 didDetectTags:(NSArray *)arg2;
@end
