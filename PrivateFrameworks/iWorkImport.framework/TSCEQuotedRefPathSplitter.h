/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEQuotedRefPathSplitter : NSObject {
    NSString * _localizedBlankGroupName;
    NSString * _localizedErrorGroupName;
    NSString * _localizedFalseGroupName;
    NSString * _localizedTrueGroupName;
    NSMutableArray * _quotedComponents;
}

@property (nonatomic, retain) NSString *localizedBlankGroupName;
@property (nonatomic, retain) NSString *localizedErrorGroupName;
@property (nonatomic, retain) NSString *localizedFalseGroupName;
@property (nonatomic, retain) NSString *localizedTrueGroupName;

+ (bool)isColon:(id)arg1;
+ (bool)isDollar:(id)arg1;
+ (bool)isLeftParen:(id)arg1;
+ (bool)isRightParen:(id)arg1;
+ (bool)isSingleQuote:(id)arg1;
+ (bool)isSingleQuotePair:(id)arg1 ch2:(id)arg2;

- (void).cxx_destruct;
- (void)addComponent:(id)arg1;
- (id)componentAtIndex:(unsigned long long)arg1;
- (id)description;
- (id)initWithComponents:(id)arg1 aggregateFunction:(id)arg2;
- (id)initWithReferenceString:(id)arg1;
- (id)localizedBlankGroupName;
- (id)localizedErrorGroupName;
- (id)localizedFalseGroupName;
- (id)localizedTrueGroupName;
- (unsigned long long)numComponents;
- (void)setLocalizedBlankGroupName:(id)arg1;
- (void)setLocalizedErrorGroupName:(id)arg1;
- (void)setLocalizedFalseGroupName:(id)arg1;
- (void)setLocalizedTrueGroupName:(id)arg1;
- (void)splitRefPath:(id)arg1;

@end
