//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeSharing/HSResponse.h>

@class NSData, NSString;

@interface HSNowPlayingArtworkResponse : HSResponse
{
    NSData *_artworkData;
    NSString *_artworkMIMEType;
}

@property(retain, nonatomic) NSString *artworkMIMEType; // @synthesize artworkMIMEType=_artworkMIMEType;
@property(retain, nonatomic) NSData *artworkData; // @synthesize artworkData=_artworkData;
- (void).cxx_destruct;

@end
