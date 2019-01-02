/* Generated by EzioChiu.
 */

@protocol _CPClientSession <NSObject>

@required

- (void)addFeedback:(_CPFeedbackPayload *)arg1;
- (NSString *)agent;
- (void)clearFeedback;
- (NSString *)countryCode;
- (bool)duEnabled;
- (_CPFeedbackPayload *)feedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)feedbackCount;
- (NSArray *)feedbacks;
- (double)firstUseDate;
- (bool)firstUseOfTheDay;
- (bool)getResourceVersions:(id*)arg1 forKey:(NSString *)arg2;
- (_CPImagesUsagePropensity *)imagesPropensity;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSData *)jsonFeedback;
- (NSString *)locale;
- (_CPNewsUsagePropensity *)newsPropensity;
- (NSString *)parsecDeveloperID;
- (int)previousSessionEndReason;
- (bool)removeTimestamps;
- (NSDictionary *)resourceVersions;
- (_CPSafariUsagePropensity *)safariPropensity;
- (double)sessionStart;
- (void)setAgent:(NSString *)arg1;
- (void)setCountryCode:(NSString *)arg1;
- (void)setDuEnabled:(bool)arg1;
- (void)setFeedbacks:(NSArray *)arg1;
- (void)setFirstUseDate:(double)arg1;
- (void)setFirstUseOfTheDay:(bool)arg1;
- (void)setImagesPropensity:(_CPImagesUsagePropensity *)arg1;
- (void)setJsonFeedback:(NSData *)arg1;
- (void)setLocale:(NSString *)arg1;
- (void)setNewsPropensity:(_CPNewsUsagePropensity *)arg1;
- (void)setParsecDeveloperID:(NSString *)arg1;
- (void)setPreviousSessionEndReason:(int)arg1;
- (void)setRemoveTimestamps:(bool)arg1;
- (void)setResourceVersions:(NSDictionary *)arg1;
- (void)setResourceVersions:(NSString *)arg1 forKey:(NSString *)arg2;
- (void)setSafariPropensity:(_CPSafariUsagePropensity *)arg1;
- (void)setSessionStart:(double)arg1;
- (void)setSpotlightPropensity:(_CPSpotlightUsagePropensity *)arg1;
- (void)setUsageSinceLookback:(_CPUsageSinceLookback *)arg1;
- (void)setUserGuidString:(NSString *)arg1;
- (_CPSpotlightUsagePropensity *)spotlightPropensity;
- (_CPUsageSinceLookback *)usageSinceLookback;
- (NSString *)userGuidString;
- (unsigned long long)whichPropensity;

@end
