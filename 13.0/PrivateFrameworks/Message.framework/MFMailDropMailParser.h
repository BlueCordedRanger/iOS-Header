//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFMailDropMailParser : NSObject
{
}

+ (void)_parseDirectURL:(id)arg1 intoMetadata:(id)arg2;
+ (void)_parseWrappedURL:(id)arg1 intoMetadata:(id)arg2;
+ (void)parseURL:(id)arg1 intoMetadata:(id)arg2;
+ (_Bool)_domainIsWhitelisted:(id)arg1;
+ (id)parseHeaderValue:(id)arg1 forField:(id)arg2;
+ (id)parseExpiration:(double)arg1;
+ (id)_parseURLQuery:(id)arg1;

@end

