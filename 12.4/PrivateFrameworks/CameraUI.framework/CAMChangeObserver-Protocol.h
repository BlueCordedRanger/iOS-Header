//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMObservable;

@protocol CAMChangeObserver <NSObject>
- (void)observable:(CAMObservable *)arg1 didPublishChange:(unsigned long long)arg2 withContext:(void *)arg3;
@end
