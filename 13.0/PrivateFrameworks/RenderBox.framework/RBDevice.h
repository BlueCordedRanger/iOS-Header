//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLCaptureScope, MTLDevice, OS_dispatch_queue;

@interface RBDevice : NSObject
{
    struct refcounted_ptr<RB::Device> _device;
    struct objc_ptr<NSObject<OS_dispatch_queue>*> _queue;
    struct atomic<unsigned int> _pending_collect;
}

+ (id)sharedDefaultDevice;
+ (id)sharedDevice:(id)arg1;
+ (_Bool)isSupported;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)collectResources;
@property(readonly, nonatomic) id <MTLCaptureScope> captureScope;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property(readonly, nonatomic) id <MTLDevice> device;
@property(readonly, nonatomic) struct Device *rb_device;
- (id)initWithDevice:(id)arg1;
- (void)dealloc;

@end
