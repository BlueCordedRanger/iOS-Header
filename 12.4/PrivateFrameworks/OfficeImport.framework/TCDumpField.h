//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TCDumpType;

__attribute__((visibility("hidden")))
@interface TCDumpField : NSObject
{
    TCDumpType *mType;
    NSString *mName;
}

- (id)name;
- (id)type;
- (id)initWithType:(id)arg1 name:(id)arg2;

@end
