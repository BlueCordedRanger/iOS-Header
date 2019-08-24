//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSource.h>

@class NSArray;

@interface PXAggregatedDataSource : PXSectionedDataSource
{
    NSArray *_dataSections;
}

@property(readonly, nonatomic) NSArray *dataSections; // @synthesize dataSections=_dataSections;
- (void).cxx_destruct;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)init;
- (id)initWithDataSources:(id)arg1;
- (id)initWithDataSections:(id)arg1;

@end
