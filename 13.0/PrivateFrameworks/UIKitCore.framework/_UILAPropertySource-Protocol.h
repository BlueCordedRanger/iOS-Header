//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSLayoutConstraint, NSSet;

@protocol _UILAPropertySource <NSObject>
@property(readonly, nonatomic) NSSet *invalidBaselineConstraints;
@property(readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property(readonly, nonatomic) NSSet *_newlyHiddenItems;
@property(nonatomic) _Bool layoutUsesCanvasMarginsWhenFilling;
@property(nonatomic) _Bool layoutFillsCanvas;
@property(nonatomic) long long axis;
- (void)_invalidateBaselineConstraint:(NSLayoutConstraint *)arg1;
@end
