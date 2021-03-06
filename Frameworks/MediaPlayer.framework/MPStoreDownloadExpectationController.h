/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreDownloadExpectationController : NSObject <MPStoreDownloadManagerObserver> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    id /* block */  _completionHandler;
    NSObject<OS_dispatch_source> * _dispatchSource;
    unsigned long long  _downloadManagerMonitorCount;
    id /* block */  _searchBlock;
    double  _timeout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ searchBlock;
@property (readonly) Class superclass;
@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (void)_attemptDownloadSearch;
- (void)_beginMonitoringDownloadManager;
- (void)_endMonitoringDownloadManager;
- (void)_finishWithDownload:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (id)init;
- (id /* block */)searchBlock;
- (void)setSearchBlock:(id /* block */)arg1;
- (void)setTimeout:(double)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (double)timeout;

@end
