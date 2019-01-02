/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFLAction : NSObject <INImageProxyInjecting, INKeyImageProducing, NSCopying> {
    NSString * _identifier;
    NSDictionary * _parameters;
}

@property (readonly) INImage *_keyImage;
@property (nonatomic, readonly, copy) NSString *appBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) Class implementationClass;
@property (nonatomic, readonly, copy) NSDictionary *parameters;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (Class)implementationClass;
- (id)initWithIdentifier:(id)arg1 parameters:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)parameters;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_keyImage;

@end
