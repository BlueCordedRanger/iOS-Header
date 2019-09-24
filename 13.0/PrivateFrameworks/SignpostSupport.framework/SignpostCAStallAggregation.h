//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SignpostSupport/NSCopying-Protocol.h>

@class NSDictionary, SignpostCAProcessStallAggregation;

@interface SignpostCAStallAggregation : NSObject <NSCopying>
{
    SignpostCAProcessStallAggregation *_systemAggregation;
    NSDictionary *_executablePathToStallAggregation;
}

@property(readonly, nonatomic) NSDictionary *executablePathToStallAggregation; // @synthesize executablePathToStallAggregation=_executablePathToStallAggregation;
@property(readonly, nonatomic) SignpostCAProcessStallAggregation *systemAggregation; // @synthesize systemAggregation=_systemAggregation;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)_addDuration:(unsigned long long)arg1 ofType:(unsigned char)arg2 procExecutablePath:(id)arg3 responsiblePID:(int)arg4 aggregateForSystem:(_Bool)arg5;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_addSystemDuration:(unsigned long long)arg1 ofType:(unsigned char)arg2;

@end
