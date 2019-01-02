/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisStyle : TSCHBaseStyle

+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)identifierForCategoryStyleWithRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;
+ (id)identifierForValueStyleWithRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;
+ (id)imageFillProperties;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg1;
+ (id)presetStyleDescriptorForCategoryStyleOrdinal:(unsigned long long)arg1;
+ (id)presetStyleDescriptorForValueStyleOrdinal:(unsigned long long)arg1;
+ (id)properties;

- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(bool)arg4;
- (void)loadFromPreUFFArchiveWithUnarchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)p_upgrade3DChartPropertiesFrom2DProperties:(id)arg1;
- (void)p_upgradeRemoveShadowEnabledPropertyUsage:(id)arg1;
- (void)saveToArchiver:(id)arg1;

@end
