/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKApplicationPermissionGroup : NSObject <NSSecureCoding> {
    NSArray * _applicationBundleIDs;
    NSArray * _containerIDs;
    unsigned long long  _enabledPermissions;
}

@property (nonatomic, retain) NSArray *applicationBundleIDs;
@property (nonatomic, retain) NSArray *containerIDs;
@property (nonatomic) unsigned long long enabledPermissions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)applicationBundleIDs;
- (id)containerIDs;
- (id)description;
- (unsigned long long)enabledPermissions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setApplicationBundleIDs:(id)arg1;
- (void)setContainerIDs:(id)arg1;
- (void)setEnabledPermissions:(unsigned long long)arg1;

@end