//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSLayoutRule-Protocol.h>

@class NSDictionary, NSLayoutRect, NSString;

@interface NSVisualFormatLayoutRule : NSObject <NSLayoutRule>
{
    NSString *_visualFormatString;
    unsigned long long _formatOptions;
    NSDictionary *_metricMapping;
    NSDictionary *_rectMapping;
    NSLayoutRect *_containerRect;
}

+ (id)ruleWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;
+ (id)ruleWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 rects:(id)arg4 containerRect:(id)arg5;
@property(readonly, copy) NSString *ruleDescription;
@property(readonly, copy) NSString *description;
- (id)makeChildRules;
@property(readonly, copy) NSString *identifier;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 rects:(id)arg4 containerRect:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

