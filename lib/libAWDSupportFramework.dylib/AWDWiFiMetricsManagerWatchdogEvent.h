/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerWatchdogEvent : PBCodable <NSCopying> {
    int  _available;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _backTraces;
    unsigned int  _deviceIdentifierMap;
    unsigned int  _eventId;
    NSString * _fileName;
    unsigned int  _flags;
    NSString * _function;
    struct { 
        unsigned int linkRegister : 1; 
        unsigned int programCounter : 1; 
        unsigned int timestamp : 1; 
        unsigned int available : 1; 
        unsigned int deviceIdentifierMap : 1; 
        unsigned int eventId : 1; 
        unsigned int flags : 1; 
        unsigned int lineNumber : 1; 
        unsigned int minorReason : 1; 
        unsigned int reason : 1; 
        unsigned int subreason : 1; 
        unsigned int version : 1; 
    }  _has;
    AWDWiFiMetricJoinTimeout * _joinTimeoutInfo;
    unsigned int  _lineNumber;
    unsigned long long  _linkRegister;
    unsigned int  _minorReason;
    unsigned long long  _programCounter;
    int  _reason;
    NSString * _reasonString;
    unsigned int  _subreason;
    unsigned long long  _timestamp;
    AWDWiFiMetricExtendedTrapInfo * _trapInfo;
    unsigned int  _version;
}

@property (nonatomic) int available;
@property (nonatomic, readonly) unsigned long long*backTraces;
@property (nonatomic, readonly) unsigned long long backTracesCount;
@property (nonatomic) unsigned int deviceIdentifierMap;
@property (nonatomic) unsigned int eventId;
@property (nonatomic, retain) NSString *fileName;
@property (nonatomic) unsigned int flags;
@property (nonatomic, retain) NSString *function;
@property (nonatomic) bool hasAvailable;
@property (nonatomic) bool hasDeviceIdentifierMap;
@property (nonatomic) bool hasEventId;
@property (nonatomic, readonly) bool hasFileName;
@property (nonatomic) bool hasFlags;
@property (nonatomic, readonly) bool hasFunction;
@property (nonatomic, readonly) bool hasJoinTimeoutInfo;
@property (nonatomic) bool hasLineNumber;
@property (nonatomic) bool hasLinkRegister;
@property (nonatomic) bool hasMinorReason;
@property (nonatomic) bool hasProgramCounter;
@property (nonatomic) bool hasReason;
@property (nonatomic, readonly) bool hasReasonString;
@property (nonatomic) bool hasSubreason;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTrapInfo;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) AWDWiFiMetricJoinTimeout *joinTimeoutInfo;
@property (nonatomic) unsigned int lineNumber;
@property (nonatomic) unsigned long long linkRegister;
@property (nonatomic) unsigned int minorReason;
@property (nonatomic) unsigned long long programCounter;
@property (nonatomic) int reason;
@property (nonatomic, retain) NSString *reasonString;
@property (nonatomic) unsigned int subreason;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) AWDWiFiMetricExtendedTrapInfo *trapInfo;
@property (nonatomic) unsigned int version;

- (void)addBackTrace:(unsigned long long)arg1;
- (int)available;
- (unsigned long long)backTraceAtIndex:(unsigned long long)arg1;
- (unsigned long long*)backTraces;
- (unsigned long long)backTracesCount;
- (void)clearBackTraces;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)deviceIdentifierMap;
- (id)dictionaryRepresentation;
- (unsigned int)eventId;
- (id)fileName;
- (unsigned int)flags;
- (id)function;
- (bool)hasAvailable;
- (bool)hasDeviceIdentifierMap;
- (bool)hasEventId;
- (bool)hasFileName;
- (bool)hasFlags;
- (bool)hasFunction;
- (bool)hasJoinTimeoutInfo;
- (bool)hasLineNumber;
- (bool)hasLinkRegister;
- (bool)hasMinorReason;
- (bool)hasProgramCounter;
- (bool)hasReason;
- (bool)hasReasonString;
- (bool)hasSubreason;
- (bool)hasTimestamp;
- (bool)hasTrapInfo;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)joinTimeoutInfo;
- (unsigned int)lineNumber;
- (unsigned long long)linkRegister;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minorReason;
- (unsigned long long)programCounter;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (id)reasonString;
- (void)setAvailable:(int)arg1;
- (void)setBackTraces:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setDeviceIdentifierMap:(unsigned int)arg1;
- (void)setEventId:(unsigned int)arg1;
- (void)setFileName:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setFunction:(id)arg1;
- (void)setHasAvailable:(bool)arg1;
- (void)setHasDeviceIdentifierMap:(bool)arg1;
- (void)setHasEventId:(bool)arg1;
- (void)setHasFlags:(bool)arg1;
- (void)setHasLineNumber:(bool)arg1;
- (void)setHasLinkRegister:(bool)arg1;
- (void)setHasMinorReason:(bool)arg1;
- (void)setHasProgramCounter:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasSubreason:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setJoinTimeoutInfo:(id)arg1;
- (void)setLineNumber:(unsigned int)arg1;
- (void)setLinkRegister:(unsigned long long)arg1;
- (void)setMinorReason:(unsigned int)arg1;
- (void)setProgramCounter:(unsigned long long)arg1;
- (void)setReason:(int)arg1;
- (void)setReasonString:(id)arg1;
- (void)setSubreason:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTrapInfo:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)subreason;
- (unsigned long long)timestamp;
- (id)trapInfo;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
