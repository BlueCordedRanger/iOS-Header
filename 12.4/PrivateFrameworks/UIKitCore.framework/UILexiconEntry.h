//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSString;

@interface UILexiconEntry : NSObject <NSCopying>
{
    NSString *_userInput;
    NSString *_documentText;
}

+ (id)_entryWithTILexiconEntry:(id)arg1;
@property(readonly, nonatomic) NSString *documentText; // @synthesize documentText=_documentText;
@property(readonly, nonatomic) NSString *userInput; // @synthesize userInput=_userInput;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
