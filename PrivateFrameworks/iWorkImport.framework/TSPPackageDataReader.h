/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPackageDataReader : NSObject <TSPFileCoordinatorDelegate, TSPPassphraseConsumer> {
    NSURL * _URL;
    NSString * _lastPasswordAttempted;
    TSPPackage * _package;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSPDocumentProperties *documentProperties;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPasswordProtected;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) NSData *keychainGenericItem;
@property (nonatomic, readonly) SFUCryptoKey *lastDecryptionKeyAttempted;
@property (nonatomic, readonly) NSString *lastPasswordAttempted;
@property (nonatomic, readonly) long long packageType;
@property (nonatomic, readonly) NSString *passphraseHint;
@property (nonatomic, readonly) NSString *passwordHint;
@property (nonatomic, readonly) bool requiresNetworkValidation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)checkPassword:(id)arg1;
- (id)documentProperties;
- (bool)hasDataAtRelativePath:(id)arg1;
- (id)init;
- (id)initWithURL:(id)arg1 decryptionKey:(id)arg2;
- (bool)isPasswordProtected;
- (bool)isValid;
- (id)lastDecryptionKeyAttempted;
- (id)lastPasswordAttempted;
- (struct CGDataProvider { }*)newCGDataProviderAtRelativePath:(id)arg1;
- (struct CGImage { }*)newCGImageAtRelativePath:(id)arg1;
- (struct CGImageSource { }*)newCGImageSourceAtRelativePath:(id)arg1;
- (long long)packageType;
- (id)passwordHint;
- (void)performReadUsingAccessor:(id /* block */)arg1;
- (bool)setPassphrase:(id)arg1;

@end
