/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerBlacklistingInstanceInfo : PBCodable <NSCopying> {
    unsigned int  _blacklistingReason;
    unsigned long long  _blacklistingTimestamp;
    struct { 
        unsigned int blacklistingTimestamp : 1; 
        unsigned int blacklistingReason : 1; 
        unsigned int reservedInfo : 1; 
    }  _has;
    unsigned int  _reservedInfo;
}

@property (nonatomic) unsigned int blacklistingReason;
@property (nonatomic) unsigned long long blacklistingTimestamp;
@property (nonatomic) bool hasBlacklistingReason;
@property (nonatomic) bool hasBlacklistingTimestamp;
@property (nonatomic) bool hasReservedInfo;
@property (nonatomic) unsigned int reservedInfo;

- (unsigned int)blacklistingReason;
- (unsigned long long)blacklistingTimestamp;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBlacklistingReason;
- (bool)hasBlacklistingTimestamp;
- (bool)hasReservedInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)reservedInfo;
- (void)setBlacklistingReason:(unsigned int)arg1;
- (void)setBlacklistingTimestamp:(unsigned long long)arg1;
- (void)setHasBlacklistingReason:(bool)arg1;
- (void)setHasBlacklistingTimestamp:(bool)arg1;
- (void)setHasReservedInfo:(bool)arg1;
- (void)setReservedInfo:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
