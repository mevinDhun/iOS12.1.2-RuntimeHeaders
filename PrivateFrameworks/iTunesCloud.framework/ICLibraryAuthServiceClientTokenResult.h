/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICLibraryAuthServiceClientTokenResult : NSObject <NSCopying> {
    long long  _generatedAtMillis;
    long long  _lifespanMillis;
    long long  _timeToLiveMillis;
    NSString * _token;
    ICLibraryAuthServiceClientTokenIdentifier * _tokenIdentitifer;
}

@property (nonatomic, readonly) long long generatedAtMillis;
@property (nonatomic, readonly) long long lifespanMillis;
@property (nonatomic, readonly) long long timeToLiveMillis;
@property (nonatomic, readonly, copy) NSString *token;
@property (nonatomic, readonly, copy) ICLibraryAuthServiceClientTokenIdentifier *tokenIdentitifer;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)generatedAtMillis;
- (id)initWithResponseDictionary:(id)arg1;
- (long long)lifespanMillis;
- (long long)timeToLiveMillis;
- (id)token;
- (id)tokenIdentitifer;

@end
