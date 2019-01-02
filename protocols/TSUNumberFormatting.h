/* Generated by EzioChiu.
 */

@protocol TSUNumberFormatting <TSUDataFormat, NSObject>

@required

- (unsigned short)base;
- (unsigned short)basePlaces;
- (bool)baseUseMinusSign;
- (bool)canFormatText;
- (NSString *)currencyCode;
- (bool)customFormatShouldAutoInsertPercentSymbol;
- (NSArray *)customNumberFormatTokens;
- (unsigned short)decimalPlaces;
- (NSString *)formatName;
- (NSString *)formatString;
- (int)fractionAccuracy;
- (bool)hasValidDecimalPlaces;
- (bool)isCustom;
- (bool)isEquivalent:(id)arg1;
- (bool)isTextFormat;
- (int)negativeStyle;
- (double)scaleFactor;
- (void)setFormatName:(NSString *)arg1;
- (bool)showThousandsSeparator;
- (NSString *)stringFromDouble:(double)arg1 locale:(OITSULocale *)arg2;
- (NSString *)stringFromString:(NSString *)arg1;
- (NSString *)suffixString;
- (bool)usesAccountingStyle;
- (bool)usesTabs;
- (bool)usesTextFormatForValue:(double)arg1;
- (int)valueType;

@end
