//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface HKDisplayCategoryController : NSObject
{
    NSMutableArray *_displayCategories;
    NSMutableDictionary *_displayCategoriesByCategoryID;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)categoryWithID:(long long)arg1;
- (id)allDisplayCategories;
- (void)_initializeDisplayCategories;
- (id)init;

@end
