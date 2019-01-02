/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPAdvertising : WPClient {
    <WPAdvertisingDelegate> * _delegate;
}

@property (nonatomic, retain) <WPAdvertisingDelegate> *delegate;

+ (unsigned char)puckStringToType:(id)arg1;
+ (id)puckTypeToString:(unsigned char)arg1;

- (void).cxx_destruct;
- (void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)advertisingPendingOfType:(unsigned char)arg1;
- (void)advertisingStartedOfType:(unsigned char)arg1;
- (void)advertisingStoppedOfType:(unsigned char)arg1;
- (id)clientAsString;
- (id)delegate;
- (void)deregisterService:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (id)parseCompanyData:(id)arg1;
- (void)registerService:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)stateDidChange:(long long)arg1;

@end
