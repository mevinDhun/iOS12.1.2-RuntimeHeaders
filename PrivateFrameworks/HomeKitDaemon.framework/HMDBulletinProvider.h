/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBulletinProvider : HMFObject <NSSecureCoding> {
    NSMutableDictionary * _bulletins;
}

@property (nonatomic, retain) NSMutableDictionary *bulletins;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bulletins;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBulletins:(id)arg1;

@end
