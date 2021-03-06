/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIFindMyiPhoneController : NSObject {
    NSObject<OS_dispatch_semaphore> * _stateChangeSem;
}

+ (id)shared;

- (void).cxx_destruct;
- (void)dealloc;
- (void)disablePhoneLocatorWithMessageString:(id)arg1 buttonTitle:(id)arg2 presentingViewController:(id)arg3 completion:(id /* block */)arg4;
- (void)enablePhoneLocatorWithCompletion:(id /* block */)arg1;
- (id)init;
- (bool)isFindMyiPhoneEnabled;
- (bool)isFindMyiPhoneProvisioned;
- (void)locatorStateDidChange:(id)arg1;
- (id)preferredFindMyiPhoneAccount;

@end
