/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPPerson : NSObject <NSSecureCoding> {
    struct NSMutableDictionary { Class x1; } * _deviceDict;
    NSArray * _devices;
    unsigned int  _flags;
    NSString * _identifier;
    NSString * _name;
    int  _proximity;
}

@property (nonatomic, retain) NSMutableDictionary *deviceDict;
@property (nonatomic, readonly, copy) NSArray *devices;
@property (nonatomic, readonly) unsigned int flags;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) int proximity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)_updateDeviceDerivedInfo;
- (id)description;
- (struct NSMutableDictionary { Class x1; }*)deviceDict;
- (id)devices;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)flags;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (int)proximity;
- (unsigned int)removeRPDevice:(id)arg1;
- (void)setDeviceDict:(struct NSMutableDictionary { Class x1; }*)arg1;
- (void)setIdentifier:(id)arg1;
- (unsigned int)updateWithRPDevice:(id)arg1;

@end