/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGLanguageDetection : NSObject

+ (id)_defaultLanguage;
+ (id)detectLanguageFromLanguageTags:(id)arg1;
+ (id)detectLanguageFromLanguageTags:(id)arg1 withMinimumCount:(unsigned long long)arg2 withMinimumAgreement:(double)arg3;
+ (id)detectLanguageFromText:(id)arg1;
+ (id)detectLanguageFromText:(id)arg1 withMaxLength:(unsigned long long)arg2 withMaxTags:(unsigned long long)arg3 withMinimumCount:(unsigned long long)arg4 withMinimumAgreement:(double)arg5;
+ (id)dominantLanguageTagFromLanguageTags:(id)arg1;
+ (id)dominantLanguageTagFromLanguageTags:(id)arg1 withMinimumCount:(unsigned long long)arg2 withMinimumAgreement:(double)arg3;
+ (id)dominantLanguageTagFromText:(id)arg1;
+ (id)dominantLanguageTagFromText:(id)arg1 withMaxLength:(unsigned long long)arg2 withMaxTags:(unsigned long long)arg3 withMinimumCount:(unsigned long long)arg4 withMinimumAgreement:(double)arg5;
+ (id)languageTagsFromText:(id)arg1 withMaxLength:(unsigned long long)arg2 withMaxTags:(unsigned long long)arg3;

@end