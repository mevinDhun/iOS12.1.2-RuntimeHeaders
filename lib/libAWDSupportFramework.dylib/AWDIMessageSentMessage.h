/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIMessageSentMessage : PBCodable <NSCopying> {
    unsigned int  _connectionType;
    int  _fzError;
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int fzError : 1; 
        unsigned int hasAttachments : 1; 
        unsigned int isGroupMessage : 1; 
        unsigned int isToEmail : 1; 
        unsigned int isToPhoneNumber : 1; 
        unsigned int isTypingIndicator : 1; 
        unsigned int messageError : 1; 
        unsigned int sendDuration : 1; 
    }  _has;
    unsigned int  _hasAttachments;
    unsigned int  _isGroupMessage;
    unsigned int  _isToEmail;
    unsigned int  _isToPhoneNumber;
    unsigned int  _isTypingIndicator;
    unsigned int  _messageError;
    unsigned int  _sendDuration;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int connectionType;
@property (nonatomic) int fzError;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) unsigned int hasAttachments;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasFzError;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasHasAttachments;
@property (nonatomic) bool hasIsGroupMessage;
@property (nonatomic) bool hasIsToEmail;
@property (nonatomic) bool hasIsToPhoneNumber;
@property (nonatomic) bool hasIsTypingIndicator;
@property (nonatomic) bool hasMessageError;
@property (nonatomic) bool hasSendDuration;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int isGroupMessage;
@property (nonatomic) unsigned int isToEmail;
@property (nonatomic) unsigned int isToPhoneNumber;
@property (nonatomic) unsigned int isTypingIndicator;
@property (nonatomic) unsigned int messageError;
@property (nonatomic) unsigned int sendDuration;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)fzError;
- (id)guid;
- (unsigned int)hasAttachments;
- (bool)hasConnectionType;
- (bool)hasFzError;
- (bool)hasGuid;
- (bool)hasHasAttachments;
- (bool)hasIsGroupMessage;
- (bool)hasIsToEmail;
- (bool)hasIsToPhoneNumber;
- (bool)hasIsTypingIndicator;
- (bool)hasMessageError;
- (bool)hasSendDuration;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)isGroupMessage;
- (unsigned int)isToEmail;
- (unsigned int)isToPhoneNumber;
- (unsigned int)isTypingIndicator;
- (void)mergeFrom:(id)arg1;
- (unsigned int)messageError;
- (bool)readFrom:(id)arg1;
- (unsigned int)sendDuration;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setFzError:(int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasAttachments:(unsigned int)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasFzError:(bool)arg1;
- (void)setHasHasAttachments:(bool)arg1;
- (void)setHasIsGroupMessage:(bool)arg1;
- (void)setHasIsToEmail:(bool)arg1;
- (void)setHasIsToPhoneNumber:(bool)arg1;
- (void)setHasIsTypingIndicator:(bool)arg1;
- (void)setHasMessageError:(bool)arg1;
- (void)setHasSendDuration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsGroupMessage:(unsigned int)arg1;
- (void)setIsToEmail:(unsigned int)arg1;
- (void)setIsToPhoneNumber:(unsigned int)arg1;
- (void)setIsTypingIndicator:(unsigned int)arg1;
- (void)setMessageError:(unsigned int)arg1;
- (void)setSendDuration:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
