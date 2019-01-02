/* Generated by EzioChiu.
 */

@protocol HDSyncEntity <NSObject>

@required

+ (<HDSyncCodable> *)decodeSyncObjectWithData:(NSData *)arg1;
+ (bool)generateSyncObjectsForSession:(void *)arg1 predicate:(void *)arg2 syncAnchorRange:(void *)arg3 maxEncodedBytesPerMessage:(void *)arg4 profile:(void *)arg5 error:(void *)arg6 handler:(void *)arg7; // needs 7 arg types, found 14: HDSyncSession *, HDSQLitePredicate *, struct HDSyncAnchorRange { long long x1; long long x2; }, long long, HDProfile *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSArray *, long long, bool, id*
+ (long long)nextSyncAnchorWithSession:(HDSyncSession *)arg1 predicate:(HDSQLitePredicate *)arg2 startSyncAnchor:(long long)arg3 profile:(HDProfile *)arg4 error:(id*)arg5;
+ (long long)receiveSyncObjects:(NSArray *)arg1 syncStore:(id <HDSyncStore>)arg2 profile:(HDProfile *)arg3 error:(id*)arg4;
+ (NSSet *)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (HDSyncEntityIdentifier *)syncEntityIdentifier;

@optional

+ (NSSet *)excludedSyncStoresForSession:(HDSyncSession *)arg1;
+ (bool)supportsSyncStore:(id <HDSyncStore>)arg1;

@end
