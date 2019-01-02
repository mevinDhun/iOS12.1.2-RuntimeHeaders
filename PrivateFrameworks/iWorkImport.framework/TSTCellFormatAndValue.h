/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellFormatAndValue : NSObject <NSCopying, TSSPropertyCommandSerializing, TSTCellDiffing> {
    bool  _applySpareFormatOnly;
    bool  _boolValue;
    TSKFormat * _booleanFormat;
    unsigned int  _cellFormatKind;
    TSKFormat * _currencyFormat;
    TSKFormat * _dateFormat;
    double  _doubleValue;
    TSKFormat * _durationFormat;
    unsigned short  _explicitFlags;
    TSWPStorage * _formattedRichTextStorage;
    NSString * _formattedValue;
    TSKFormat * _numberFormat;
    NSObject * _objValue;
    int  _spareFormatType;
    bool  _suppressApplyValue;
    TSKFormat * _textFormat;
    bool  _useAllSpareFormats;
    unsigned int  _valueType;
}

@property (nonatomic, readonly, copy) NSDate *dateValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isApplySpareFormatOnly;
@property (nonatomic, readonly) bool isFormulaSyntaxError;
@property (nonatomic, readonly) double numberOrCurrencyDoubleValue;
@property (nonatomic, readonly) TSWPStorage *richTextOrErrorTextStorageValue;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int valueType;

+ (id)cellDiffProperties;
+ (id)formatAndValueFromCell:(id)arg1 applySpareFormatOnly:(int)arg2;
+ (id)formatAndValueFromCell:(id)arg1 useAllSpareFormats:(bool)arg2;
+ (id)formatAndValueFromCell:(id)arg1 useAllSpareFormats:(bool)arg2 forceNoContent:(bool)arg3;
+ (id)formatAndValueFromRichTextCell:(id)arg1 updatingStorageWithBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)applyToCell:(id)arg1;
- (id)cellValueWithLocale:(id)arg1;
- (id)copyForApplyingNoContent;
- (id)copyForApplyingNoContentWithSuppressApplyValue:(bool)arg1;
- (id)copyForNotApplyingValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateValue;
- (id)getCurrentFormat;
- (bool)hasStringContentMatchingCell:(id)arg1;
- (id)initFromCell:(id)arg1 useAllSpareFormats:(bool)arg2;
- (id)initFromCell:(id)arg1 useAllSpareFormats:(bool)arg2 forceNoContent:(bool)arg3 applySpareFormatOnly:(int)arg4;
- (id)initFromPropertyCommandMessage:(const struct Message { int (**x1)(); }*)arg1 unarchiver:(id)arg2;
- (bool)isApplySpareFormatOnly;
- (bool)isFormulaSyntaxError;
- (double)numberOrCurrencyDoubleValue;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;
- (id)p_copyStorage:(id)arg1;
- (id)p_formatForFormatType:(unsigned int)arg1;
- (id)richTextOrErrorTextStorageValue;
- (void)saveToPropertyCommandMessage:(struct Message { int (**x1)(); }*)arg1 archiver:(id)arg2;
- (void)setDateValue:(id)arg1;
- (id)stringValue;
- (int)valueType;

@end
