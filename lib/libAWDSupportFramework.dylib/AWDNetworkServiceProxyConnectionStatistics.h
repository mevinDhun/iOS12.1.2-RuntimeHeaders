/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNetworkServiceProxyConnectionStatistics : PBCodable <NSCopying> {
    unsigned int  _alternatePathCount;
    unsigned long long  _captivePresentCount;
    unsigned int  _captivePresentFailedCount;
    unsigned long long  _connectionCount;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _connectionDurationBuckets;
    unsigned int  _exceededMssCount;
    struct { 
        unsigned int captivePresentCount : 1; 
        unsigned int connectionCount : 1; 
        unsigned int mptcpSuccessCount : 1; 
        unsigned int restrictedNetworkCount : 1; 
        unsigned int resultConnectionResetCount : 1; 
        unsigned int resultNetworkUnavailableCount : 1; 
        unsigned int resultResponseTimeoutCount : 1; 
        unsigned int resultSendFailureCount : 1; 
        unsigned int resultServerBusyCount : 1; 
        unsigned int resultServerDetachedCount : 1; 
        unsigned int resultServerInterruptCount : 1; 
        unsigned int resultServerOfflineCount : 1; 
        unsigned int resultServerOrphanedCount : 1; 
        unsigned int resultServerSessionExpiredCount : 1; 
        unsigned int resultServerUnreachableCount : 1; 
        unsigned int resultSuccessCount : 1; 
        unsigned int resultUnknownErrorCount : 1; 
        unsigned int tfoSuccessCount : 1; 
        unsigned int timestamp : 1; 
        unsigned int alternatePathCount : 1; 
        unsigned int captivePresentFailedCount : 1; 
        unsigned int exceededMssCount : 1; 
        unsigned int interfaceType : 1; 
        unsigned int protocolType : 1; 
        unsigned int restrictedNetworkFailedCount : 1; 
    }  _has;
    int  _interfaceType;
    unsigned long long  _mptcpSuccessCount;
    int  _protocolType;
    unsigned long long  _restrictedNetworkCount;
    unsigned int  _restrictedNetworkFailedCount;
    unsigned long long  _resultConnectionResetCount;
    unsigned long long  _resultNetworkUnavailableCount;
    unsigned long long  _resultResponseTimeoutCount;
    unsigned long long  _resultSendFailureCount;
    unsigned long long  _resultServerBusyCount;
    unsigned long long  _resultServerDetachedCount;
    unsigned long long  _resultServerInterruptCount;
    unsigned long long  _resultServerOfflineCount;
    unsigned long long  _resultServerOrphanedCount;
    unsigned long long  _resultServerSessionExpiredCount;
    unsigned long long  _resultServerUnreachableCount;
    unsigned long long  _resultSuccessCount;
    unsigned long long  _resultUnknownErrorCount;
    unsigned long long  _tfoSuccessCount;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int alternatePathCount;
@property (nonatomic) unsigned long long captivePresentCount;
@property (nonatomic) unsigned int captivePresentFailedCount;
@property (nonatomic) unsigned long long connectionCount;
@property (nonatomic, readonly) unsigned int*connectionDurationBuckets;
@property (nonatomic, readonly) unsigned long long connectionDurationBucketsCount;
@property (nonatomic) unsigned int exceededMssCount;
@property (nonatomic) bool hasAlternatePathCount;
@property (nonatomic) bool hasCaptivePresentCount;
@property (nonatomic) bool hasCaptivePresentFailedCount;
@property (nonatomic) bool hasConnectionCount;
@property (nonatomic) bool hasExceededMssCount;
@property (nonatomic) bool hasInterfaceType;
@property (nonatomic) bool hasMptcpSuccessCount;
@property (nonatomic) bool hasProtocolType;
@property (nonatomic) bool hasRestrictedNetworkCount;
@property (nonatomic) bool hasRestrictedNetworkFailedCount;
@property (nonatomic) bool hasResultConnectionResetCount;
@property (nonatomic) bool hasResultNetworkUnavailableCount;
@property (nonatomic) bool hasResultResponseTimeoutCount;
@property (nonatomic) bool hasResultSendFailureCount;
@property (nonatomic) bool hasResultServerBusyCount;
@property (nonatomic) bool hasResultServerDetachedCount;
@property (nonatomic) bool hasResultServerInterruptCount;
@property (nonatomic) bool hasResultServerOfflineCount;
@property (nonatomic) bool hasResultServerOrphanedCount;
@property (nonatomic) bool hasResultServerSessionExpiredCount;
@property (nonatomic) bool hasResultServerUnreachableCount;
@property (nonatomic) bool hasResultSuccessCount;
@property (nonatomic) bool hasResultUnknownErrorCount;
@property (nonatomic) bool hasTfoSuccessCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int interfaceType;
@property (nonatomic) unsigned long long mptcpSuccessCount;
@property (nonatomic) int protocolType;
@property (nonatomic) unsigned long long restrictedNetworkCount;
@property (nonatomic) unsigned int restrictedNetworkFailedCount;
@property (nonatomic) unsigned long long resultConnectionResetCount;
@property (nonatomic) unsigned long long resultNetworkUnavailableCount;
@property (nonatomic) unsigned long long resultResponseTimeoutCount;
@property (nonatomic) unsigned long long resultSendFailureCount;
@property (nonatomic) unsigned long long resultServerBusyCount;
@property (nonatomic) unsigned long long resultServerDetachedCount;
@property (nonatomic) unsigned long long resultServerInterruptCount;
@property (nonatomic) unsigned long long resultServerOfflineCount;
@property (nonatomic) unsigned long long resultServerOrphanedCount;
@property (nonatomic) unsigned long long resultServerSessionExpiredCount;
@property (nonatomic) unsigned long long resultServerUnreachableCount;
@property (nonatomic) unsigned long long resultSuccessCount;
@property (nonatomic) unsigned long long resultUnknownErrorCount;
@property (nonatomic) unsigned long long tfoSuccessCount;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsInterfaceType:(id)arg1;
- (int)StringAsProtocolType:(id)arg1;
- (void)addConnectionDurationBuckets:(unsigned int)arg1;
- (unsigned int)alternatePathCount;
- (unsigned long long)captivePresentCount;
- (unsigned int)captivePresentFailedCount;
- (void)clearConnectionDurationBuckets;
- (unsigned long long)connectionCount;
- (unsigned int*)connectionDurationBuckets;
- (unsigned int)connectionDurationBucketsAtIndex:(unsigned long long)arg1;
- (unsigned long long)connectionDurationBucketsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)exceededMssCount;
- (bool)hasAlternatePathCount;
- (bool)hasCaptivePresentCount;
- (bool)hasCaptivePresentFailedCount;
- (bool)hasConnectionCount;
- (bool)hasExceededMssCount;
- (bool)hasInterfaceType;
- (bool)hasMptcpSuccessCount;
- (bool)hasProtocolType;
- (bool)hasRestrictedNetworkCount;
- (bool)hasRestrictedNetworkFailedCount;
- (bool)hasResultConnectionResetCount;
- (bool)hasResultNetworkUnavailableCount;
- (bool)hasResultResponseTimeoutCount;
- (bool)hasResultSendFailureCount;
- (bool)hasResultServerBusyCount;
- (bool)hasResultServerDetachedCount;
- (bool)hasResultServerInterruptCount;
- (bool)hasResultServerOfflineCount;
- (bool)hasResultServerOrphanedCount;
- (bool)hasResultServerSessionExpiredCount;
- (bool)hasResultServerUnreachableCount;
- (bool)hasResultSuccessCount;
- (bool)hasResultUnknownErrorCount;
- (bool)hasTfoSuccessCount;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (int)interfaceType;
- (id)interfaceTypeAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)mptcpSuccessCount;
- (int)protocolType;
- (id)protocolTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)restrictedNetworkCount;
- (unsigned int)restrictedNetworkFailedCount;
- (unsigned long long)resultConnectionResetCount;
- (unsigned long long)resultNetworkUnavailableCount;
- (unsigned long long)resultResponseTimeoutCount;
- (unsigned long long)resultSendFailureCount;
- (unsigned long long)resultServerBusyCount;
- (unsigned long long)resultServerDetachedCount;
- (unsigned long long)resultServerInterruptCount;
- (unsigned long long)resultServerOfflineCount;
- (unsigned long long)resultServerOrphanedCount;
- (unsigned long long)resultServerSessionExpiredCount;
- (unsigned long long)resultServerUnreachableCount;
- (unsigned long long)resultSuccessCount;
- (unsigned long long)resultUnknownErrorCount;
- (void)setAlternatePathCount:(unsigned int)arg1;
- (void)setCaptivePresentCount:(unsigned long long)arg1;
- (void)setCaptivePresentFailedCount:(unsigned int)arg1;
- (void)setConnectionCount:(unsigned long long)arg1;
- (void)setConnectionDurationBuckets:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setExceededMssCount:(unsigned int)arg1;
- (void)setHasAlternatePathCount:(bool)arg1;
- (void)setHasCaptivePresentCount:(bool)arg1;
- (void)setHasCaptivePresentFailedCount:(bool)arg1;
- (void)setHasConnectionCount:(bool)arg1;
- (void)setHasExceededMssCount:(bool)arg1;
- (void)setHasInterfaceType:(bool)arg1;
- (void)setHasMptcpSuccessCount:(bool)arg1;
- (void)setHasProtocolType:(bool)arg1;
- (void)setHasRestrictedNetworkCount:(bool)arg1;
- (void)setHasRestrictedNetworkFailedCount:(bool)arg1;
- (void)setHasResultConnectionResetCount:(bool)arg1;
- (void)setHasResultNetworkUnavailableCount:(bool)arg1;
- (void)setHasResultResponseTimeoutCount:(bool)arg1;
- (void)setHasResultSendFailureCount:(bool)arg1;
- (void)setHasResultServerBusyCount:(bool)arg1;
- (void)setHasResultServerDetachedCount:(bool)arg1;
- (void)setHasResultServerInterruptCount:(bool)arg1;
- (void)setHasResultServerOfflineCount:(bool)arg1;
- (void)setHasResultServerOrphanedCount:(bool)arg1;
- (void)setHasResultServerSessionExpiredCount:(bool)arg1;
- (void)setHasResultServerUnreachableCount:(bool)arg1;
- (void)setHasResultSuccessCount:(bool)arg1;
- (void)setHasResultUnknownErrorCount:(bool)arg1;
- (void)setHasTfoSuccessCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInterfaceType:(int)arg1;
- (void)setMptcpSuccessCount:(unsigned long long)arg1;
- (void)setProtocolType:(int)arg1;
- (void)setRestrictedNetworkCount:(unsigned long long)arg1;
- (void)setRestrictedNetworkFailedCount:(unsigned int)arg1;
- (void)setResultConnectionResetCount:(unsigned long long)arg1;
- (void)setResultNetworkUnavailableCount:(unsigned long long)arg1;
- (void)setResultResponseTimeoutCount:(unsigned long long)arg1;
- (void)setResultSendFailureCount:(unsigned long long)arg1;
- (void)setResultServerBusyCount:(unsigned long long)arg1;
- (void)setResultServerDetachedCount:(unsigned long long)arg1;
- (void)setResultServerInterruptCount:(unsigned long long)arg1;
- (void)setResultServerOfflineCount:(unsigned long long)arg1;
- (void)setResultServerOrphanedCount:(unsigned long long)arg1;
- (void)setResultServerSessionExpiredCount:(unsigned long long)arg1;
- (void)setResultServerUnreachableCount:(unsigned long long)arg1;
- (void)setResultSuccessCount:(unsigned long long)arg1;
- (void)setResultUnknownErrorCount:(unsigned long long)arg1;
- (void)setTfoSuccessCount:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)tfoSuccessCount;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
