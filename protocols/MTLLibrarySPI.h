/* Generated by EzioChiu.
 */

@protocol MTLLibrarySPI <MTLLibrary>

@required

- (NSArray *)externFunctionNames;
- (<MTLFunction> *)newExternFunctionWithName:(NSString *)arg1;
- (void)newFunctionWithName:(void *)arg1 constantValues:(void *)arg2 pipelineLibrary:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, MTLFunctionConstantValues *, <MTLPipelineLibrary> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLFunction> *, NSError *, void*
- (<MTLFunction> *)newFunctionWithName:(NSString *)arg1 constantValues:(MTLFunctionConstantValues *)arg2 pipelineLibrary:(id <MTLPipelineLibrary>)arg3 error:(id*)arg4;
- (NSString *)overrideTriple;
- (void)setOverrideTriple:(NSString *)arg1;

@end
