//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivityViewController.h>

@class SKUIClientContext;

@interface SKUIProductPageActivityViewController : UIActivityViewController
{
    SKUIClientContext *_clientContext;
}

- (void).cxx_destruct;
- (id)_applicationActivitiesForProductPageItem:(id)arg1 clientContext:(id)arg2;
- (id)_activityItemsForProductPageItemProvider:(CDUnknownBlockType)arg1 clientContext:(id)arg2;
- (id)_activityItemsForProductPageItem:(id)arg1 clientContext:(id)arg2;
- (id)_titleForActivity:(id)arg1;
- (id)initWithProductPageItemProvider:(CDUnknownBlockType)arg1 clientContext:(id)arg2;
- (id)initWithProductPageItem:(id)arg1 clientContext:(id)arg2;

@end
