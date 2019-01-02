/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface _PUAdjustmentsLoadResult : NSObject {
    <PUEditableAsset> * _asset;
    PLPhotoEditMutableModel * _editModel;
    long long  _penultimateState;
    long long  _resolvedVersion;
}

@property (nonatomic, readonly) <PUEditableAsset> *asset;
@property (nonatomic, readonly) PLPhotoEditMutableModel *editModel;
@property (nonatomic, readonly) long long penultimateState;
@property (nonatomic, readonly) long long resolvedVersion;

- (void).cxx_destruct;
- (id)asset;
- (id)editModel;
- (id)initWithEditModel:(id)arg1 penultimateState:(long long)arg2 resolvedVersion:(long long)arg3 asset:(id)arg4;
- (long long)penultimateState;
- (long long)resolvedVersion;

@end