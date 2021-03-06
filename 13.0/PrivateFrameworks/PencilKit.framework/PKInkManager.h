//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PKInkManager : NSObject
{
    NSMutableDictionary *_inks;
}

+ (void)clearCachedManager;
+ (id)defaultInkManager;
@property(readonly, nonatomic) NSMutableDictionary *inks; // @synthesize inks=_inks;
- (void).cxx_destruct;
- (id)inkBehaviorForIdentifier:(id)arg1 version:(unsigned long long)arg2 variant:(id)arg3;
- (id)inkBehaviorForIdentifier:(id)arg1 variant:(id)arg2;
- (id)init;

@end

