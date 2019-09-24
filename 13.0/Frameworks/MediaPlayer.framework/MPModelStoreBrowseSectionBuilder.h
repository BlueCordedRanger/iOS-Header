//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPPropertySet;

@interface MPModelStoreBrowseSectionBuilder : NSObject
{
    struct {
        unsigned int initialized:1;
        unsigned int title:1;
        unsigned int type:1;
        unsigned int loadAdditionalContentURL:1;
        unsigned int previouslyRetrievedNestedResponse:1;
        unsigned int uniformContentItemType:1;
        unsigned int memberOfChartSet:1;
        unsigned int displaysAsGridCellInCarPlay:1;
        unsigned int brick:1;
    } _requestedBrowseSectionProperties;
    MPPropertySet *_requestedPropertySet;
}

+ (id)allSupportedInternalOnlyProperties;
+ (id)allSupportedPropertiesIncludingInternalOnlyProperties:(_Bool)arg1;
@property(readonly, nonatomic) MPPropertySet *requestedPropertySet; // @synthesize requestedPropertySet=_requestedPropertySet;
- (void).cxx_destruct;
- (id)modelObjectWithTitle:(id)arg1 loadAdditionalContentURL:(id)arg2 uniformContentItemType:(long long)arg3 isMemberOfChartSet:(_Bool)arg4 isBrick:(_Bool)arg5 displaysAsGridCellInCarPlay:(_Bool)arg6 previouslyRetrievedNestedResponse:(id)arg7 onlyContainsEditorialElements:(_Bool)arg8;
- (id)modelObjectWithTitle:(id)arg1 loadAdditionalContentURL:(id)arg2 uniformContentItemType:(long long)arg3 isMemberOfChartSet:(_Bool)arg4 isBrick:(_Bool)arg5 previouslyRetrievedNestedResponse:(id)arg6;
@property(readonly, nonatomic) MPPropertySet *requestedPropertySetExcludingInternalOnlyProperties;
- (id)initWithRequestedPropertySet:(id)arg1;

@end
