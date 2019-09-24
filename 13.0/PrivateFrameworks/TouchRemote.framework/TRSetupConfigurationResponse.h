//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRResponseMessage.h>

@class NSSet;

@interface TRSetupConfigurationResponse : TRResponseMessage
{
    _Bool _needsNetwork;
    NSSet *_unauthenticatedAccountServices;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSSet *unauthenticatedAccountServices; // @synthesize unauthenticatedAccountServices=_unauthenticatedAccountServices;
@property(nonatomic) _Bool needsNetwork; // @synthesize needsNetwork=_needsNetwork;
- (void).cxx_destruct;
- (id)_stringFromAccountServices:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
