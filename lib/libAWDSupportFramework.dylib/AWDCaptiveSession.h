/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCaptiveSession : PBCodable <NSCopying> {
    NSString * _appTriggeredPassiveSymptom;
    NSString * _autoLoginCarrierID;
    bool  _autoLoginFailed;
    unsigned int  _autoLoginType;
    bool  _detectedNotCaptiveHandledByCNP;
    unsigned int  _durationNetworkNotCaptive;
    unsigned int  _durationOnNetwork;
    NSString * _handlerCNP;
    bool  _handlerCNPTriggeredLogOff;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int autoLoginType : 1; 
        unsigned int durationNetworkNotCaptive : 1; 
        unsigned int durationOnNetwork : 1; 
        unsigned int passiveCaptivityCorrectDetection : 1; 
        unsigned int passiveCaptivityIncorrectDetection : 1; 
        unsigned int passiveCaptivitySymptom : 1; 
        unsigned int redirectURLType : 1; 
        unsigned int result : 1; 
        unsigned int websheetProbeCount : 1; 
        unsigned int websheetScrapeResult : 1; 
        unsigned int whiteListProbeCompletionTime : 1; 
        unsigned int whiteListProbeStatus : 1; 
        unsigned int autoLoginFailed : 1; 
        unsigned int detectedNotCaptiveHandledByCNP : 1; 
        unsigned int handlerCNPTriggeredLogOff : 1; 
        unsigned int isDetectedCaptive : 1; 
        unsigned int nonCaptiveDetectedAsCaptive : 1; 
        unsigned int passiveCaptivityDetected : 1; 
        unsigned int websheetScraped : 1; 
        unsigned int wisprDetected : 1; 
    }  _has;
    NSMutableArray * _installedCNPDisplayIDs;
    bool  _isDetectedCaptive;
    bool  _nonCaptiveDetectedAsCaptive;
    unsigned int  _passiveCaptivityCorrectDetection;
    bool  _passiveCaptivityDetected;
    unsigned int  _passiveCaptivityIncorrectDetection;
    unsigned int  _passiveCaptivitySymptom;
    int  _redirectURLType;
    unsigned int  _result;
    unsigned long long  _timestamp;
    unsigned int  _websheetProbeCount;
    unsigned int  _websheetScrapeResult;
    bool  _websheetScraped;
    unsigned int  _whiteListProbeCompletionTime;
    int  _whiteListProbeStatus;
    bool  _wisprDetected;
}

@property (nonatomic, retain) NSString *appTriggeredPassiveSymptom;
@property (nonatomic, retain) NSString *autoLoginCarrierID;
@property (nonatomic) bool autoLoginFailed;
@property (nonatomic) unsigned int autoLoginType;
@property (nonatomic) bool detectedNotCaptiveHandledByCNP;
@property (nonatomic) unsigned int durationNetworkNotCaptive;
@property (nonatomic) unsigned int durationOnNetwork;
@property (nonatomic, retain) NSString *handlerCNP;
@property (nonatomic) bool handlerCNPTriggeredLogOff;
@property (nonatomic, readonly) bool hasAppTriggeredPassiveSymptom;
@property (nonatomic, readonly) bool hasAutoLoginCarrierID;
@property (nonatomic) bool hasAutoLoginFailed;
@property (nonatomic) bool hasAutoLoginType;
@property (nonatomic) bool hasDetectedNotCaptiveHandledByCNP;
@property (nonatomic) bool hasDurationNetworkNotCaptive;
@property (nonatomic) bool hasDurationOnNetwork;
@property (nonatomic, readonly) bool hasHandlerCNP;
@property (nonatomic) bool hasHandlerCNPTriggeredLogOff;
@property (nonatomic) bool hasIsDetectedCaptive;
@property (nonatomic) bool hasNonCaptiveDetectedAsCaptive;
@property (nonatomic) bool hasPassiveCaptivityCorrectDetection;
@property (nonatomic) bool hasPassiveCaptivityDetected;
@property (nonatomic) bool hasPassiveCaptivityIncorrectDetection;
@property (nonatomic) bool hasPassiveCaptivitySymptom;
@property (nonatomic) bool hasRedirectURLType;
@property (nonatomic) bool hasResult;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasWebsheetProbeCount;
@property (nonatomic) bool hasWebsheetScrapeResult;
@property (nonatomic) bool hasWebsheetScraped;
@property (nonatomic) bool hasWhiteListProbeCompletionTime;
@property (nonatomic) bool hasWhiteListProbeStatus;
@property (nonatomic) bool hasWisprDetected;
@property (nonatomic, retain) NSMutableArray *installedCNPDisplayIDs;
@property (nonatomic) bool isDetectedCaptive;
@property (nonatomic) bool nonCaptiveDetectedAsCaptive;
@property (nonatomic) unsigned int passiveCaptivityCorrectDetection;
@property (nonatomic) bool passiveCaptivityDetected;
@property (nonatomic) unsigned int passiveCaptivityIncorrectDetection;
@property (nonatomic) unsigned int passiveCaptivitySymptom;
@property (nonatomic) int redirectURLType;
@property (nonatomic) unsigned int result;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int websheetProbeCount;
@property (nonatomic) unsigned int websheetScrapeResult;
@property (nonatomic) bool websheetScraped;
@property (nonatomic) unsigned int whiteListProbeCompletionTime;
@property (nonatomic) int whiteListProbeStatus;
@property (nonatomic) bool wisprDetected;

+ (Class)installedCNPDisplayIDsType;

- (int)StringAsRedirectURLType:(id)arg1;
- (int)StringAsWhiteListProbeStatus:(id)arg1;
- (void)addInstalledCNPDisplayIDs:(id)arg1;
- (id)appTriggeredPassiveSymptom;
- (id)autoLoginCarrierID;
- (bool)autoLoginFailed;
- (unsigned int)autoLoginType;
- (void)clearInstalledCNPDisplayIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)detectedNotCaptiveHandledByCNP;
- (id)dictionaryRepresentation;
- (unsigned int)durationNetworkNotCaptive;
- (unsigned int)durationOnNetwork;
- (id)handlerCNP;
- (bool)handlerCNPTriggeredLogOff;
- (bool)hasAppTriggeredPassiveSymptom;
- (bool)hasAutoLoginCarrierID;
- (bool)hasAutoLoginFailed;
- (bool)hasAutoLoginType;
- (bool)hasDetectedNotCaptiveHandledByCNP;
- (bool)hasDurationNetworkNotCaptive;
- (bool)hasDurationOnNetwork;
- (bool)hasHandlerCNP;
- (bool)hasHandlerCNPTriggeredLogOff;
- (bool)hasIsDetectedCaptive;
- (bool)hasNonCaptiveDetectedAsCaptive;
- (bool)hasPassiveCaptivityCorrectDetection;
- (bool)hasPassiveCaptivityDetected;
- (bool)hasPassiveCaptivityIncorrectDetection;
- (bool)hasPassiveCaptivitySymptom;
- (bool)hasRedirectURLType;
- (bool)hasResult;
- (bool)hasTimestamp;
- (bool)hasWebsheetProbeCount;
- (bool)hasWebsheetScrapeResult;
- (bool)hasWebsheetScraped;
- (bool)hasWhiteListProbeCompletionTime;
- (bool)hasWhiteListProbeStatus;
- (bool)hasWisprDetected;
- (unsigned long long)hash;
- (id)installedCNPDisplayIDs;
- (id)installedCNPDisplayIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)installedCNPDisplayIDsCount;
- (bool)isDetectedCaptive;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)nonCaptiveDetectedAsCaptive;
- (unsigned int)passiveCaptivityCorrectDetection;
- (bool)passiveCaptivityDetected;
- (unsigned int)passiveCaptivityIncorrectDetection;
- (unsigned int)passiveCaptivitySymptom;
- (bool)readFrom:(id)arg1;
- (int)redirectURLType;
- (id)redirectURLTypeAsString:(int)arg1;
- (unsigned int)result;
- (void)setAppTriggeredPassiveSymptom:(id)arg1;
- (void)setAutoLoginCarrierID:(id)arg1;
- (void)setAutoLoginFailed:(bool)arg1;
- (void)setAutoLoginType:(unsigned int)arg1;
- (void)setDetectedNotCaptiveHandledByCNP:(bool)arg1;
- (void)setDurationNetworkNotCaptive:(unsigned int)arg1;
- (void)setDurationOnNetwork:(unsigned int)arg1;
- (void)setHandlerCNP:(id)arg1;
- (void)setHandlerCNPTriggeredLogOff:(bool)arg1;
- (void)setHasAutoLoginFailed:(bool)arg1;
- (void)setHasAutoLoginType:(bool)arg1;
- (void)setHasDetectedNotCaptiveHandledByCNP:(bool)arg1;
- (void)setHasDurationNetworkNotCaptive:(bool)arg1;
- (void)setHasDurationOnNetwork:(bool)arg1;
- (void)setHasHandlerCNPTriggeredLogOff:(bool)arg1;
- (void)setHasIsDetectedCaptive:(bool)arg1;
- (void)setHasNonCaptiveDetectedAsCaptive:(bool)arg1;
- (void)setHasPassiveCaptivityCorrectDetection:(bool)arg1;
- (void)setHasPassiveCaptivityDetected:(bool)arg1;
- (void)setHasPassiveCaptivityIncorrectDetection:(bool)arg1;
- (void)setHasPassiveCaptivitySymptom:(bool)arg1;
- (void)setHasRedirectURLType:(bool)arg1;
- (void)setHasResult:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWebsheetProbeCount:(bool)arg1;
- (void)setHasWebsheetScrapeResult:(bool)arg1;
- (void)setHasWebsheetScraped:(bool)arg1;
- (void)setHasWhiteListProbeCompletionTime:(bool)arg1;
- (void)setHasWhiteListProbeStatus:(bool)arg1;
- (void)setHasWisprDetected:(bool)arg1;
- (void)setInstalledCNPDisplayIDs:(id)arg1;
- (void)setIsDetectedCaptive:(bool)arg1;
- (void)setNonCaptiveDetectedAsCaptive:(bool)arg1;
- (void)setPassiveCaptivityCorrectDetection:(unsigned int)arg1;
- (void)setPassiveCaptivityDetected:(bool)arg1;
- (void)setPassiveCaptivityIncorrectDetection:(unsigned int)arg1;
- (void)setPassiveCaptivitySymptom:(unsigned int)arg1;
- (void)setRedirectURLType:(int)arg1;
- (void)setResult:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWebsheetProbeCount:(unsigned int)arg1;
- (void)setWebsheetScrapeResult:(unsigned int)arg1;
- (void)setWebsheetScraped:(bool)arg1;
- (void)setWhiteListProbeCompletionTime:(unsigned int)arg1;
- (void)setWhiteListProbeStatus:(int)arg1;
- (void)setWisprDetected:(bool)arg1;
- (unsigned long long)timestamp;
- (unsigned int)websheetProbeCount;
- (unsigned int)websheetScrapeResult;
- (bool)websheetScraped;
- (unsigned int)whiteListProbeCompletionTime;
- (int)whiteListProbeStatus;
- (id)whiteListProbeStatusAsString:(int)arg1;
- (bool)wisprDetected;
- (void)writeTo:(id)arg1;

@end
