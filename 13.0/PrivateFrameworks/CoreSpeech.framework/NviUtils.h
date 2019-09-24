//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NviUtils : NSObject
{
}

+ (_Bool)createDirAtPath:(id)arg1;
+ (id)getValueFromDictionaryOfDictionaries:(id)arg1 keypath:(id)arg2;
+ (id)readJsonDictionaryAt:(id)arg1;
+ (double)getVoiceTriggerEndSecsFromVTEI:(id)arg1;
+ (long long)getVoiceTriggerEndSampleCountFromVTEI:(id)arg1;
+ (id)timeStampString;
+ (_Bool)_createDirAtPath:(id)arg1;
+ (unsigned long long)nviDataSourceTypeForStr:(id)arg1;
+ (id)strRepForNviDataSourceType:(unsigned long long)arg1;
+ (unsigned long long)nviSignalTypeForStr:(id)arg1;
+ (id)strRepForNviSignalMask:(unsigned long long)arg1;
+ (id)strRepForNviSignalType:(unsigned long long)arg1;
+ (_Bool)isNviEnabled;

@end
