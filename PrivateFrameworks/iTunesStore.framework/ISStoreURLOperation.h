/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISStoreURLOperation : ISURLOperation <ISBiometricSessionDelegate> {
    long long  _activeMachineDataStyle;
    NSNumber * _authenticatedDSID;
    SSBag * _bag;
    SSBiometricAuthenticationContext * _biometricAuthenticationContext;
    <ISBiometricSessionDelegate> * _biometricSessionDelegate;
    bool  _canSendGUIDParameter;
    bool  _ignorePreexistingSecureToken;
    bool  _isURLBagRequest;
    long long  _machineDataStyle;
    bool  _needsAuthentication;
    bool  _needsTermsAndConditionsAcceptance;
    bool  _needsURLBag;
    SSVFairPlaySAPSession * _sapSession;
    bool  _shouldAppendAuthKitHeaders;
    bool  _shouldAppendStorefrontToURL;
    bool  _shouldCancelBiometricTokenUpdate;
    bool  _shouldSendAKClientInfoHeaders;
    bool  _shouldSendDSIDHeader;
    bool  _shouldSendXTokenHeader;
    bool  _shouldSuppressUserInfo;
    bool  _urlKnownToBeTrusted;
    bool  _useUserSpecificURLBag;
}

@property (retain) SSVFairPlaySAPSession *SAPSession;
@property (readonly) SSURLBagContext *URLBagContext;
@property (getter=isURLBagRequest, nonatomic) bool URLBagRequest;
@property (retain) NSNumber *authenticatedDSID;
@property (nonatomic, retain) SSBag *bag;
@property (retain) SSBiometricAuthenticationContext *biometricAuthenticationContext;
@property <ISBiometricSessionDelegate> *biometricSessionDelegate;
@property bool canSendGUIDParameter;
@property (readonly, copy) NSString *debugDescription;
@property <ISStoreURLOperationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignorePreexistingSecureToken;
@property long long machineDataStyle;
@property bool needsAuthentication;
@property bool needsTermsAndConditionsAcceptance;
@property bool needsURLBag;
@property bool performsMachineDataActions;
@property (nonatomic) bool shouldAppendAuthKitHeaders;
@property (nonatomic) bool shouldAppendStorefrontToURL;
@property bool shouldCancelBiometricTokenUpdate;
@property bool shouldSendAKClientInfoHeaders;
@property bool shouldSendDSIDHeader;
@property bool shouldSendXTokenHeader;
@property bool shouldSuppressUserInfo;
@property (readonly) Class superclass;
@property bool urlKnownToBeTrusted;
@property bool useUserSpecificURLBag;

+ (void)_addAccountDSID:(id)arg1 toRequest:(id)arg2;
+ (void)_addPrimaryiCloudDSIDToRequest:(id)arg1;
+ (void)_addiTunesStoreHeadersToRequest:(id)arg1 withAccount:(id)arg2 appendAuthKitHeaders:(bool)arg3 appendStorefrontToURL:(bool)arg4 clientBundleIdentifier:(id)arg5 extraHeaders:(id)arg6 storefrontSuffix:(id)arg7;
+ (void)_addiTunesStoreHeadersToRequest:(id)arg1 withSSBag:(id)arg2 account:(id)arg3 appendAuthKitHeaders:(bool)arg4 appendStorefrontToURL:(bool)arg5 clientBundleIdentifier:(id)arg6;
+ (void)_addiTunesStoreHeadersToRequest:(id)arg1 withSSBag:(id)arg2 accountIdentifier:(id)arg3 appendAuthKitHeaders:(bool)arg4 appendStorefrontToURL:(bool)arg5 clientBundleIdentifier:(id)arg6;
+ (void)_addiTunesStoreHeadersToRequest:(id)arg1 withURLBag:(id)arg2 account:(id)arg3 appendAuthKitHeaders:(bool)arg4 appendStorefrontToURL:(bool)arg5 clientBundleIdentifier:(id)arg6;
+ (void)_addiTunesStoreHeadersToRequest:(id)arg1 withURLBag:(id)arg2 accountIdentifier:(id)arg3 appendAuthKitHeaders:(bool)arg4 appendStorefrontToURL:(bool)arg5 clientBundleIdentifier:(id)arg6;
+ (void)_appendStorefront:(id)arg1 toRequestURL:(id)arg2;
+ (id)_authKitSession;
+ (void)_handleResponseHeaders:(id)arg1 response:(id)arg2 request:(id)arg3 account:(id)arg4 performsMachineDataActions:(bool)arg5 shouldRetry:(bool*)arg6;
+ (bool)_operationWaitsForPurchases:(id)arg1;
+ (void)_performMachineDataRequest:(id)arg1 requestProperties:(id)arg2 completion:(id /* block */)arg3;
+ (id)_restrictionsHeaderValue;
+ (id)_ssBag_copyExtraHeadersForURL:(id)arg1 bag:(id)arg2;
+ (id)_ssBag_copyHeaderPatternsFromBag:(id)arg1;
+ (id)_storeFrontIdentifierForAccount:(id)arg1;
+ (void)addITunesStoreHeadersToRequest:(id)arg1 withAccountIdentifier:(id)arg2;
+ (void)handleITunesStoreResponseHeaders:(id)arg1 request:(id)arg2 withAccountIdentifier:(id)arg3 shouldRetry:(bool*)arg4;
+ (id)itemPingOperationWithIdentifier:(unsigned long long)arg1 urlBagKey:(id)arg2;
+ (id)pingOperationWithUrl:(id)arg1;
+ (id)propertyListOperationWithURLBagKey:(id)arg1;

- (void).cxx_destruct;
- (id)SAPSession;
- (id)URLBagContext;
- (id)_account;
- (void)_addStandardQueryParametersForURL:(id)arg1;
- (bool)_authenticateWithContext:(id)arg1 error:(id*)arg2;
- (bool)_canSendTokenToURL:(id)arg1;
- (void)_continueTouchIDSession;
- (id)_copyAuthenticationContext;
- (id)_copyAuthenticationContextForAttemptNumber:(long long)arg1;
- (bool)_isErrorTokenError:(id)arg1;
- (id)_loadURLBagInterpreterWithRequest:(id)arg1 requestProperties:(id)arg2;
- (bool)_performMachineDataRequest:(id)arg1;
- (bool)_processResponseData:(id)arg1 error:(id*)arg2;
- (id)_resolvedURLInBagContext:(id)arg1 bagTrusted:(bool*)arg2;
- (void)_runURLOperation;
- (void)_setStoreFrontIdentifier:(id)arg1 isTransient:(bool)arg2;
- (bool)_shouldRetryForTouchIDChallengeWithError:(id)arg1;
- (id)_ssBag_copyGUIDPatternsFromBag:(id)arg1;
- (id)_ssBag_copyGUIDSchemesFromBag:(id)arg1;
- (bool)_ssBag_shouldSendGUIDForURL:(id)arg1 withBag:(id)arg2;
- (id)_urlBagForContext:(id)arg1;
- (void)_willSendRequest:(id)arg1;
- (id)authenticatedAccountDSID;
- (id)authenticatedDSID;
- (id)bag;
- (id)biometricAuthenticationContext;
- (id)biometricSessionDelegate;
- (bool)canSendGUIDParameter;
- (bool)handleRedirectFromDataProvider:(id)arg1 error:(id*)arg2;
- (void)handleResponse:(id)arg1;
- (bool)ignorePreexistingSecureToken;
- (id)init;
- (bool)isURLBagRequest;
- (long long)machineDataStyle;
- (bool)needsAuthentication;
- (bool)needsTermsAndConditionsAcceptance;
- (bool)needsURLBag;
- (id)newRequestWithURL:(id)arg1;
- (bool)performsMachineDataActions;
- (void)run;
- (void)sender:(id)arg1 didFallbackToPassword:(bool)arg2;
- (void)setAuthenticatedDSID:(id)arg1;
- (void)setBag:(id)arg1;
- (void)setBiometricAuthenticationContext:(id)arg1;
- (void)setBiometricSessionDelegate:(id)arg1;
- (void)setCanSendGUIDParameter:(bool)arg1;
- (void)setIgnorePreexistingSecureToken:(bool)arg1;
- (void)setMachineDataStyle:(long long)arg1;
- (void)setNeedsAuthentication:(bool)arg1;
- (void)setNeedsTermsAndConditionsAcceptance:(bool)arg1;
- (void)setNeedsURLBag:(bool)arg1;
- (void)setPerformsMachineDataActions:(bool)arg1;
- (void)setSAPSession:(id)arg1;
- (void)setShouldAppendAuthKitHeaders:(bool)arg1;
- (void)setShouldAppendStorefrontToURL:(bool)arg1;
- (void)setShouldCancelBiometricTokenUpdate:(bool)arg1;
- (void)setShouldSendAKClientInfoHeaders:(bool)arg1;
- (void)setShouldSendDSIDHeader:(bool)arg1;
- (void)setShouldSendXTokenHeader:(bool)arg1;
- (void)setShouldSuppressUserInfo:(bool)arg1;
- (void)setURLBagRequest:(bool)arg1;
- (void)setUrlKnownToBeTrusted:(bool)arg1;
- (void)setUseUserSpecificURLBag:(bool)arg1;
- (bool)shouldAppendAuthKitHeaders;
- (bool)shouldAppendStorefrontToURL;
- (bool)shouldCancelBiometricTokenUpdate;
- (bool)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id*)arg2;
- (bool)shouldSendAKClientInfoHeaders;
- (bool)shouldSendDSIDHeader;
- (bool)shouldSendXTokenHeader;
- (bool)shouldSuppressUserInfo;
- (bool)urlKnownToBeTrusted;
- (bool)useUserSpecificURLBag;

@end
