/* Generated by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFTagInternal : NSObject <NFTag, NSSecureCoding> {
    NSData * _AppData;
    NSData * _IDm;
    NSData * _PMm;
    NSData * _SystemCode;
    NSData * _UID;
    NSArray * _allSystemCodes;
    NSData * _tagID;
    unsigned int  _technology;
    unsigned int  _type;
}

@property (nonatomic, readonly, copy) NSData *AppData;
@property (nonatomic, readonly, copy) NSData *IDm;
@property (nonatomic, readonly, copy) NSData *PMm;
@property (nonatomic, readonly, copy) NSData *SystemCode;
@property (nonatomic, readonly, copy) NSData *UID;
@property (nonatomic, readonly, copy) NSArray *allSystemCodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSData *tagID;
@property (nonatomic, readonly) unsigned int technology;
@property (nonatomic, readonly) unsigned int type;

+ (bool)supportsSecureCoding;

- (id)AppData;
- (id)IDm;
- (id)PMm;
- (id)SystemCode;
- (id)UID;
- (id)_getSystemCodeListString;
- (void)_setAppData:(id)arg1;
- (void)_setIDm:(id)arg1;
- (void)_setIdentifier:(id)arg1;
- (void)_setPMm:(id)arg1;
- (void)_setSystemCode:(id)arg1;
- (void)_setSystemCodes:(id)arg1;
- (void)_setTechnology:(unsigned int)arg1;
- (void)_setType:(unsigned int)arg1;
- (void)_setUID:(id)arg1;
- (id)allSystemCodes;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNFTag:(id)arg1;
- (id)initWithNFTagForUIDOnly:(id)arg1;
- (id)tagID;
- (unsigned int)technology;
- (unsigned int)type;

@end
