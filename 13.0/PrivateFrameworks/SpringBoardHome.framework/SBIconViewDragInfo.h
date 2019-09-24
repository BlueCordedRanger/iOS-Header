//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface SBIconViewDragInfo : NSObject <NSSecureCoding, BSDescriptionProviding>
{
    NSString *_bundleIdentifier;
    NSURL *_launchURL;
    long long _startLocation;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long startLocation; // @synthesize startLocation=_startLocation;
@property(copy, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
