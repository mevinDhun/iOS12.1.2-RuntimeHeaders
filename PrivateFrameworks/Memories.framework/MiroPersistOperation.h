/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroPersistOperation : NSOperation {
    bool  _isExecuting;
    bool  _isFinished;
    MiroMemory * _memory;
}

@property (retain) MiroMemory *memory;

- (void).cxx_destruct;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (id)memory;
- (void)setMemory:(id)arg1;
- (void)start;

@end
