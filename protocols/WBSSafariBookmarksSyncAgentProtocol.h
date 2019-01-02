/* Generated by EzioChiu.
 */

@protocol WBSSafariBookmarksSyncAgentProtocol <WBSCyclerCloudBookmarksAssistant>

@required

- (void)beginMigrationFromDAV;
- (void)collectDiagnosticsDataWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)deleteCloudTabCloseRequestsWithUUIDStrings:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteDevicesWithUUIDStrings:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchRemoteMigrationStateWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSString *, NSError *, void*
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, void*
- (void)fetchUserIdentityWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)observeRemoteMigrationStateForSecondaryMigration;
- (void)registerForPushNotificationsIfNeeded;
- (void)saveCloudTabCloseRequestWithDictionaryRepresentation:(void *)arg1 closeRequestUUIDString:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(NSDictionary *)arg1 deviceUUIDString:(NSString *)arg2;
- (void)setUsesOpportunisticPushTopic:(bool)arg1;
- (void)userAccountDidChange:(long long)arg1;
- (void)userDidUpdateBookmarkDatabase;

@end
