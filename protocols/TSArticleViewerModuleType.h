/* Generated by EzioChiu.
 */

@protocol TSArticleViewerModuleType

@required

- (UIViewController *)createViewControllerForArticleID:(NSString *)arg1 headline:(id <FCHeadlineProviding>)arg2 articleContext:(TSArticleContext *)arg3 notificationSenderChannelID:(NSString *)arg4 articlePresentationStyle:(long long)arg5 showShareSheet:(bool)arg6 forceArticleUpdate:(bool)arg7 presentingEditorialArticle:(bool)arg8;

@end
