/* Generated by EzioChiu.
 */

@protocol VMTelephonySubscription <NSObject>

@required

- (NSString *)label;
- (NSString *)labelID;
- (NSString *)phoneNumber;
- (NSNumber *)userDataPreferred;
- (NSNumber *)userDefaultVoice;
- (NSUUID *)uuid;
- (NSUUID *)vm_labelUUID;

@end
