/* Generated by EzioChiu.
 */

@protocol MSPReplicaRecordFromCloud <NSObject>

@required

+ (id)tombstone;

- (id)initWithCloudRecord:(id <MSPCloudRecord>)arg1;
- (bool)isTombstoneRepresentedByCloudRecord;

@end
