//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, SBIconModel;

@interface SBIconPreviousLocationTracker : NSObject
{
    NSMapTable *_previousIconLocations;
    SBIconModel *_iconModel;
}

@property(retain, nonatomic) SBIconModel *iconModel; // @synthesize iconModel=_iconModel;
- (void).cxx_destruct;
- (id)previousLocationInfoForIcon:(id)arg1;
- (void)captureLocationInfoForIcon:(id)arg1 inModel:(id)arg2;

@end
