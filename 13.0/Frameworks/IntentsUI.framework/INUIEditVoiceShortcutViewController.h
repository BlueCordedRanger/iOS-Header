//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <IntentsUI/INUIVoiceShortcutRemoteViewControllerDelegate-Protocol.h>
#import <IntentsUI/_UIRemoteViewControllerContaining-Protocol.h>

@class INUIVoiceShortcutHostViewController, NSString, _UIRemoteViewController;
@protocol INUIEditVoiceShortcutViewControllerDelegate;

@interface INUIEditVoiceShortcutViewController : UIViewController <INUIVoiceShortcutRemoteViewControllerDelegate, _UIRemoteViewControllerContaining>
{
    id <INUIEditVoiceShortcutViewControllerDelegate> _delegate;
    INUIVoiceShortcutHostViewController *_remoteHostViewController;
}

+ (void)initialize;
@property(retain, nonatomic, getter=_remoteHostViewController, setter=_setRemoteHostViewController:) INUIVoiceShortcutHostViewController *remoteHostViewController; // @synthesize remoteHostViewController=_remoteHostViewController;
@property(nonatomic) __weak id <INUIEditVoiceShortcutViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(id)arg1;
- (void)remoteViewControllerDidUpdateVoiceShortcut:(id)arg1 error:(id)arg2;
- (void)loadView;
- (id)initWithVoiceShortcut:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
