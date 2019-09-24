//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MKAnnotation-Protocol.h"

@class GEOSharedNavState, NSString;

__attribute__((visibility("hidden")))
@interface SharedTripUserAnnotation : NSObject <MKAnnotation>
{
    GEOSharedNavState *_state;
    struct CLLocationCoordinate2D _coordinate;
}

@property(retain, nonatomic) GEOSharedNavState *state; // @synthesize state=_state;
- (void).cxx_destruct;
- (_Bool)showsBalloonCallout;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;

@end
