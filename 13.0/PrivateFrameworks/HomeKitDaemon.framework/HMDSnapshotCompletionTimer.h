//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFTimer.h>

@class HMDSnapshotSession;

@interface HMDSnapshotCompletionTimer : HMFTimer
{
    HMDSnapshotSession *_snapshotSession;
}

@property(readonly, nonatomic) __weak HMDSnapshotSession *snapshotSession; // @synthesize snapshotSession=_snapshotSession;
- (void).cxx_destruct;
- (id)initWithSnapshotSession:(id)arg1 timer:(double)arg2;

@end
