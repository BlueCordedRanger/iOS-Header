//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSSecureCoding-Protocol.h>

@interface WKBrowsingContextHandle : NSObject <NSSecureCoding>
{
    ObjectIdentifier_8136369e _pageID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic, getter=_pageID) ObjectIdentifier_8136369e pageID; // @synthesize pageID=_pageID;
- (id).cxx_construct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithPageID:(ObjectIdentifier_8136369e)arg1;

@end
