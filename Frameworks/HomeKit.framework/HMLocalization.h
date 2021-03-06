/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMLocalization : NSObject {
    NSDictionary * _localizedStrings;
    HMFUnfairLock * _lock;
}

@property (nonatomic, readonly) NSDictionary *localizedStrings;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_updateLocalizedStrings;
- (void)dealloc;
- (id)getLocalizedOrCustomString:(id)arg1;
- (id)getLocalizedString:(id)arg1;
- (id)init;
- (id)localizedStrings;

@end
