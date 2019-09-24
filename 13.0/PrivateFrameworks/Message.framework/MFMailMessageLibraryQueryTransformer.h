//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/EFLoggable-Protocol.h>
#import <Message/MFMessageCriterionConverterDelegate-Protocol.h>

@class EDMessagePersistence, MFMessageCriterionConverter, NSString;

@interface MFMailMessageLibraryQueryTransformer : NSObject <EFLoggable, MFMessageCriterionConverterDelegate>
{
    MFMessageCriterionConverter *_criterionConverter;
    EDMessagePersistence *_messagePersistence;
}

+ (id)log;
@property(readonly, nonatomic) __weak EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
@property(retain, nonatomic) MFMessageCriterionConverter *criterionConverter; // @synthesize criterionConverter=_criterionConverter;
- (void).cxx_destruct;
- (unsigned int)optionsForQuery:(id)arg1;
- (id)criterionForQuery:(id)arg1;
- (id)messageCriterionConverter:(id)arg1 expressionForConstantValue:(id)arg2 withCriterionType:(long long)arg3;
- (long long)messageCriterionConverter:(id)arg1 criterionTypeForKey:(id)arg2;
- (id)initWithMessagePersistence:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
