//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSString;

@interface LiveTraceController : PSListController
{
    NSString *_enabledTracer;
    NSString *_enabledTrigger;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)specifiers;
- (void)setTracingEnabled:(id)arg1 specifier:(id)arg2;
- (void)updateDefaults;
- (void)updateEnabled;
- (id)tracingEnabled:(id)arg1;

@end
