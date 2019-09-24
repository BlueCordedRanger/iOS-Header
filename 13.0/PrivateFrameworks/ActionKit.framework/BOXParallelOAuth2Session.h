//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/BOXOAuth2Session.h>

@class NSMutableSet;

@interface BOXParallelOAuth2Session : BOXOAuth2Session
{
    NSMutableSet *_expiredOAuth2Tokens;
}

@property(retain) NSMutableSet *expiredOAuth2Tokens; // @synthesize expiredOAuth2Tokens=_expiredOAuth2Tokens;
- (void).cxx_destruct;
- (_Bool)isInvalidGrantError:(id)arg1;
- (void)performRefreshTokenGrant:(id)arg1 newAccessTokenExpirationAt:(id)arg2 newRefreshTokenExpirationAt:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)performRefreshTokenGrant:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithClientID:(id)arg1 secret:(id)arg2 queueManager:(id)arg3 urlSessionManager:(id)arg4;

@end
