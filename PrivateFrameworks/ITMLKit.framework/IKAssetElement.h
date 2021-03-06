/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAssetElement : IKViewElement {
    bool  _infiniteDuration;
}

@property (nonatomic, readonly, retain) NSString *actionParams;
@property (nonatomic, readonly, retain) NSString *adamID;
@property (nonatomic, readonly, retain) NSString *bookmarkID;
@property (nonatomic, readonly, retain) NSString *contentID;
@property (nonatomic, readonly, retain) NSString *externalID;
@property (nonatomic, readonly, retain) NSURL *extrasURL;
@property (getter=isInfiniteDuration, nonatomic, readonly) bool infiniteDuration;
@property (nonatomic, readonly) long long keyDelivery;
@property (nonatomic, readonly, retain) NSNumber *persistentID;
@property (nonatomic, readonly, retain) NSNumber *rentalAdamID;
@property (nonatomic, readonly, retain) NSString *serviceID;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, retain) NSURL *url;

+ (bool)shouldParseChildDOMElements;

- (id)_numberForAttribute:(id)arg1;
- (id)actionParams;
- (id)adamID;
- (id)bookmarkID;
- (id)contentID;
- (id)externalID;
- (id)extrasURL;
- (bool)infiniteDuration;
- (bool)isInfiniteDuration;
- (long long)keyDelivery;
- (id)persistentID;
- (id)rentalAdamID;
- (id)serviceID;
- (long long)type;
- (id)url;

@end
