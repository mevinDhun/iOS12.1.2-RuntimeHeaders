/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSRecognitionDisambiguateAction : VSRecognitionRecognizeAction {
    NSMutableDictionary * _ambiguousPhoneticValues;
    NSMutableDictionary * _ambiguousValues;
    void * _context;
    NSMutableDictionary * _knownPhoneticValues;
    NSMutableDictionary * _knownValues;
    NSString * _repeatedSpokenFeedbackString;
    NSString * _sequenceTag;
}

- (id)_actionForEmptyResults;
- (struct __VSRecognition { }*)_createRecognitionInstanceWithCallbacks:(struct { int (*x1)(); int (*x2)(); int (*x3)(); }*)arg1 info:(void*)arg2;
- (struct __VSRecognitionDisambiguationContext { }*)_disambiguationContext;
- (bool)_keywordIndexChanged;
- (id)_keywords;
- (id)ambiguousValuesForClassIdentifier:(id)arg1;
- (int)completionType;
- (void)dealloc;
- (id)knownValueForClassIdentifier:(id)arg1;
- (id)knownValuesForClassIdentifier:(id)arg1;
- (id)repeatedSpokenFeedbackString;
- (id)sequenceTag;
- (void)setAmbiguousValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3;
- (void)setKeywords:(id)arg1;
- (void)setKnownValue:(id)arg1 phoneticValue:(id)arg2 forClassIdentifier:(id)arg3;
- (void)setKnownValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3;
- (void)setRepeatedSpokenFeedbackString:(id)arg1;
- (void)setSequenceTag:(id)arg1;

@end