/* Generated by EzioChiu.
 */

@protocol TSCH3DSageFillData <TSCH3DFillData>

@required

- (TSCH3DFillSetIdentifier *)fillSetIdentifier;
- (bool)isLayerEnabledForIndex:(unsigned long long)arg1;
- (long long)layerBlendModeForIndex:(unsigned long long)arg1;
- (unsigned long long)layerCount;
- (bool)layerIsEnvironmentMapForIndex:(unsigned long long)arg1;
- (NSNumber *)layerLightenPercentageForIndex:(unsigned long long)arg1;
- (float)layerRotationForIndex:(unsigned long long)arg1;
- (float)layerScaleForIndex:(unsigned long long)arg1;
- (int)layerTilingModeForIndex:(unsigned long long)arg1;
- (TSCH3DTexture *)textureForIndex:(unsigned long long)arg1;

@end
