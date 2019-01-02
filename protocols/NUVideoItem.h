/* Generated by EzioChiu.
 */

@protocol NUVideoItem <NFCopying>

@required

- (<NUAdContextProvider> *)adContextProvider;
- (NSString *)articleID;
- (NSString *)callToActionTitle;
- (NSURL *)callToActionURL;
- (bool)isBoundToContext;
- (bool)isHiddenFromFeeds;
- (bool)isPaid;
- (FCAssetHandle *)nameImageAssetHandle;
- (NSString *)sourceName;
- (NSString *)sourceTagID;
- (NSString *)title;
- (NSURL *)videoURL;

@end
