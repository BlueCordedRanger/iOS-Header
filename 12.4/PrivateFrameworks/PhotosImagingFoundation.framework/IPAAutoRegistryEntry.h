//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IPAAutoRegistryEntry : NSObject
{
    _Bool _persistable;
    Class _autoCalculatorClass;
    Class _autoSettingsClass;
}

@property(nonatomic) _Bool persistable; // @synthesize persistable=_persistable;
@property(retain, nonatomic) Class autoSettingsClass; // @synthesize autoSettingsClass=_autoSettingsClass;
@property(retain, nonatomic) Class autoCalculatorClass; // @synthesize autoCalculatorClass=_autoCalculatorClass;
- (void).cxx_destruct;

@end
