//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Preferences/NSCopying-Protocol.h>

@class NSDictionary;

@interface PSSpecifierUpdateContext : NSObject <NSCopying>
{
    _Bool _animated;
    _Bool _updateModelOnly;
    NSDictionary *_userInfo;
}

+ (id)contextWithUserInfo:(id)arg1;
+ (id)context;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool updateModelOnly; // @synthesize updateModelOnly=_updateModelOnly;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
