//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/UIPickerViewDataSource-Protocol.h>
#import <HomeUI/UIPickerViewDelegate-Protocol.h>

@class NSArray, NSDateComponents, NSString, UIPickerView;
@protocol HUSignificantEventOffsetPickerDelegate;

@interface HUSignificantEventOffsetPickerCell : UITableViewCell <UIPickerViewDelegate, UIPickerViewDataSource>
{
    NSString *_significantEvent;
    NSDateComponents *_currentOffset;
    id <HUSignificantEventOffsetPickerDelegate> _delegate;
    NSDateComponents *_selectedOffset;
    UIPickerView *_pickerView;
    NSArray *_offsetDateComponentOptions;
}

+ (id)_defaultOffsetDateComponentOptions;
@property(retain, nonatomic) NSArray *offsetDateComponentOptions; // @synthesize offsetDateComponentOptions=_offsetDateComponentOptions;
@property(readonly, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) NSDateComponents *selectedOffset; // @synthesize selectedOffset=_selectedOffset;
@property(nonatomic) __weak id <HUSignificantEventOffsetPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDateComponents *currentOffset; // @synthesize currentOffset=_currentOffset;
@property(retain, nonatomic) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)_titleForOffsetComponents:(id)arg1;
- (void)_updateOffsetDateComponentOptions;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
