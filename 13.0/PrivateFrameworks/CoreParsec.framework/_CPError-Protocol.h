//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol _CPError <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) double code;
@property(copy, nonatomic) NSString *reason;
@property(copy, nonatomic) NSString *domain;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
