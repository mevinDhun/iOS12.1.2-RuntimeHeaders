/* Generated by EzioChiu.
 */

@protocol SKUITabBarControllerDelegate <NSObject>

@optional

- (void)tabBarController:(UIViewController<SKUITabBarController> *)arg1 didEndDisplayingViewController:(UIViewController *)arg2;
- (void)tabBarController:(UIViewController<SKUITabBarController> *)arg1 didReselectViewController:(UIViewController *)arg2;
- (void)tabBarController:(UIViewController<SKUITabBarController> *)arg1 didSelectViewController:(UIViewController *)arg2;
- (bool)tabBarController:(UIViewController<SKUITabBarController> *)arg1 shouldFallbackToRootForController:(UIViewController *)arg2;
- (bool)tabBarController:(UIViewController<SKUITabBarController> *)arg1 shouldSelectViewController:(UIViewController *)arg2;
- (void)tabBarController:(UIViewController<SKUITabBarController> *)arg1 willDisplayViewController:(UIViewController *)arg2;
- (void)tabBarController:(UIViewController<SKUITabBarController> *)arg1 willTransitionToSize:(struct CGSize { double x1; double x2; })arg2 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(UIViewController<SKUITabBarController> *)arg1;

@end
