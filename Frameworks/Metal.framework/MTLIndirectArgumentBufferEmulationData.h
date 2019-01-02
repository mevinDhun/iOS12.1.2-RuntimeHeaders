/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIndirectArgumentBufferEmulationData : NSObject {
    char * _bufferIndices;
    NSObject<OS_dispatch_data> * _dataMap;
    const void * _dataPtr;
    unsigned long long  _dataSize;
    char * _samplerIndices;
    char * _textureIndices;
}

- (void)bindIndirectArgumentsWithFunctions:(struct { id /* block */ x1; id /* block */ x2; id /* block */ x3; id /* block */ x4; })arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end