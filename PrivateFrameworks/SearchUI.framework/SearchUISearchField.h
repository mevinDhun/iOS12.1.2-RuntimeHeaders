/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUISearchField : MFAtomTextView {
    SearchUIResultViewController * _resultViewController;
}

@property SearchUIResultViewController *resultViewController;
@property (readonly) NSString *searchText;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_markedTextNSRange;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)nextResponder;
- (id)resultViewController;
- (id)searchText;
- (void)setResultViewController:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (id)textFromMarkedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 markedTextReplacement:(id)arg2;

@end