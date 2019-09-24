//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/EDSearchableIndexItem.h>

#import <Message/EFLoggable-Protocol.h>

@class NSString;

@interface MFSearchableIndexItem_iOS : EDSearchableIndexItem <EFLoggable>
{
}

+ (id)log;
- (id)fetchIndexableAttachments;
- (_Bool)_shouldAutoDownloadAttachment:(id)arg1;
- (void)addAttachmentAttributesToAttributeSet:(id)arg1;
- (_Bool)shouldExcludeFromIndex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
