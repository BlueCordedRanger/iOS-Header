//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoardServices/RBSGrant.h>

@interface RBSResistTerminationGrant : RBSGrant
{
    unsigned char _resistance;
}

+ (id)grantWithResistance:(unsigned char)arg1;
@property(readonly, nonatomic) unsigned char resistance; // @synthesize resistance=_resistance;
- (id)_initWithResistance:(unsigned char)arg1;
- (id)succinctDescriptionBuilder;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;

@end
