//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@interface UIAutonomousSingleAppModeConfiguration : NSObject <NSCopying>
{
    unsigned long long _style;
}

+ (id)defaultConfigurationForStyle:(unsigned long long)arg1;
+ (id)defaultConfiguration;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
