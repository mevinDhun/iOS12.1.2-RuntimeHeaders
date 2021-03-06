/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface CMMTLCommandQueue : NSObject <MTLCommandQueueSPI> {
    CMMTLDevice * _cmDevice;
    <MTLCommandQueue> * _commandQueue;
}

@property (getter=isStatEnabled, nonatomic) bool StatEnabled;
@property (getter=getStatLocations, nonatomic) unsigned long long StatLocations;
@property (getter=getStatOptions, nonatomic) unsigned long long StatOptions;
@property int backgroundTrackingPID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property bool executionEnabled;
@property (readonly) unsigned long long hash;
@property bool isOpenGLQueue;
@property (copy) NSString *label;
@property (readonly) unsigned long long maxCommandBufferCount;
@property (getter=isProfilingEnabled) bool profilingEnabled;
@property (readonly) unsigned long long qosClass;
@property (readonly) long long qosRelativePriority;
@property bool skipRender;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (void)forwardInvocation:(id)arg1;
- (id)initWithCMMTLDevice:(id)arg1;

@end
