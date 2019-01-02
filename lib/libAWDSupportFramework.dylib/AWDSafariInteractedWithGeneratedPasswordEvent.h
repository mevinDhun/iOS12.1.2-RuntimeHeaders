/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSafariInteractedWithGeneratedPasswordEvent : PBCodable <NSCopying> {
    int  _generatedPasswordInteractionType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int generatedPasswordInteractionType : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) int generatedPasswordInteractionType;
@property (nonatomic) bool hasGeneratedPasswordInteractionType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsGeneratedPasswordInteractionType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)generatedPasswordInteractionType;
- (id)generatedPasswordInteractionTypeAsString:(int)arg1;
- (bool)hasGeneratedPasswordInteractionType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGeneratedPasswordInteractionType:(int)arg1;
- (void)setHasGeneratedPasswordInteractionType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
