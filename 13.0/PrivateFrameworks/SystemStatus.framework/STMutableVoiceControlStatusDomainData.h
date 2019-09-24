//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SystemStatus/STVoiceControlStatusDomainData.h>

#import <SystemStatus/STMutableStatusDomainData-Protocol.h>
#import <SystemStatus/STMutableStatusDomainDataDifferencing-Protocol.h>

@class NSString;

@interface STMutableVoiceControlStatusDomainData : STVoiceControlStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>
{
}

- (_Bool)applyDiff:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) unsigned long long listeningState; // @dynamic listeningState;
@property(nonatomic, getter=isVoiceControlActive) _Bool voiceControlActive; // @dynamic voiceControlActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
