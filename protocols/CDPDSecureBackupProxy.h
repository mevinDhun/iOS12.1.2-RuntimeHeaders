/* Generated by EzioChiu.
 */

@protocol CDPDSecureBackupProxy <NSObject>

@required

- (NSDictionary *)accountInfoWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (void)cacheRecoveryKey:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (CDPContext *)cdpContext;
- (void)disableWithInfo:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)disableWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (void)enableWithInfo:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)enableWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithContext:(CDPContext *)arg1;
- (NSDictionary *)recoverWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (void)setCdpContext:(CDPContext *)arg1;
- (void)uncacheAllSecrets;

@end
