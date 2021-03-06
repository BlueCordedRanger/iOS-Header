//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HeartRhythmUI/HROnboardingPageViewControllerDelegate-Protocol.h>
#import <HeartRhythmUI/UINavigationControllerDelegate-Protocol.h>

@class HKDateCache, HKHealthStore, HKHeartRhythmAvailability, HROnboardingSequence, NPSManager, NSMutableDictionary, NSString, UINavigationController;
@protocol HROnboardingManagerDelegate;

@interface HROnboardingManager : NSObject <UINavigationControllerDelegate, HROnboardingPageViewControllerDelegate>
{
    _Bool _firstTimeOnboarding;
    NSMutableDictionary *_userInfo;
    UINavigationController *_navigationController;
    HROnboardingSequence *_sequence;
    unsigned long long _currentPageNumber;
    long long _onboardingIntent;
    NPSManager *_nanoPreferenceSyncManager;
    HKHealthStore *_healthStore;
    HKHeartRhythmAvailability *_availability;
    HKDateCache *_dateCache;
    id <HROnboardingManagerDelegate> _onboardingManagerDelegate;
    NSString *_productType;
}

@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(nonatomic) __weak id <HROnboardingManagerDelegate> onboardingManagerDelegate; // @synthesize onboardingManagerDelegate=_onboardingManagerDelegate;
@property(retain, nonatomic) HKDateCache *dateCache; // @synthesize dateCache=_dateCache;
@property(retain, nonatomic) HKHeartRhythmAvailability *availability; // @synthesize availability=_availability;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(retain, nonatomic) NPSManager *nanoPreferenceSyncManager; // @synthesize nanoPreferenceSyncManager=_nanoPreferenceSyncManager;
@property(nonatomic) long long onboardingIntent; // @synthesize onboardingIntent=_onboardingIntent;
@property(nonatomic) unsigned long long currentPageNumber; // @synthesize currentPageNumber=_currentPageNumber;
@property(retain, nonatomic) HROnboardingSequence *sequence; // @synthesize sequence=_sequence;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) _Bool firstTimeOnboarding; // @synthesize firstTimeOnboarding=_firstTimeOnboarding;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)_didStepBackward;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_wrappingUpOnboarding;
- (void)_advancingToOnboardingPageNumber:(long long)arg1;
- (void)notNowTapped;
- (void)stepForward;
- (id)onboardingNavigationController;
- (id)initWithHealthStore:(id)arg1 dateCache:(id)arg2 onboardingIntent:(long long)arg3;
- (id)initWithHealthStore:(id)arg1 dateCache:(id)arg2 onboardingIntent:(long long)arg3 delegate:(id)arg4;
- (id)initWithHealthStore:(id)arg1 dateCache:(id)arg2 onboardingIntent:(long long)arg3 delegate:(id)arg4 firstTimeOnboarding:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

