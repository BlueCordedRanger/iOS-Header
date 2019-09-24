//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DACalDAV/CalDAVCalendar-Protocol.h>

@class MobileCalDAVPrincipal, NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString, NSTimeZone, NSURL, REMAccount, REMList;
@protocol CalDAVPrincipal;

@interface MobileCalDAVCalendar : NSObject <CalDAVCalendar>
{
    MobileCalDAVPrincipal *_principal;
    NSString *_calendarURLString;
    _Bool _isScheduleOutbox;
    _Bool _isEnabled;
    _Bool _isAffectingAvailability;
    _Bool _wasModifiedLocally;
    _Bool _needsResync;
    _Bool _didResync;
    _Bool _isDirty;
    _Bool _needsPublishUpdate;
    NSString *_guid;
    unsigned long long _numDownloadedElements;
    unsigned long long _numUploadedElements;
    NSMutableDictionary *_deletedCalendarItems;
    NSArray *_syncActions;
    NSArray *_shareeActions;
    NSArray *_itemsToReportAsJunk;
    NSDictionary *_hrefsToModDeleteActions;
    NSDictionary *_uuidsToAddActions;
    NSMutableDictionary *_URLToEtagMap;
    REMList *_rem_calCalendar;
    NSArray *_rem_cachedFetchedRemindersForMergeSync;
}

+ (id)rem_deletedCalendarsWithChangeTrackingHelper:(id)arg1 inPrincipal:(id)arg2;
+ (id)rem_modifiedCalendarsWithChangeTrackingHelper:(id)arg1 inPrincipal:(id)arg2;
+ (id)rem_addedCalendarsWithChangeTrackingHelper:(id)arg1 inPrincipal:(id)arg2;
+ (id)_rem_changedListsOfChangeType:(long long)arg1 withChangeTrackingHelper:(id)arg2 inPrincipal:(id)arg3;
+ (void)rem_clearListObjectIDCache;
+ (id)rem_cachedListObjectIDForURLString:(id)arg1;
+ (void)rem_removeListObjectIDCacheEntryForCalendarURLString:(id)arg1;
+ (void)rem_cacheListObjectID:(id)arg1 forCalendarURLString:(id)arg2;
+ (id)_rem_calURLToREMObjectIDCache;
+ (id)calendarWithREMList:(id)arg1 principal:(id)arg2;
@property(retain, nonatomic) NSArray *rem_cachedFetchedRemindersForMergeSync; // @synthesize rem_cachedFetchedRemindersForMergeSync=_rem_cachedFetchedRemindersForMergeSync;
@property(retain, nonatomic) REMList *rem_calCalendar; // @synthesize rem_calCalendar=_rem_calCalendar;
@property(retain, nonatomic) NSMutableDictionary *URLToEtagMap; // @synthesize URLToEtagMap=_URLToEtagMap;
@property(retain, nonatomic) NSDictionary *uuidsToAddActions; // @synthesize uuidsToAddActions=_uuidsToAddActions;
@property(retain, nonatomic) NSDictionary *hrefsToModDeleteActions; // @synthesize hrefsToModDeleteActions=_hrefsToModDeleteActions;
@property(retain, nonatomic) NSArray *itemsToReportAsJunk; // @synthesize itemsToReportAsJunk=_itemsToReportAsJunk;
@property(retain, nonatomic) NSArray *shareeActions; // @synthesize shareeActions=_shareeActions;
@property(retain, nonatomic) NSArray *syncActions; // @synthesize syncActions=_syncActions;
@property(retain, nonatomic) NSMutableDictionary *deletedCalendarItems; // @synthesize deletedCalendarItems=_deletedCalendarItems;
@property(nonatomic) unsigned long long numUploadedElements; // @synthesize numUploadedElements=_numUploadedElements;
@property(nonatomic) unsigned long long numDownloadedElements; // @synthesize numDownloadedElements=_numDownloadedElements;
@property(nonatomic) _Bool needsPublishUpdate; // @synthesize needsPublishUpdate=_needsPublishUpdate;
@property(nonatomic) _Bool isDirty; // @synthesize isDirty=_isDirty;
@property(nonatomic) _Bool didResync; // @synthesize didResync=_didResync;
@property(nonatomic) _Bool needsResync; // @synthesize needsResync=_needsResync;
@property(nonatomic) _Bool wasModifiedLocally; // @synthesize wasModifiedLocally=_wasModifiedLocally;
@property(nonatomic) _Bool isAffectingAvailability; // @synthesize isAffectingAvailability=_isAffectingAvailability;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) _Bool isScheduleOutbox; // @synthesize isScheduleOutbox=_isScheduleOutbox;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(retain, nonatomic) NSString *calendarURLString; // @synthesize calendarURLString=_calendarURLString;
- (void).cxx_destruct;
- (void)rem_invalidateCalCalendarWithReload:(_Bool)arg1;
- (void)rem_reloadCalCalendar;
- (_Bool)rem_setListPropertiesWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (Class)appSpecificCalendarItemClass;
- (void)syncDidFinishWithError:(id)arg1;
- (void)flushCaches;
- (void)recordDiagnosticsForAccountSync:(id)arg1;
- (void)prepareMergeSyncActionsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_prepareForcedRefreshSyncActionsForTruncatedHistoryWithTrackingState:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)prepareSyncActionsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_collectShareeActions;
- (void)_addShareeWithObjectID:(id)arg1 toDictionaryIfNeeded:(id)arg2;
- (void)clearShareeActions;
- (void)deleteAction:(id)arg1 completedWithError:(id)arg2;
- (void)putAction:(id)arg1 completedWithError:(id)arg2;
- (id)_createActionsForItems:(id)arg1 withAction:(int)arg2 backingReminders:(id)arg3 alreadySentItems:(id)arg4 createServerIDs:(_Bool)arg5 shouldSave:(_Bool *)arg6;
- (_Bool)_addChangedReminder:(id)arg1 toArrayIfNeeded:(id)arg2;
- (void)clearEventChanges;
- (id)copyDeletedItems;
- (void)copyModifiedItemsWithBatchHandler:(CDUnknownBlockType)arg1;
- (void)copyAddedItemsWithBatchHandler:(CDUnknownBlockType)arg1;
- (void)copyAllItemsWithBatchHandler:(CDUnknownBlockType)arg1;
- (id)rem_getCalCalendar;
@property(readonly, nonatomic) REMAccount *rem_account;
- (id)rem_saveRequest;
- (id)rem_store;
- (id)rem_initCalCalendarWithTitle:(id)arg1;
- (void)_rem_updateCalendarOwnerInfo;
@property(readonly, nonatomic) NSString *accountID;
@property(readonly, nonatomic) NSString *displayColor;
@property(readonly, nonatomic) _Bool isHidden;
- (_Bool)hasEvents;
- (_Bool)deleteResourcesAtURLs:(id)arg1;
- (_Bool)_removeCalendarItemWithURL:(id)arg1;
- (_Bool)updateResourcesFromServer:(id)arg1;
- (_Bool)setScheduleTag:(id)arg1 forItemAtURL:(id)arg2;
- (_Bool)setEtag:(id)arg1 forItemAtURL:(id)arg2 reminderChangeItem:(id)arg3;
- (_Bool)setEtag:(id)arg1 forItemAtURL:(id)arg2;
- (_Bool)setURL:(id)arg1 forResourceWithUUID:(id)arg2 reminderChangeItem:(id)arg3;
- (_Bool)setURL:(id)arg1 forResourceWithUUID:(id)arg2;
- (id)_rem_copyReminderWithExternalID:(id)arg1;
- (id)_rem_copyReminderWithUniqueIdentifier:(id)arg1 inList:(id)arg2;
- (id)etagsForItemURLs:(id)arg1;
@property(readonly, nonatomic) NSSet *allItemURLs;
- (void)_forceRefreshNextSync;
@property(retain, nonatomic) NSString *syncToken;
@property(retain, nonatomic) NSString *ctag;
@property(nonatomic) _Bool isRenameable;
@property(nonatomic) _Bool isEditable;
@property(retain, nonatomic) NSSet *sharees;
@property(nonatomic) int sharingStatus;
@property(nonatomic) int order;
@property(retain, nonatomic) NSTimeZone *timeZone;
- (_Bool)hasCalendarUserAddressEquivalentToURL:(id)arg1;
- (id)calendarUserAddresses;
@property(retain, nonatomic) NSSet *preferredCalendarUserAddresses;
@property(readonly, nonatomic) NSString *ownerPhoneNumber;
@property(readonly, nonatomic) NSString *ownerEmailAddress;
- (id)_preferredAddress;
@property(retain, nonatomic) NSString *ownerDisplayName;
@property(retain, nonatomic) NSURL *prePublishURL;
@property(retain, nonatomic) NSURL *publishURL;
@property(nonatomic) _Bool isPublished;
@property(nonatomic) _Bool isMarkedImmutableSharees;
@property(nonatomic) _Bool isMarkedUndeletable;
@property(nonatomic) _Bool isFamilyCalendar;
@property(nonatomic) _Bool canBeShared;
@property(nonatomic) _Bool canBePublished;
@property(retain, nonatomic) NSURL *owner;
@property(retain, nonatomic) NSDictionary *bulkRequests;
@property(retain, nonatomic) NSString *pushKey;
@property(retain, nonatomic) NSString *symbolicColorName;
@property(retain, nonatomic) NSString *color;
@property(retain, nonatomic) NSString *notes;
@property(retain, nonatomic) NSString *title;
@property(nonatomic) _Bool isManagedByServer;
@property(nonatomic) _Bool isSubscribed;
@property(nonatomic) _Bool isPoll;
@property(nonatomic) _Bool isNotification;
@property(nonatomic) _Bool isScheduleInbox;
@property(nonatomic) _Bool isEventContainer;
@property(nonatomic) _Bool isTaskContainer;
- (void)_setSupportsEvents:(_Bool)arg1 supportsTodos:(_Bool)arg2;
@property(retain, nonatomic) NSURL *calendarURL;
@property(nonatomic) __weak id <CalDAVPrincipal> principal;
@property(readonly, nonatomic) MobileCalDAVPrincipal *daPrincipal;
- (void)deleteCalendar;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithCalendarURL:(id)arg1 principal:(id)arg2;
- (id)initWithCalendarURL:(id)arg1 principal:(id)arg2 title:(id)arg3;
- (id)initWithCalendarURL:(id)arg1 list:(id)arg2 principal:(id)arg3 title:(id)arg4;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(nonatomic) long long maxAttendees;
@property(readonly, nonatomic) _Bool needsIsAffectingAvailabilityUpdate;
@property(readonly, nonatomic) NSArray *recurrenceSplitActions;
@property(readonly) Class superclass;

@end
