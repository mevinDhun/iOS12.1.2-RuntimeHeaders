/* Generated by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAccountStore : NSObject <VSRemoteNotifierDelegate> {
    VSAccount * _cachedFirstAccount;
    id  _changeObserver;
    VSKeychainEditingContext * _keychainEditingContext;
    NSOperationQueue * _keychainQueue;
    bool  _needsUpdateCachedFirstAccount;
    VSRemoteNotifier * _remoteNotifier;
}

@property (nonatomic, readonly, copy) NSArray *accounts;
@property (retain) VSAccount *cachedFirstAccount;
@property (nonatomic) id changeObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSKeychainEditingContext *keychainEditingContext;
@property (nonatomic, retain) NSOperationQueue *keychainQueue;
@property bool needsUpdateCachedFirstAccount;
@property (nonatomic, retain) VSRemoteNotifier *remoteNotifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUndoManager *undoManager;

+ (Class)accountClass;

- (void).cxx_destruct;
- (id)_accountForKeychainItem:(id)arg1;
- (void)_insertAccount:(id)arg1 inContext:(id)arg2;
- (id)_keychainItemsWithLimit:(unsigned long long)arg1;
- (void)_sendLocalNotification;
- (void)_sendRemoteNotification;
- (bool)_updateCachedFirstAccount;
- (id)accounts;
- (id)cachedFirstAccount;
- (id)changeObserver;
- (void)dealloc;
- (void)fetchAccountsWithCompletionHandler:(id /* block */)arg1;
- (id)firstAccount;
- (id)firstAccountIfLoaded;
- (id)init;
- (bool)isFirstAccountLoaded;
- (id)keychainEditingContext;
- (id)keychainQueue;
- (bool)needsUpdateCachedFirstAccount;
- (id)remoteNotifier;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)removeAccounts:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)saveAccounts:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setCachedFirstAccount:(id)arg1;
- (void)setChangeObserver:(id)arg1;
- (void)setKeychainEditingContext:(id)arg1;
- (void)setKeychainQueue:(id)arg1;
- (void)setNeedsUpdateCachedFirstAccount:(bool)arg1;
- (void)setRemoteNotifier:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (id)undoManager;

@end
