//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/__HMFMessageHandler.h>

__attribute__((visibility("hidden")))
@interface __HMFBlockMessageHandler : __HMFMessageHandler
{
    CDUnknownBlockType _handler;
}

@property(readonly, copy) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (_Bool)invokeWithMessage:(id)arg1;

@end
