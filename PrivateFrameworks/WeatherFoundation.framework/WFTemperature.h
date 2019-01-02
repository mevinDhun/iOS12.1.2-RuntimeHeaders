/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFTemperature : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        double celsiusVal; 
        double kelvinVal; 
        double fahrenheitVal; 
    }  _temperatureValues;
}

@property (nonatomic) double celsius;
@property (nonatomic) double fahrenheit;
@property (nonatomic) double kelvin;

+ (bool)supportsSecureCoding;

- (void)_resetTemperatureValues;
- (void)_setValue:(double)arg1 forUnit:(int)arg2;
- (bool)_unitIsHydrated:(int)arg1 outputValue:(out double*)arg2;
- (double)celsius;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)fahrenheit;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemperatureUnit:(int)arg1 value:(double)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTemperature:(id)arg1;
- (double)kelvin;
- (void)setCelsius:(double)arg1;
- (void)setFahrenheit:(double)arg1;
- (void)setKelvin:(double)arg1;
- (double)temperatureForUnit:(int)arg1;

@end
