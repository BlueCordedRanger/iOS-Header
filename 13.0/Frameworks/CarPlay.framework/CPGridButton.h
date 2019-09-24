//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlay/CPControl-Protocol.h>
#import <CarPlay/NSSecureCoding-Protocol.h>

@class CPImageSet, NSArray, NSString, NSUUID, UIImage;
@protocol CPControlDelegate;

@interface CPGridButton : NSObject <CPControl, NSSecureCoding>
{
    _Bool _enabled;
    NSUUID *_identifier;
    NSArray *_titleVariants;
    CDUnknownBlockType _handler;
    CPImageSet *_imageSet;
    id <CPControlDelegate> _delegate;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak id <CPControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CPImageSet *imageSet; // @synthesize imageSet=_imageSet;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) NSArray *titleVariants; // @synthesize titleVariants=_titleVariants;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *image;
- (void)handlePrimaryAction;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)initWithTitleVariants:(id)arg1 image:(id)arg2 handler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
