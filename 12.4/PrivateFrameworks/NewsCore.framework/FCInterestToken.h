//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FCInterestToken : NSObject
{
    CDUnknownBlockType _removeInterestBlock;
}

+ (id)interestTokenWithRemoveInterestBlock:(CDUnknownBlockType)arg1;
+ (id)interestTokenWithCallbackQueue:(id)arg1 removeInterestBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType removeInterestBlock; // @synthesize removeInterestBlock=_removeInterestBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCallbackQueue:(id)arg1 removeInterestBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end
