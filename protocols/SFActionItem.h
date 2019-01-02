/* Generated by EzioChiu.
 */

@protocol SFActionItem <NSObject>

@required

- (NSString *)applicationBundleIdentifier;
- (SFImage *)baseIcon;
- (NSString *)contactIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)email;
- (SFImage *)icon;
- (bool)isITunes;
- (bool)isOverlay;
- (NSData *)jsonData;
- (NSString *)label;
- (NSString *)labelForLocalMedia;
- (NSString *)labelITunes;
- (double)latitude;
- (NSString *)localMediaIdentifier;
- (SFLatLng *)location;
- (double)longitude;
- (NSData *)mapsData;
- (NSString *)messageIdentifier;
- (NSURL *)messageURL;
- (NSString *)offerType;
- (NSString *)phoneNumber;
- (NSString *)provider;
- (SFPunchout *)punchout;
- (bool)requiresLocalMedia;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setBaseIcon:(SFImage *)arg1;
- (void)setContactIdentifier:(NSString *)arg1;
- (void)setEmail:(NSString *)arg1;
- (void)setIcon:(SFImage *)arg1;
- (void)setIsITunes:(bool)arg1;
- (void)setIsOverlay:(bool)arg1;
- (void)setLabel:(NSString *)arg1;
- (void)setLabelForLocalMedia:(NSString *)arg1;
- (void)setLabelITunes:(NSString *)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLocalMediaIdentifier:(NSString *)arg1;
- (void)setLocation:(SFLatLng *)arg1;
- (void)setLongitude:(double)arg1;
- (void)setMapsData:(NSData *)arg1;
- (void)setMessageIdentifier:(NSString *)arg1;
- (void)setMessageURL:(NSURL *)arg1;
- (void)setOfferType:(NSString *)arg1;
- (void)setPhoneNumber:(NSString *)arg1;
- (void)setProvider:(NSString *)arg1;
- (void)setPunchout:(SFPunchout *)arg1;
- (void)setRequiresLocalMedia:(bool)arg1;
- (void)setStoreIdentifiers:(NSArray *)arg1;
- (void)setType:(NSString *)arg1;
- (NSArray *)storeIdentifiers;
- (NSString *)type;

@end
