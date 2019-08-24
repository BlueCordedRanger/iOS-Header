//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable;

@interface _CNDistinctUntilChangedObservable : CNObservable
{
    id <CNObservable> _observable;
    id _lastObservedResult;
}

- (void).cxx_destruct;
- (_Bool)_resultIsDistinctFromLastResult:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1;

@end
