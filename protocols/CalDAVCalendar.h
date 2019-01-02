/* Generated by EzioChiu.
 */

@protocol CalDAVCalendar <NSObject>

@required

- (NSSet *)allItemURLs;
- (NSDictionary *)bulkRequests;
- (NSURL *)calendarURL;
- (bool)canBePublished;
- (bool)canBeShared;
- (NSString *)color;
- (NSString *)ctag;
- (bool)deleteResourcesAtURLs:(NSSet *)arg1;
- (NSDictionary *)etagsForItemURLs:(NSArray *)arg1;
- (NSString *)guid;
- (bool)hasCalendarUserAddressEquivalentToURL:(NSURL *)arg1;
- (NSDictionary *)hrefsToModDeleteActions;
- (bool)isAffectingAvailability;
- (bool)isEditable;
- (bool)isEnabled;
- (bool)isEventContainer;
- (bool)isFamilyCalendar;
- (bool)isManagedByServer;
- (bool)isMarkedImmutableSharees;
- (bool)isMarkedUndeletable;
- (bool)isNotification;
- (bool)isPoll;
- (bool)isPublished;
- (bool)isRenameable;
- (bool)isScheduleInbox;
- (bool)isScheduleOutbox;
- (bool)isSubscribed;
- (bool)isTaskContainer;
- (NSArray *)itemsToReportAsJunk;
- (bool)needsPublishUpdate;
- (bool)needsResync;
- (NSString *)notes;
- (int)order;
- (NSURL *)owner;
- (NSString *)ownerDisplayName;
- (NSURL *)prePublishURL;
- (NSSet *)preferredCalendarUserAddresses;
- (<CalDAVPrincipal> *)principal;
- (NSURL *)publishURL;
- (NSString *)pushKey;
- (void)setBulkRequests:(NSDictionary *)arg1;
- (void)setCalendarURL:(NSURL *)arg1;
- (void)setCanBePublished:(bool)arg1;
- (void)setCanBeShared:(bool)arg1;
- (void)setColor:(NSString *)arg1;
- (void)setCtag:(NSString *)arg1;
- (bool)setEtag:(NSString *)arg1 forItemAtURL:(NSURL *)arg2;
- (void)setGuid:(NSString *)arg1;
- (void)setIsAffectingAvailability:(bool)arg1;
- (void)setIsEditable:(bool)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setIsEventContainer:(bool)arg1;
- (void)setIsFamilyCalendar:(bool)arg1;
- (void)setIsManagedByServer:(bool)arg1;
- (void)setIsMarkedImmutableSharees:(bool)arg1;
- (void)setIsMarkedUndeletable:(bool)arg1;
- (void)setIsNotification:(bool)arg1;
- (void)setIsPoll:(bool)arg1;
- (void)setIsPublished:(bool)arg1;
- (void)setIsRenameable:(bool)arg1;
- (void)setIsScheduleInbox:(bool)arg1;
- (void)setIsScheduleOutbox:(bool)arg1;
- (void)setIsSubscribed:(bool)arg1;
- (void)setIsTaskContainer:(bool)arg1;
- (void)setNeedsResync:(bool)arg1;
- (void)setNotes:(NSString *)arg1;
- (void)setOrder:(int)arg1;
- (void)setOwner:(NSURL *)arg1;
- (void)setOwnerDisplayName:(NSString *)arg1;
- (void)setPrePublishURL:(NSURL *)arg1;
- (void)setPreferredCalendarUserAddresses:(NSSet *)arg1;
- (void)setPublishURL:(NSURL *)arg1;
- (void)setPushKey:(NSString *)arg1;
- (bool)setScheduleTag:(NSString *)arg1 forItemAtURL:(NSURL *)arg2;
- (void)setSharees:(NSSet *)arg1;
- (void)setSharingStatus:(int)arg1;
- (void)setSymbolicColorName:(NSString *)arg1;
- (void)setSyncToken:(NSString *)arg1;
- (void)setTimeZone:(NSTimeZone *)arg1;
- (void)setTitle:(NSString *)arg1;
- (bool)setURL:(NSURL *)arg1 forResourceWithUUID:(NSString *)arg2;
- (void)setWasModifiedLocally:(bool)arg1;
- (NSArray *)shareeActions;
- (NSSet *)sharees;
- (int)sharingStatus;
- (NSString *)symbolicColorName;
- (NSArray *)syncActions;
- (NSString *)syncToken;
- (NSTimeZone *)timeZone;
- (NSString *)title;
- (bool)updateResourcesFromServer:(NSSet *)arg1;
- (NSDictionary *)uuidsToAddActions;
- (bool)wasModifiedLocally;

@optional

- (Class)appSpecificCalendarItemClass;
- (void)clearShareeActions;
- (void)deleteAction:(CoreDAVAction *)arg1 completedWithError:(NSError *)arg2;
- (void)prepareMergeSyncActionsWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CalDAVCalendar> *, void*
- (void)putAction:(CoreDAVAction *)arg1 completedWithError:(NSError *)arg2;
- (void)syncDidFinishWithError:(NSError *)arg1;

@end
