//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKMapItem.h>

#import <ContentKit/WFSerializableContent-Protocol.h>

@class NSString;

@interface MKMapItem (WFSerializableContent) <WFSerializableContent>
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
- (id)wfSerializedRepresentation;
- (id)wfName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

