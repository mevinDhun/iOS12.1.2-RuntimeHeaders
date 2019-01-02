/* Generated by EzioChiu.
 */

@protocol AXHADeviceProtocol <NSObject>

@required

- (int)availableEars;
- (void)connect;
- (bool)containsPeripheralWithUUID:(NSString *)arg1;
- (NSString *)deviceUUID;
- (bool)didLoadBasicProperties;
- (bool)didLoadRequiredProperties;
- (void)disconnectAndUnpair:(bool)arg1;
- (bool)hasConnection;
- (id)initWithPersistentRepresentation:(NSDictionary *)arg1;
- (bool)isConnected;
- (bool)isConnecting;
- (bool)isPaired;
- (bool)keepInSync;
- (bool)leftAvailable;
- (BOOL)leftBass;
- (double)leftBatteryLevel;
- (NSDate *)leftBatteryLowDate;
- (NSString *)leftFirmwareVersion;
- (NSString *)leftHardwareVersion;
- (double)leftMicrophoneVolume;
- (short)leftMicrophoneVolumeSteps;
- (double)leftMixedVolume;
- (short)leftMixedVolumeSteps;
- (NSString *)leftPeripheralUUID;
- (NSArray *)leftPrograms;
- (AXHearingAidMode *)leftSelectedProgram;
- (AXHearingAidMode *)leftSelectedStreamingProgram;
- (double)leftSensitivity;
- (short)leftSensitivitySteps;
- (double)leftStreamVolume;
- (short)leftStreamVolumeSteps;
- (BOOL)leftTreble;
- (NSString *)leftUUID;
- (void)loadRequiredProperties;
- (NSMutableArray *)manufacturer;
- (NSMutableArray *)model;
- (NSString *)name;
- (NSArray *)programs;
- (bool)rightAvailable;
- (BOOL)rightBass;
- (double)rightBatteryLevel;
- (NSDate *)rightBatteryLowDate;
- (NSString *)rightFirmwareVersion;
- (NSString *)rightHardwareVersion;
- (double)rightMicrophoneVolume;
- (short)rightMicrophoneVolumeSteps;
- (double)rightMixedVolume;
- (short)rightMixedVolumeSteps;
- (NSString *)rightPeripheralUUID;
- (NSArray *)rightPrograms;
- (AXHearingAidMode *)rightSelectedProgram;
- (AXHearingAidMode *)rightSelectedStreamingProgram;
- (double)rightSensitivity;
- (short)rightSensitivitySteps;
- (double)rightStreamVolume;
- (short)rightStreamVolumeSteps;
- (BOOL)rightTreble;
- (NSString *)rightUUID;
- (void)selectProgram:(AXHearingAidMode *)arg1 forEar:(int)arg2;
- (NSIndexSet *)selectedProgramIndexes;
- (NSArray *)selectedPrograms;
- (void)setAvailableEars:(int)arg1;
- (void)setKeepInSync:(bool)arg1;
- (void)setLeftBass:(BOOL)arg1;
- (void)setLeftMicrophoneVolume:(double)arg1;
- (void)setLeftMixedVolume:(double)arg1;
- (void)setLeftSensitivity:(double)arg1;
- (void)setLeftStreamVolume:(double)arg1;
- (void)setLeftTreble:(BOOL)arg1;
- (void)setRightBass:(BOOL)arg1;
- (void)setRightMicrophoneVolume:(double)arg1;
- (void)setRightMixedVolume:(double)arg1;
- (void)setRightSensitivity:(double)arg1;
- (void)setRightStreamVolume:(double)arg1;
- (void)setRightTreble:(BOOL)arg1;
- (void)setValue:(id)arg1 forProperty:(unsigned long long)arg2;
- (bool)supportsBinauralStreaming;
- (bool)supportsCombinedPresets;
- (bool)supportsCombinedVolumes;
- (id)valueForProperty:(unsigned long long)arg1;

@end
