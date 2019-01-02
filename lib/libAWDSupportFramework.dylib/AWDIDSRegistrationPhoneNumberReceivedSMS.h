/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSRegistrationPhoneNumberReceivedSMS : PBCodable <NSCopying> {
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int smsRoundTripDuration : 1; 
    }  _has;
    unsigned int  _smsRoundTripDuration;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *guid;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasSmsRoundTripDuration;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int smsRoundTripDuration;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (bool)hasGuid;
- (bool)hasSmsRoundTripDuration;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasSmsRoundTripDuration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSmsRoundTripDuration:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)smsRoundTripDuration;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
