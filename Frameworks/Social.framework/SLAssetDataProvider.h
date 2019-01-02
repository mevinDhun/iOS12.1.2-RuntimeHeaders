/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLAssetDataProvider : NSObject {
    AVAssetExportSession * _assetExportSession;
    ALAssetsLibrary * _assetsLibrary;
    NSMutableArray * _deliveryQueue;
    NSObject<OS_dispatch_queue> * _downsamplingQueue;
    id /* block */  _fetchCompletion;
    NSError * _lastError;
    unsigned long long  _maxByteSize;
    int  _numRequestedImages;
}

@property (copy) id /* block */ fetchCompletion;

- (void).cxx_destruct;
- (void)_assetFetchFailedWithError:(id)arg1;
- (void)_checkDeliveryComplete;
- (void)_downsamplingCompletedForAsset:(id)arg1 withDownsampledData:(id)arg2;
- (void)_downsamplingFailedForAsset:(id)arg1 withError:(id)arg2;
- (id)_generateTemporaryFilename;
- (void)exportDataFromVideoAssetURL:(id)arg1 toFileURL:(id)arg2 exportPreset:(id)arg3 completion:(id /* block */)arg4;
- (id /* block */)fetchCompletion;
- (void)fetchImageDataForAssetsURLs:(id)arg1 maxByteSize:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)fetchedAsset:(id)arg1;
- (id)init;
- (void)mappedDataFromVideoAtFileURL:(id)arg1 completion:(id /* block */)arg2;
- (void)setFetchCompletion:(id /* block */)arg1;

@end