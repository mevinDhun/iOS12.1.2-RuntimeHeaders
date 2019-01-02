/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetContextConfiguration : SABaseClientBoundCommand

@property (nonatomic) long long contextTimeoutSeconds;

+ (id)setContextConfiguration;
+ (id)setContextConfigurationWithDictionary:(id)arg1 context:(id)arg2;

- (long long)contextTimeoutSeconds;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setContextTimeoutSeconds:(long long)arg1;

@end