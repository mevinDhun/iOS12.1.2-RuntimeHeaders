/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface CBDisplayModuleHID : CBModule <CBContainerModuleProtocol> {
    NSNumber * _PID;
    NSNumber * _VID;
    unsigned long long  _brighntessUpdateCounter;
    struct __IOHIDElement { } * _brightnessElement;
    NSObject<OS_dispatch_queue> * _brightnessUpdateQueue;
    float  _brightnessUpdateTarget;
    NSUUID * _containerID;
    float  _currentNits;
    struct __IOHIDElement { } * _durationElement;
    NSArray * _elements;
    struct __IOHIDDevice { } * _hidDisplayDevice;
    NSObject<OS_os_log> * _logHandle;
    float  _maxNits;
    float  _minNits;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)copyPropertyForKey:(id)arg1;
- (id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
- (void)dealloc;
- (float)getBrightnessForNits:(float)arg1;
- (bool)getNits:(float*)arg1;
- (float)getNitsForBrightness:(float)arg1;
- (bool)handleDisplayBrightnessProperty:(id)arg1;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (id)initWithDevice:(unsigned int)arg1 andQueue:(id)arg2;
- (bool)setNits:(float)arg1;
- (bool)setNits:(float)arg1 withPeriod:(float)arg2;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (bool)setSlider:(float)arg1;
- (void)start;
- (void)stop;

@end