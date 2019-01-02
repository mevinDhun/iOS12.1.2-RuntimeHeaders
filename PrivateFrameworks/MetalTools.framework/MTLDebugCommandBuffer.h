/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugCommandBuffer : MTLToolsCommandBuffer {
    struct unique_ptr<ILayerLockingPolicy, std::__1::default_delete<ILayerLockingPolicy> > { 
        struct __compressed_pair<ILayerLockingPolicy *, std::__1::default_delete<ILayerLockingPolicy> > { 
            struct ILayerLockingPolicy {} *__value_; 
        } __ptr_; 
    }  _boundForWriteLockingPolicy;
    NSMutableSet * _buffersBoundForWrite;
    _MTLCommandEncoder * _currentEncoder;
    NSMutableSet * _texturesBoundForWrite;
    NSMutableSet * _unsignaledResources;
    struct vector<std::__1::pair<MTLDebugSharedEvent *, unsigned long long>, std::__1::allocator<std::__1::pair<MTLDebugSharedEvent *, unsigned long long> > > { 
        struct pair<MTLDebugSharedEvent *, unsigned long long> {} *__begin_; 
        struct pair<MTLDebugSharedEvent *, unsigned long long> {} *__end_; 
        struct __compressed_pair<std::__1::pair<MTLDebugSharedEvent *, unsigned long long> *, std::__1::allocator<std::__1::pair<MTLDebugSharedEvent *, unsigned long long> > > { 
            struct pair<MTLDebugSharedEvent *, unsigned long long> {} *__value_; 
        } __end_cap_; 
    }  _waitEvents;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_trackRenderPassAttachmentDescriptor:(id)arg1;
- (void)_trackTexture:(id)arg1;
- (void)addSynchronizationNotification:(id /* block */)arg1;
- (id)blitCommandEncoder;
- (void)commit;
- (id)computeCommandEncoder;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (void)dealloc;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)executeSynchronizationNotifications:(int)arg1;
- (void)executeSynchronizationNotifications:(int)arg1 scope:(unsigned long long)arg2 resources:(const id*)arg3 count:(unsigned long long)arg4;
- (id)fragmentRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2;
- (void)onParallelRenderCommanderEndEncoding;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (void)resourceTrackingRecordAccessesToArguments:(id)arg1 bufferFuncArgsPtr:(struct { bool x1; bool x2; unsigned long long x3; id x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; bool x9; float x10; float x11; }*)arg2 textureFuncArgsPtr:(struct { bool x1; bool x2; unsigned long long x3; id x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; bool x9; float x10; float x11; }*)arg3;
- (id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg2 capacity:(unsigned long long)arg3;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg1 capacity:(unsigned long long)arg2;
- (id)sampledFragmentRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg2 capacity:(unsigned long long)arg3;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg2 capacity:(unsigned long long)arg3;
- (void)trackRenderPassDescriptor:(id)arg1;
- (void)trackUseResource:(id)arg1 usage:(unsigned long long)arg2;
- (void)trackUseResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;

@end