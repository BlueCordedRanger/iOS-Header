//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_nw_path;

@interface SONetworkIdentity : NSObject
{
    NSString *_networkFingerprint;
    NSString *_realm;
    NSString *_bundleIdentifier;
    NSObject<OS_nw_path> *_lastpath;
}

@property(retain, nonatomic) NSObject<OS_nw_path> *lastpath; // @synthesize lastpath=_lastpath;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *realm; // @synthesize realm=_realm;
@property(retain, nonatomic) NSString *networkFingerprint; // @synthesize networkFingerprint=_networkFingerprint;
- (void).cxx_destruct;
- (id)getInterfaceSignature:(id)arg1;
- (id)getVPNServerSignature:(id)arg1;
- (void)determineNetworkFingerprint;
- (id)initForRealm:(id)arg1 andBundleIdentifier:(id)arg2;

@end

