//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateCircularSmallStackImage : CLKComplicationTemplate
{
    CLKImageProvider *_line1ImageProvider;
    CLKTextProvider *_line2TextProvider;
}

+ (struct CGSize)_imageSize;
@property(copy, nonatomic) CLKTextProvider *line2TextProvider; // @synthesize line2TextProvider=_line2TextProvider;
@property(copy, nonatomic) CLKImageProvider *line1ImageProvider; // @synthesize line1ImageProvider=_line1ImageProvider;
- (void).cxx_destruct;
- (void)_enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
