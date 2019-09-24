//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OCDReader.h>

@class OCCDecryptor;

__attribute__((visibility("hidden")))
@interface OCDEncryptedReader : OCDReader
{
    OCCDecryptor *mDecryptor;
}

@property(readonly, nonatomic) OCCDecryptor *decryptor; // @synthesize decryptor=mDecryptor;
- (void).cxx_destruct;
- (_Bool)retainDecryptorWithErrorCode:(int *)arg1;
- (void)useUnencryptedDocument;
- (id)defaultPassphrase;
- (void)restartReaderToUseDecryptedDocument;

@end
