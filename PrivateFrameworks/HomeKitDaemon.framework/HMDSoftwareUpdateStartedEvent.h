/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSoftwareUpdateStartedEvent : HMDLogEvent <HMDAWDLogEvent> {
    bool  _automaticUpdateEnabled;
}

@property (getter=isAutomaticUpdateEnabled, nonatomic) bool automaticUpdateEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)eventUpdateStartedWithAutomaticUpdateEnabled:(bool)arg1;
+ (void)initialize;
+ (id)uuid;

- (unsigned int)AWDMessageType;
- (bool)isAutomaticUpdateEnabled;
- (id)metricForAWD;
- (void)setAutomaticUpdateEnabled:(bool)arg1;

@end