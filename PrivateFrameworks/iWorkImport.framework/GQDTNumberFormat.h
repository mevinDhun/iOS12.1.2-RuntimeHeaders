/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTNumberFormat : NSObject <GQDNameMappable> {
    unsigned char  mBase;
    unsigned short  mBasePlaces;
    bool  mBaseUsesMinusSign;
    struct __CFString { } * mCurrencyCode;
    long long  mDecimalPlaces;
    unsigned char  mDecimalWidth;
    bool  mFormatContainsIntegerToken;
    bool  mFormatContainsSpecialTokens;
    struct __CFString { } * mFormatString;
    bool  mFormatStringRequiresSuppressionOfMinusSign;
    int  mFractionAccuracy;
    bool  mIgnoreDecimalPlacesForZeroValue;
    unsigned short  mIndexFromRightOfLastDigitPlaceholder;
    NSIndexSet * mInterstitialStringInsertionIndexes;
    NSArray * mInterstitialStrings;
    bool  mIsCustom;
    bool  mIsTextFormat;
    unsigned char  mMinimumIntegerWidth;
    int  mNegativeStyle;
    unsigned char  mNumberOfNonSpaceDecimalPlaceholderDigits;
    unsigned char  mNumberOfNonSpaceIntegerPlaceholderDigits;
    bool  mRequiresFractionReplacement;
    double  mScaleFactor;
    bool  mShowThousandsSeparator;
    struct __CFString { } * mSuffixString;
    char * mUid;
    bool  mUseAccountingStyle;
    bool  mUseScientificFormattingAutomatically;
    int  mValueType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)needToSuppressMinusSignForFormatString:(struct __CFString { }*)arg1;
+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(bool)arg7 fractionAccuracy:(int)arg8 suffixString:(struct __CFString { }*)arg9;
+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (id)baseStringFromDouble:(double)arg1;
- (struct __CFString { }*)createStringFromDouble:(double)arg1;
- (id)currencyCode;
- (id)customNumberFormatTokens;
- (void)dealloc;
- (id)formatString;
- (int)fractionAccuracy;
- (id)fractionStringFromDouble:(double)arg1;
- (bool)hasValidDecimalPlaces;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(bool)arg7 fractionAccuracy:(int)arg8 suffixString:(struct __CFString { }*)arg9 scaleFactor:(double)arg10 base:(unsigned short)arg11 basePlaces:(unsigned short)arg12 baseUseMinusSign:(bool)arg13 isCustom:(bool)arg14 interstitialStrings:(id)arg15 interstitialStringInsertionIndexes:(id)arg16 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg17 minimumIntegerWidth:(unsigned char)arg18 decimalWidth:(unsigned char)arg19 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg20 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg21 isTextFormat:(bool)arg22 formatName:(id)arg23;
- (bool)isCustom;
- (bool)isTextFormat;
- (id)numberFormatBySettingNegativeStyle:(int)arg1;
- (id)numberFormatBySettingValueType:(int)arg1;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (void)setUseScientificFormattingAutomatically:(bool)arg1;
- (bool)showThousandsSeparator;
- (id)stringFromDouble:(double)arg1;
- (bool)useAccountingStyle;
- (int)valueType;

@end
