//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAMPLikesMediaEntity : SABaseClientBoundCommand
{
}

+ (id)likesMediaEntityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)likesMediaEntity;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *influencedSharedUserId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
