/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRRegistryQueryCompletionBlockEntry : NSObject {
    id /* block */  _block;
    unsigned long long  _updateCounter;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic) unsigned long long updateCounter;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)initWithUpdateCounter:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)setBlock:(id /* block */)arg1;
- (void)setUpdateCounter:(unsigned long long)arg1;
- (unsigned long long)updateCounter;

@end
