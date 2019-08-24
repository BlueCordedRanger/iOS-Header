//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSData, NSURL;

__attribute__((visibility("hidden")))
@interface _NSItemProviderSandboxedResource : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _accessingSecurityScopedResource;
    NSURL *_resourceURL;
    NSData *_sandboxExtensionToken;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isAccessingSecurityScopedResource) _Bool accessingSecurityScopedResource; // @synthesize accessingSecurityScopedResource=_accessingSecurityScopedResource;
@property(copy, nonatomic) NSData *sandboxExtensionToken; // @synthesize sandboxExtensionToken=_sandboxExtensionToken;
@property(copy, nonatomic) NSURL *resourceURL; // @synthesize resourceURL=_resourceURL;
- (id)resolveURLAndReturnError:(id *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1 auditToken:(CDStruct_4c969caf)arg2 error:(id *)arg3;

@end
