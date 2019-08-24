//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSSortDescriptor.h>

@class NSDictionary;

@interface MPMultiSortDescriptor : NSSortDescriptor
{
    NSDictionary *_relatedProperties;
}

+ (id)sortDescriptorWithRelatedProperties:(id)arg1 ascending:(_Bool)arg2;
@property(copy, nonatomic) NSDictionary *relatedProperties; // @synthesize relatedProperties=_relatedProperties;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
