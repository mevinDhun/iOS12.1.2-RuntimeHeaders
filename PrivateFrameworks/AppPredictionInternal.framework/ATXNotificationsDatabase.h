/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXNotificationsDatabase : NSObject {
    _PASSqliteDatabase * _db;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) _PASSqliteDatabase *db;

- (void).cxx_destruct;
- (void)_disconnectFromDb;
- (bool)configureDatabase;
- (long long)countRowsOfTable:(id)arg1;
- (id)createSchema;
- (long long)currentSchemaVersion;
- (id)db;
- (id)init;
- (void)initializeSchemaVersion:(long long)arg1;
- (void)migrate;
- (void)startDatabase;

@end
