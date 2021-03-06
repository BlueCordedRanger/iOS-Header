//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDFKit/NSCopying-Protocol.h>

@class PDFFormPrivateVars;

__attribute__((visibility("hidden")))
@interface PDFForm : NSObject <NSCopying>
{
    PDFFormPrivateVars *_private;
}

- (void).cxx_destruct;
- (id)description;
- (void)resetFormExcludingFields:(id)arg1;
- (void)resetFormForFields:(id)arg1;
- (void)removeFormFieldWithFieldName:(id)arg1;
- (void)addFormField:(id)arg1;
- (struct CGPDFString *)defaultDAStringRef;
- (id)defaultStringValueForFieldNamed:(id)arg1;
- (id)stringValueForFieldNamed:(id)arg1;
- (void)setStringValue:(id)arg1 forFieldNamed:(id)arg2 postFormChangeNotification:(_Bool)arg3;
- (id)fieldNames;
- (id)document;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDocument:(id)arg1;
- (id)init;
- (void)setDocument:(id)arg1;
- (struct __CFDictionary *)createDictionaryRef;
- (void)addNeedsAppearanceToDictionaryRef:(struct __CFDictionary *)arg1;
- (id)fieldNamed:(id)arg1;
- (void)commonResetForm:(id)arg1 inclusive:(_Bool)arg2;

@end

