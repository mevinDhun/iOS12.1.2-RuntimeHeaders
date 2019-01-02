/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSProcessExitContext : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    unsigned long long  _launchdExitReason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long exitReason;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long launchdExitReason;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)exitReason;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (unsigned long long)launchdExitReason;
- (void)setLaunchdExitReason:(unsigned long long)arg1;

@end