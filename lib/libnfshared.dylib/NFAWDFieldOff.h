/* Generated by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDFieldOff : NSObject <NFAWDEventProtocol> {
    AWDNFCFieldOffEvent * _metric;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AWDNFCFieldOffEvent *metric;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)getMetric;
- (unsigned int)getMetricId;
- (id)init;
- (id)metric;
- (void)setMetric:(id)arg1;
- (unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;
- (unsigned long long)updateVASTransactionStateInfoWithPreviousState:(unsigned long long)arg1;

@end
