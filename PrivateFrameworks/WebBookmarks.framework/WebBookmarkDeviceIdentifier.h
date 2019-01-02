/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarkDeviceIdentifier : NSObject {
    NSUUID * _UUID;
    bool  _encounteredErrorWhileObtainingUUID;
    NSObject<OS_dispatch_source> * _fileMonitor;
    NSURL * _plistURL;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _readOnly;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) bool encounteredErrorWhileObtainingUUID;
@property (getter=isReadOnly, nonatomic) bool readOnly;

+ (void)_postWebBookmarkMetaDataChangeDistributedNotification:(id)arg1;
+ (void)clearDeviceIdentifierWithPlistURL:(id)arg1;

- (void).cxx_destruct;
- (id)UUID;
- (void)_cancelMonitoringMetaDataFile;
- (void)_createOrLoadMetaData;
- (void)_metaDataDidChange:(id)arg1;
- (void)_registerForMedadaDataFileChangeDistributedNotification;
- (void)_resumeMonitoringMetaDataFile;
- (void)dealloc;
- (id)description;
- (bool)encounteredErrorWhileObtainingUUID;
- (id)initWithPlistURL:(id)arg1 readOnly:(bool)arg2;
- (bool)isReadOnly;
- (void)setReadOnly:(bool)arg1;
- (void)stopObservingChanges;

@end
