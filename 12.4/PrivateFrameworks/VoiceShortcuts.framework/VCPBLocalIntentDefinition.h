//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcuts/VCPBIntentDefinition.h>

#import <VoiceShortcuts/VCPBIntentDefinitionHashable-Protocol.h>
#import <VoiceShortcuts/VCPBLocalIntentDefinitionFileProvider-Protocol.h>

@class LSBundleProxy, NSArray, NSString, VCIntentDefinitionSyncState;

@interface VCPBLocalIntentDefinition : VCPBIntentDefinition <VCPBLocalIntentDefinitionFileProvider, VCPBIntentDefinitionHashable>
{
    LSBundleProxy *_bundleProxy;
    _Bool _filesLoaded;
    NSArray *_fileURLs;
    NSString *_cachedChecksum;
    VCIntentDefinitionSyncState *_syncedState;
}

@property(retain, nonatomic) VCIntentDefinitionSyncState *syncedState; // @synthesize syncedState=_syncedState;
- (void).cxx_destruct;
- (void)performBlockWithLoadedFiles:(CDUnknownBlockType)arg1;
- (id)checksum;
- (double)associatedAppRegistrationDate;
- (id)syncStateObject;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)unloadFiles;
- (void)loadAllFiles;
- (_Bool)hasFilesThatNeedSyncingToWatch;
- (id)fileURLs;
- (id)initWithBundleProxy:(id)arg1;
- (id)initWithAppBundleID:(id)arg1;

@end
