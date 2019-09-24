//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBDataString;

@protocol _INPBDataString <NSObject>
+ (Class)alternativesType;
@property(readonly, nonatomic) _Bool hasVocabularyIdentifier;
@property(copy, nonatomic) NSString *vocabularyIdentifier;
@property(readonly, nonatomic) _Bool hasPronunciationHint;
@property(copy, nonatomic) NSString *pronunciationHint;
@property(readonly, nonatomic) _Bool hasLocalizedValue;
@property(copy, nonatomic) NSString *localizedValue;
@property(readonly, nonatomic) unsigned long long alternativesCount;
@property(copy, nonatomic) NSArray *alternatives;
- (_INPBDataString *)alternativesAtIndex:(unsigned long long)arg1;
- (void)addAlternatives:(_INPBDataString *)arg1;
- (void)clearAlternatives;
@end
