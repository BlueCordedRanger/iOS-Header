//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class CTDeviceIdentifier, NSArray;

@interface CTLocalDevice : NSObject <NSSecureCoding>
{
    CTDeviceIdentifier *_deviceID;
    NSArray *_installedPlans;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *installedPlans; // @synthesize installedPlans=_installedPlans;
@property(retain, nonatomic) CTDeviceIdentifier *deviceID; // @synthesize deviceID=_deviceID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)EID;
- (unsigned long long)deviceType;
- (id)deviceName;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end
