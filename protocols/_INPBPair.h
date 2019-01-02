/* Generated by EzioChiu.
 */

@protocol _INPBPair <NSObject>

@required

+ (Class)pairCurrencyAmountValueType;
+ (Class)pairCustomObjectType;
+ (Class)pairDataStringType;
+ (Class)pairDistanceValueType;
+ (Class)pairDoubleValueType;
+ (Class)pairImageValueType;
+ (Class)pairIntegerValueType;
+ (Class)pairLocationValueType;
+ (Class)pairPaymentMethodValueType;
+ (Class)pairPersonValueType;
+ (Class)pairStringValueType;
+ (Class)pairTemperatureValueType;
+ (Class)pairUrlValueType;

- (void)addPairCurrencyAmountValue:(_INPBCurrencyAmountValue *)arg1;
- (void)addPairCustomObject:(_INPBCustomObject *)arg1;
- (void)addPairDataString:(_INPBDataString *)arg1;
- (void)addPairDistanceValue:(_INPBDistanceValue *)arg1;
- (void)addPairDoubleValue:(_INPBDoubleValue *)arg1;
- (void)addPairImageValue:(_INPBImageValue *)arg1;
- (void)addPairIntegerValue:(_INPBIntegerValue *)arg1;
- (void)addPairLocationValue:(_INPBLocationValue *)arg1;
- (void)addPairPaymentMethodValue:(_INPBPaymentMethodValue *)arg1;
- (void)addPairPersonValue:(_INPBContactValue *)arg1;
- (void)addPairStringValue:(_INPBStringValue *)arg1;
- (void)addPairTemperatureValue:(_INPBTemperatureValue *)arg1;
- (void)addPairUrlValue:(_INPBURLValue *)arg1;
- (void)clearPairCurrencyAmountValues;
- (void)clearPairCustomObjects;
- (void)clearPairDataStrings;
- (void)clearPairDistanceValues;
- (void)clearPairDoubleValues;
- (void)clearPairImageValues;
- (void)clearPairIntegerValues;
- (void)clearPairLocationValues;
- (void)clearPairPaymentMethodValues;
- (void)clearPairPersonValues;
- (void)clearPairStringValues;
- (void)clearPairTemperatureValues;
- (void)clearPairUrlValues;
- (bool)hasKey;
- (bool)hasRepeated;
- (NSString *)key;
- (_INPBCurrencyAmountValue *)pairCurrencyAmountValueAtIndex:(unsigned long long)arg1;
- (NSArray *)pairCurrencyAmountValues;
- (unsigned long long)pairCurrencyAmountValuesCount;
- (_INPBCustomObject *)pairCustomObjectAtIndex:(unsigned long long)arg1;
- (NSArray *)pairCustomObjects;
- (unsigned long long)pairCustomObjectsCount;
- (_INPBDataString *)pairDataStringAtIndex:(unsigned long long)arg1;
- (NSArray *)pairDataStrings;
- (unsigned long long)pairDataStringsCount;
- (_INPBDistanceValue *)pairDistanceValueAtIndex:(unsigned long long)arg1;
- (NSArray *)pairDistanceValues;
- (unsigned long long)pairDistanceValuesCount;
- (_INPBDoubleValue *)pairDoubleValueAtIndex:(unsigned long long)arg1;
- (NSArray *)pairDoubleValues;
- (unsigned long long)pairDoubleValuesCount;
- (_INPBImageValue *)pairImageValueAtIndex:(unsigned long long)arg1;
- (NSArray *)pairImageValues;
- (unsigned long long)pairImageValuesCount;
- (_INPBIntegerValue *)pairIntegerValueAtIndex:(unsigned long long)arg1;
- (NSArray *)pairIntegerValues;
- (unsigned long long)pairIntegerValuesCount;
- (_INPBLocationValue *)pairLocationValueAtIndex:(unsigned long long)arg1;
- (NSArray *)pairLocationValues;
- (unsigned long long)pairLocationValuesCount;
- (_INPBPaymentMethodValue *)pairPaymentMethodValueAtIndex:(unsigned long long)arg1;
- (NSArray *)pairPaymentMethodValues;
- (unsigned long long)pairPaymentMethodValuesCount;
- (_INPBContactValue *)pairPersonValueAtIndex:(unsigned long long)arg1;
- (NSArray *)pairPersonValues;
- (unsigned long long)pairPersonValuesCount;
- (_INPBStringValue *)pairStringValueAtIndex:(unsigned long long)arg1;
- (NSArray *)pairStringValues;
- (unsigned long long)pairStringValuesCount;
- (_INPBTemperatureValue *)pairTemperatureValueAtIndex:(unsigned long long)arg1;
- (NSArray *)pairTemperatureValues;
- (unsigned long long)pairTemperatureValuesCount;
- (_INPBURLValue *)pairUrlValueAtIndex:(unsigned long long)arg1;
- (NSArray *)pairUrlValues;
- (unsigned long long)pairUrlValuesCount;
- (bool)repeated;
- (void)setHasRepeated:(bool)arg1;
- (void)setKey:(NSString *)arg1;
- (void)setPairCurrencyAmountValues:(NSArray *)arg1;
- (void)setPairCustomObjects:(NSArray *)arg1;
- (void)setPairDataStrings:(NSArray *)arg1;
- (void)setPairDistanceValues:(NSArray *)arg1;
- (void)setPairDoubleValues:(NSArray *)arg1;
- (void)setPairImageValues:(NSArray *)arg1;
- (void)setPairIntegerValues:(NSArray *)arg1;
- (void)setPairLocationValues:(NSArray *)arg1;
- (void)setPairPaymentMethodValues:(NSArray *)arg1;
- (void)setPairPersonValues:(NSArray *)arg1;
- (void)setPairStringValues:(NSArray *)arg1;
- (void)setPairTemperatureValues:(NSArray *)arg1;
- (void)setPairUrlValues:(NSArray *)arg1;
- (void)setRepeated:(bool)arg1;

@end
