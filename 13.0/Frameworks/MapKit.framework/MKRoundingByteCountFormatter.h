//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MKRoundingByteCountFormatter : NSObject
{
}

+ (id)stringFromByteCountWithRoundingTo10MB:(long long)arg1;
+ (id)stringFromByteCountWithRoundingTo5MB:(long long)arg1;
+ (id)stringFromByteCountWithRoundingTo1MB:(long long)arg1;
+ (long long)roundByteCount:(long long)arg1 toNearest:(long long)arg2;
+ (id)stringFromByteCount:(long long)arg1 roundedToNearest:(long long)arg2;

@end
