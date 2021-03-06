//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataRequest.h>

@class NSString, UIColor, WBSTemplateIconMonogramConfiguration;

@interface WBSTemplateIconRequest : WBSSiteMetadataRequest
{
}

@property(readonly, nonatomic) _Bool saveToDisk;
@property(readonly, nonatomic) UIColor *overrideForegroundColor;
@property(readonly, nonatomic) WBSTemplateIconMonogramConfiguration *monogramConfiguration;
@property(readonly, copy, nonatomic) NSString *monogramTitle;
- (id)initWithURL:(id)arg1 title:(id)arg2 monogramConfiguration:(id)arg3 overrideForegroundColor:(id)arg4 saveToDisk:(_Bool)arg5;
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;

@end

