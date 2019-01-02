/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessoryBLEPairing.framework/AccessoryBLEPairing
 */

@interface ACCBLEPairingAccessory : NSObject {
    NSDictionary * _accInfo;
    NSString * _accessoryUID;
    bool  _desiredBLEPairingState;
}

@property (nonatomic, retain) NSDictionary *accInfo;
@property (nonatomic, retain) NSString *accessoryUID;
@property (nonatomic) bool desiredBLEPairingState;

- (void).cxx_destruct;
- (id)accInfo;
- (id)accessoryUID;
- (bool)desiredBLEPairingState;
- (id)initWithAccessoryUID:(id)arg1 andAccInfo:(id)arg2;
- (void)setAccInfo:(id)arg1;
- (void)setAccessoryUID:(id)arg1;
- (void)setDesiredBLEPairingState:(bool)arg1;

@end