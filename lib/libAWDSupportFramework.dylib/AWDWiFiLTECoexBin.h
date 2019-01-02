/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiLTECoexBin : PBCodable <NSCopying> {
    unsigned long long  _ctsnotrxafterrts;
    struct { 
        unsigned int ctsnotrxafterrts : 1; 
        unsigned int rxframe : 1; 
        unsigned int rxrtry : 1; 
        unsigned int txassocreq : 1; 
        unsigned int txassocrsp : 1; 
        unsigned int txdeauth : 1; 
        unsigned int txframe : 1; 
        unsigned int txnocts : 1; 
        unsigned int txreassocreq : 1; 
        unsigned int txreassocrsp : 1; 
        unsigned int txretrans : 1; 
        unsigned int txrts : 1; 
    }  _has;
    unsigned long long  _rxframe;
    unsigned long long  _rxrtry;
    unsigned long long  _txassocreq;
    unsigned long long  _txassocrsp;
    unsigned long long  _txdeauth;
    unsigned long long  _txframe;
    unsigned long long  _txnocts;
    unsigned long long  _txreassocreq;
    unsigned long long  _txreassocrsp;
    unsigned long long  _txretrans;
    unsigned long long  _txrts;
}

@property (nonatomic) unsigned long long ctsnotrxafterrts;
@property (nonatomic) bool hasCtsnotrxafterrts;
@property (nonatomic) bool hasRxframe;
@property (nonatomic) bool hasRxrtry;
@property (nonatomic) bool hasTxassocreq;
@property (nonatomic) bool hasTxassocrsp;
@property (nonatomic) bool hasTxdeauth;
@property (nonatomic) bool hasTxframe;
@property (nonatomic) bool hasTxnocts;
@property (nonatomic) bool hasTxreassocreq;
@property (nonatomic) bool hasTxreassocrsp;
@property (nonatomic) bool hasTxretrans;
@property (nonatomic) bool hasTxrts;
@property (nonatomic) unsigned long long rxframe;
@property (nonatomic) unsigned long long rxrtry;
@property (nonatomic) unsigned long long txassocreq;
@property (nonatomic) unsigned long long txassocrsp;
@property (nonatomic) unsigned long long txdeauth;
@property (nonatomic) unsigned long long txframe;
@property (nonatomic) unsigned long long txnocts;
@property (nonatomic) unsigned long long txreassocreq;
@property (nonatomic) unsigned long long txreassocrsp;
@property (nonatomic) unsigned long long txretrans;
@property (nonatomic) unsigned long long txrts;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)ctsnotrxafterrts;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCtsnotrxafterrts;
- (bool)hasRxframe;
- (bool)hasRxrtry;
- (bool)hasTxassocreq;
- (bool)hasTxassocrsp;
- (bool)hasTxdeauth;
- (bool)hasTxframe;
- (bool)hasTxnocts;
- (bool)hasTxreassocreq;
- (bool)hasTxreassocrsp;
- (bool)hasTxretrans;
- (bool)hasTxrts;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)rxframe;
- (unsigned long long)rxrtry;
- (void)setCtsnotrxafterrts:(unsigned long long)arg1;
- (void)setHasCtsnotrxafterrts:(bool)arg1;
- (void)setHasRxframe:(bool)arg1;
- (void)setHasRxrtry:(bool)arg1;
- (void)setHasTxassocreq:(bool)arg1;
- (void)setHasTxassocrsp:(bool)arg1;
- (void)setHasTxdeauth:(bool)arg1;
- (void)setHasTxframe:(bool)arg1;
- (void)setHasTxnocts:(bool)arg1;
- (void)setHasTxreassocreq:(bool)arg1;
- (void)setHasTxreassocrsp:(bool)arg1;
- (void)setHasTxretrans:(bool)arg1;
- (void)setHasTxrts:(bool)arg1;
- (void)setRxframe:(unsigned long long)arg1;
- (void)setRxrtry:(unsigned long long)arg1;
- (void)setTxassocreq:(unsigned long long)arg1;
- (void)setTxassocrsp:(unsigned long long)arg1;
- (void)setTxdeauth:(unsigned long long)arg1;
- (void)setTxframe:(unsigned long long)arg1;
- (void)setTxnocts:(unsigned long long)arg1;
- (void)setTxreassocreq:(unsigned long long)arg1;
- (void)setTxreassocrsp:(unsigned long long)arg1;
- (void)setTxretrans:(unsigned long long)arg1;
- (void)setTxrts:(unsigned long long)arg1;
- (unsigned long long)txassocreq;
- (unsigned long long)txassocrsp;
- (unsigned long long)txdeauth;
- (unsigned long long)txframe;
- (unsigned long long)txnocts;
- (unsigned long long)txreassocreq;
- (unsigned long long)txreassocrsp;
- (unsigned long long)txretrans;
- (unsigned long long)txrts;
- (void)writeTo:(id)arg1;

@end
