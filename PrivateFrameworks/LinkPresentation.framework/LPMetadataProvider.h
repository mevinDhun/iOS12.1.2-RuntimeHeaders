/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPMetadataProvider : NSObject <LPMetadataProviderSpecializationDelegate, WKNavigationDelegate> {
    NSURL * _URL;
    bool  _cancelled;
    bool  _complete;
    id /* block */  _completionHandler;
    bool  _fetchSubresources;
    LPStatisticsTimingToken * _fetchTimingToken;
    bool  _fetchingFromExistingWebView;
    bool  _hasStartedFetching;
    unsigned int  _loggingID;
    LPLinkMetadata * _metadata;
    NSMutableArray * _pendingResolvers;
    long long  _specializationState;
    LPMetadataProviderSpecialization * _specializedMetadataProvider;
    double  _timeout;
    bool  _useSpecializedProviders;
    WKWebView * _webView;
}

@property bool cancelled;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fetchSubresources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double timeout;
@property (nonatomic) bool useSpecializedProviders;

+ (id)_callbackQueue;
+ (id)_copyDefaultWebViewConfiguration;
+ (id)_defaultUserAgent;
+ (id)_incompleteMetadataRequests;
+ (id)requestMetadataForURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)requestMetadataForWebView:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_cancelDueToTimeout;
- (void)_completedWithMainResourceImageData:(id)arg1 MIMEType:(id)arg2 URL:(id)arg3;
- (void)_completedWithResolvedMetadata:(id)arg1 error:(id)arg2;
- (id)_createFetcherWebView;
- (void)_failedWithErrorCode:(long long)arg1 underlyingError:(id)arg2;
- (void)_fetchFirstSuccessfulItem:(id)arg1 group:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_fetchMetadataFromWebView;
- (void)_fetchNextSuccessfulItem:(id)arg1 currentIndex:(unsigned int)arg2 group:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_fetchResolvableItems:(id)arg1 group:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_fetchSubresources;
- (void)_fetchedMetadata:(id)arg1;
- (void)_generateSpecializationIfPossibleForCompleteMetadata:(id)arg1 URL:(id)arg2;
- (void)_redistinguishImagesAndIcons;
- (void)_startWatchdogTimer;
- (bool)_switchToSpecializationIfPossibleForMIMEType:(id)arg1 URL:(id)arg2;
- (bool)_switchToSpecializationIfPossibleForMetadata:(id)arg1 URL:(id)arg2;
- (void)cancel;
- (bool)cancelled;
- (id /* block */)completionHandler;
- (void)dealloc;
- (bool)fetchSubresources;
- (id)init;
- (void)metadataProviderSpecialization:(id)arg1 didCompleteWithMetadata:(id)arg2;
- (void)metadataProviderSpecialization:(id)arg1 didFailWithError:(id)arg2;
- (void)setCancelled:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setFetchSubresources:(bool)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUseSpecializedProviders:(bool)arg1;
- (void)startFetchingMetadataForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startFetchingMetadataForWebView:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startFetchingSubresourcesForPartialMetadata:(id)arg1 completionHandler:(id /* block */)arg2;
- (double)timeout;
- (bool)useSpecializedProviders;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

@end