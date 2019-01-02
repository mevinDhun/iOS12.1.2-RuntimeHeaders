/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSURLProtocolDialog : NSObject <AMSURLProtocolDialogHandling> {
    ACAccount * _account;
    <AMSURLBagContract> * _bagContract;
    NSDictionary * _dialogDictionary;
    long long  _dialogOptions;
    NSImage * _icon;
    NSString * _logKey;
    NSString * _proxyBundleId;
    bool  _serverRequestedSilentAuthentication;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) <AMSURLBagContract> *bagContract;
@property (nonatomic, readonly) NSArray *buttons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dialogDictionary;
@property (nonatomic, readonly) long long dialogOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSImage *icon;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, retain) NSString *proxyBundleId;
@property (nonatomic, readonly) bool serverRequestedSilentAuthentication;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)account;
- (id)bagContract;
- (id)buttons;
- (id)dialogDictionary;
- (long long)dialogOptions;
- (id)icon;
- (id)initWithDialogDictionary:(id)arg1 dialogOptions:(long long)arg2 account:(id)arg3 bagContract:(id)arg4;
- (id)initWithDialogDictionary:(id)arg1 taskInfo:(id)arg2;
- (id)logKey;
- (id)message;
- (id)proxyBundleId;
- (id)runDialog;
- (bool)serverRequestedSilentAuthentication;
- (void)setIcon:(id)arg1;
- (void)setLogKey:(id)arg1;
- (void)setProxyBundleId:(id)arg1;
- (id)title;

@end