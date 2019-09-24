//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSNumber, NSString;

@interface TIUserModelDataStoreEntry : NSObject
{
    NSDate *_timestamp;
    NSString *_key;
    NSString *_inputMode;
    NSNumber *_value;
    NSNumber *_secondaryValue;
    NSNumber *_realValue;
    NSData *_properties;
}

@property(retain) NSData *properties; // @synthesize properties=_properties;
@property(retain) NSNumber *realValue; // @synthesize realValue=_realValue;
@property(retain) NSNumber *secondaryValue; // @synthesize secondaryValue=_secondaryValue;
@property(retain) NSNumber *value; // @synthesize value=_value;
@property(retain) NSString *inputMode; // @synthesize inputMode=_inputMode;
@property(retain) NSString *key; // @synthesize key=_key;
@property(retain) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)initWithTimestamp:(id)arg1 withKey:(id)arg2 withInputMode:(id)arg3 withValue:(id)arg4 withSecondaryValue:(id)arg5 withRealValue:(id)arg6 withProperties:(id)arg7;

@end
