//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIAction-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIAction : NSObject <VUIAction>
{
}

+ (id)actionWithDictionary:(id)arg1 viewElement:(id)arg2 appContext:(id)arg3;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isAccountRequired;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
