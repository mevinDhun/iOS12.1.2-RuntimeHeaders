/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAGenericTermsUIRequest : AARequest {
    ACAccount * _account;
    bool  _preferPassword;
    NSDictionary * _requestDictionary;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)initWithAccount:(id)arg1 parameters:(id)arg2;
- (id)initWithAccount:(id)arg1 parameters:(id)arg2 preferPassword:(bool)arg3;
- (id)initWithParameters:(id)arg1;
- (id)urlRequest;
- (id)urlString;

@end
