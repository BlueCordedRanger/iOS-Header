//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPCGuidanceStateReply;

@protocol ServiceBundleXPCInterface <NSObject>
- (void)setShowThermalWarningAlert:(_Bool)arg1;
- (void)guidanceStateUpdated:(IPCGuidanceStateReply *)arg1;
@end
