//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSNumber;

@interface LoadPassbookPassOperation : ISOperation
{
    NSNumber *_accountID;
    CDUnknownBlockType _outputBlock;
}

- (void)run;
@property(copy) CDUnknownBlockType outputBlock;
@property(readonly) NSNumber *accountIdentifier;
- (void)dealloc;
- (id)initWithAccountIdentifier:(id)arg1;

@end
