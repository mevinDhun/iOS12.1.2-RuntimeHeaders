/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFOSUpdate : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowsInstallLater;
    NSString * _build;
    unsigned long long  _downloadSize;
    NSString * _humanReadableName;
    unsigned long long  _installSize;
    bool  _isCritical;
    NSString * _productKey;
    NSString * _productName;
    bool  _restartRequired;
    NSString * _version;
}

@property (nonatomic, readonly) bool allowsInstallLater;
@property (nonatomic, readonly, copy) NSString *build;
@property (nonatomic, readonly) unsigned long long downloadSize;
@property (nonatomic, readonly, copy) NSString *humanReadableName;
@property (nonatomic, readonly) unsigned long long installSize;
@property (nonatomic, readonly) bool isCritical;
@property (nonatomic, readonly, copy) NSString *productKey;
@property (nonatomic, readonly, copy) NSString *productName;
@property (nonatomic, readonly) bool restartRequired;
@property (nonatomic, readonly, copy) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsInstallLater;
- (id)build;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)downloadSize;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)humanReadableName;
- (id)initWithCoder:(id)arg1;
- (id)initWithProductKey:(id)arg1 humanReadableName:(id)arg2 productName:(id)arg3 version:(id)arg4 build:(id)arg5 downloadSize:(unsigned long long)arg6 installSize:(unsigned long long)arg7 isCritical:(bool)arg8 restartRequired:(bool)arg9 allowsInstallLater:(bool)arg10;
- (unsigned long long)installSize;
- (bool)isCritical;
- (bool)isEqual:(id)arg1;
- (id)productKey;
- (id)productName;
- (bool)restartRequired;
- (id)version;

@end
