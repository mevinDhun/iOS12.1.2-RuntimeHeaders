/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageLoadingContextSMIMEInfo : NSObject {
    MFMessageLoadingContextEvent * _loadEvent;
}

@property (nonatomic, readonly) MFMessageLoadingContext *context;
@property (nonatomic, readonly) MFMessageSigner *firstSigner;
@property (nonatomic, readonly) MFMessageLoadingContextEvent *loadEvent;
@property (getter=isMessageEncrypted, nonatomic, readonly) bool messageEncrypted;
@property (getter=isMessageSigned, nonatomic, readonly) bool messageSigned;

+ (id)smimeInfoForLoadEvent:(id)arg1;

- (id)context;
- (void)dealloc;
- (id)firstSigner;
- (id)initWithLoadEvent:(id)arg1;
- (bool)isMessageEncrypted;
- (bool)isMessageSigned;
- (id)loadEvent;
- (void)reevaluateTrustWithNetworkAccessAllowed;
- (id)signers;

@end
