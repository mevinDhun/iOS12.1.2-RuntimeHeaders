/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIAppIconImage : SearchUIImage {
    NSString * _bundleIdentifier;
    unsigned long long  _variant;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long variant;

+ (id)appIconForBundleIdentifier:(id)arg1 variant:(unsigned long long)arg2;
+ (id)appIconForBundleIdentifier:(id)arg1 webClipIdentifier:(id)arg2 variant:(unsigned long long)arg3;
+ (id)appIconForImage:(id)arg1 variant:(unsigned long long)arg2;
+ (id)appIconForResult:(id)arg1 variant:(unsigned long long)arg2;
+ (double)cornerRadiusForVariant:(unsigned long long)arg1;
+ (int)iconFormatForVariant:(unsigned long long)arg1;
+ (struct CGSize { double x1; double x2; })sizeForVariant:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)generateImageWithFormat:(int)arg1;
- (id)initWithBundleIdentifier:(id)arg1 variant:(unsigned long long)arg2;
- (id)loadImage;
- (bool)needsTinting;
- (void)setBundleIdentifier:(id)arg1;
- (void)setUiImage:(id)arg1;
- (void)setVariant:(unsigned long long)arg1;
- (id)uiImage;
- (unsigned long long)variant;

@end