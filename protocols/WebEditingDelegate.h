/* Generated by EzioChiu.
 */

@protocol WebEditingDelegate <NSObject>

@optional

- (NSUndoManager *)undoManagerForWebView:(WebView *)arg1;
- (bool)webView:(WebView *)arg1 doCommandBySelector:(SEL)arg2;
- (bool)webView:(WebView *)arg1 shouldApplyStyle:(DOMCSSStyleDeclaration *)arg2 toElementsInDOMRange:(DOMRange *)arg3;
- (bool)webView:(WebView *)arg1 shouldBeginEditingInDOMRange:(DOMRange *)arg2;
- (bool)webView:(WebView *)arg1 shouldChangeSelectedDOMRange:(DOMRange *)arg2 toDOMRange:(DOMRange *)arg3 affinity:(int)arg4 stillSelecting:(bool)arg5;
- (bool)webView:(WebView *)arg1 shouldChangeTypingStyle:(DOMCSSStyleDeclaration *)arg2 toStyle:(DOMCSSStyleDeclaration *)arg3;
- (bool)webView:(WebView *)arg1 shouldDeleteDOMRange:(DOMRange *)arg2;
- (bool)webView:(WebView *)arg1 shouldEndEditingInDOMRange:(DOMRange *)arg2;
- (bool)webView:(WebView *)arg1 shouldInsertNode:(DOMNode *)arg2 replacingDOMRange:(DOMRange *)arg3 givenAction:(long long)arg4;
- (bool)webView:(WebView *)arg1 shouldInsertText:(NSString *)arg2 replacingDOMRange:(DOMRange *)arg3 givenAction:(long long)arg4;
- (void)webViewDidBeginEditing:(NSNotification *)arg1;
- (void)webViewDidChange:(NSNotification *)arg1;
- (void)webViewDidChangeSelection:(NSNotification *)arg1;
- (void)webViewDidChangeTypingStyle:(NSNotification *)arg1;
- (void)webViewDidEndEditing:(NSNotification *)arg1;

@end
