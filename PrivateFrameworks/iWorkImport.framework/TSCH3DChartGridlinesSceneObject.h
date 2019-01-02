/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartGridlinesSceneObject : TSCH3DSceneObject {
    TSCH3DPrefilteredLineRenderer * mRenderer;
}

+ (struct TSCH3DScenePart { id x1; })partWithAxes:(id)arg1;

- (void)dealloc;
- (id)effects;
- (void)getBounds:(id)arg1;
- (id)init;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; })p_gridlineTransformForPipeline:(id)arg1;
- (void)p_render:(id)arg1;
- (bool)p_shouldRenderInFrontForPipeline:(id)arg1;
- (void)postGetBounds:(id)arg1;
- (void)postrender:(id)arg1;
- (void)primeRenderCaches:(id)arg1;
- (void)render:(id)arg1;

@end
