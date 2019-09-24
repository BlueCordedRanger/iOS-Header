//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAssetCountObserverDelegate-Protocol.h>
#import <PhotosUICore/PXSmartAlbumConditionDelegate-Protocol.h>
#import <PhotosUICore/PXSmartAlbumQuery-Protocol.h>

@class NSArray, NSMutableArray, NSString, PHAssetCollection, PHCollectionList, PHPhotoLibrary, PLQuery, PXAssetCountObserver, PXLabeledValue, PXSmartAlbumPhotoKitEditingContext;
@protocol PXSmartAlbumQueryDelegate;

@interface PXSmartAlbumPhotoKitQuery : NSObject <PXSmartAlbumConditionDelegate, PXAssetCountObserverDelegate, PXSmartAlbumQuery>
{
    NSMutableArray *_conditions;
    PHAssetCollection *_albumToEdit;
    PHCollectionList *_collectionList;
    PHPhotoLibrary *_photoLibrary;
    PXSmartAlbumPhotoKitEditingContext *_editingContext;
    PLQuery *_query;
    PXAssetCountObserver *_assetCountObserver;
    _Bool _canPersistChanges;
    NSString *_title;
    NSArray *_conjunctionValues;
    PXLabeledValue *_conjunctionValue;
    NSString *_statusString;
    id <PXSmartAlbumQueryDelegate> _delegate;
}

+ (void)_editSmartAlbum:(id)arg1 title:(id)arg2 query:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)_createSmartAlbumWithTitle:(id)arg1 inCollectionList:(id)arg2 query:(id)arg3 photoLibrary:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (id)queryWithSmartAlbum:(id)arg1 collectionList:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;
@property(nonatomic) __weak id <PXSmartAlbumQueryDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property(nonatomic) _Bool canPersistChanges; // @synthesize canPersistChanges=_canPersistChanges;
@property(retain, nonatomic) NSArray *conditions; // @synthesize conditions=_conditions;
@property(readonly, nonatomic) NSArray *conjunctionValues; // @synthesize conjunctionValues=_conjunctionValues;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)assetCountObserver:(id)arg1 didChangeNumberOfAssets:(long long)arg2;
- (void)_updateStatusString;
- (void)conditionDidChange:(id)arg1;
- (void)_updateQueryFromConditions;
- (void)_updateAssetCountObserver;
- (void)_updateCanPersistChanges;
- (void)persistChangesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeCondition:(id)arg1;
- (id)replaceCondition:(id)arg1 withConditionOfType:(long long)arg2;
- (id)addNewConditionAfterCondition:(id)arg1;
@property(retain, nonatomic) PXLabeledValue *conjunctionValue; // @synthesize conjunctionValue=_conjunctionValue;
- (id)_initWithSmartAlbum:(id)arg1 collectionList:(id)arg2 photoLibrary:(id)arg3 query:(id)arg4 editingContext:(id)arg5 conditions:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
