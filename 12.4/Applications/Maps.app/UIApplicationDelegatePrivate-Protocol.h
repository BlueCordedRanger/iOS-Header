//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AFSiriTask, CKShareMetadata, NSDictionary, NSString, UIApplication, UIEvent, _UICanvas;

@protocol UIApplicationDelegatePrivate <NSObject>

@optional
- (_Bool)applicationSupportsSecureStateRestoration:(UIApplication *)arg1;
- (void)_application:(UIApplication *)arg1 willConnectCanvas:(_UICanvas *)arg2;
- (void)application:(UIApplication *)arg1 userAcceptedCloudKitShareWithMetadata:(CKShareMetadata *)arg2;
- (void)_application:(UIApplication *)arg1 handleSiriTask:(AFSiriTask *)arg2;
- (void)_application:(UIApplication *)arg1 didReceiveViewServiceRequestForViewControllerClassName:(NSString *)arg2;
- (_Bool)_applicationLaunchesIntoPortrait:(UIApplication *)arg1;
- (void)_application:(UIApplication *)arg1 statusBarTouchesEnded:(UIEvent *)arg2;
- (void)application:(UIApplication *)arg1 didFinishLaunchingSuspendedWithOptions:(NSDictionary *)arg2;
@end

