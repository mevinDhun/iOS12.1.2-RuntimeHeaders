/* Generated by EzioChiu.
 */

@protocol TSNotificationServiceType

@required

- (void)fetchNotificationSettingsWith:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TSNotificationSettings *, void*
- (void)getDeliveredNotificationsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)removeDeliveredNotificationsWithIdentifiers:(NSArray *)arg1;
- (void)requestAuthorizationWith:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
