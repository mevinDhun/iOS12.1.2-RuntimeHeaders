/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineSettingsClusterView : PBCodable <NSCopying> {
    int  _clusterCount;
    int  _elsewhereCount;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int clusterCount : 1; 
        unsigned int elsewhereCount : 1; 
    }  _has;
    NSString * _sessionId;
    unsigned long long  _timestamp;
}

@property (nonatomic) int clusterCount;
@property (nonatomic) int elsewhereCount;
@property (nonatomic) bool hasClusterCount;
@property (nonatomic) bool hasElsewhereCount;
@property (nonatomic, readonly) bool hasSessionId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic) unsigned long long timestamp;

- (int)clusterCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)elsewhereCount;
- (bool)hasClusterCount;
- (bool)hasElsewhereCount;
- (bool)hasSessionId;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionId;
- (void)setClusterCount:(int)arg1;
- (void)setElsewhereCount:(int)arg1;
- (void)setHasClusterCount:(bool)arg1;
- (void)setHasElsewhereCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
