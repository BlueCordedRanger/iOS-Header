//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSDestination.h>

@class ENGroup;

@interface IDSDestinationEngram : IDSDestination
{
    ENGroup *_underlyingGroup;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, retain, nonatomic) ENGroup *underlyingGroup; // @synthesize underlyingGroup=_underlyingGroup;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)groupID;
- (id)destinationURIs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithENGroup:(id)arg1;

@end
