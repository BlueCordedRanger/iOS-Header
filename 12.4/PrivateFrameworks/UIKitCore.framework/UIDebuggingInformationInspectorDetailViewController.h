//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/UITableViewDataSource-Protocol.h>
#import <UIKitCore/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationInspectorDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    UIView *_inspectedView;
    NSArray *_data;
}

@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) UIView *inspectedView; // @synthesize inspectedView=_inspectedView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_visibleSwitchValueChanged:(id)arg1;
- (void)_sliderValueChanged:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)createDataItems;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)inspectView:(id)arg1;
- (void)viewDidLoad;
- (void)_forceViewLayout;
- (void)_flush;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
