//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCFaceDetailEditOptionSectionController.h>

@class NSMutableArray;

@interface NTKCFaceDetailEditOptionVerticalSectionController : NTKCFaceDetailEditOptionSectionController
{
}

- (void)_setupWithCollection:(id)arg1;
- (_Bool)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2;
- (void)reloadActionRow;
- (void)setSelectedOptions:(id)arg1;
- (void)faceDidChange;
- (void)didSelectRow:(long long)arg1;
- (_Bool)_canSelectRow:(long long)arg1;
- (id)initWithTableView:(id)arg1 face:(id)arg2 inGallery:(_Bool)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *rows; // @dynamic rows;

@end
