/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDMMCSHttpInfo : PBCodable <NSCopying> {
    int  _adaptiveTcpReadTimeout;
    int  _adaptiveTcpWriteTimeout;
    bool  _allowsCellular;
    bool  _allowsPowerNapScheduling;
    bool  _cancelled;
    bool  _connectionReused;
    long long  _duration;
    int  _errorCode;
    NSString * _errorDomain;
    bool  _fastFail;
    bool  _finalTryInRequest;
    bool  _forceNondiscretionary;
    struct { 
        unsigned int duration : 1; 
        unsigned int networkServiceType : 1; 
        unsigned int responseReceivedDuration : 1; 
        unsigned int startTime : 1; 
        unsigned int adaptiveTcpReadTimeout : 1; 
        unsigned int adaptiveTcpWriteTimeout : 1; 
        unsigned int errorCode : 1; 
        unsigned int httpStatus : 1; 
        unsigned int locatorPort : 1; 
        unsigned int qualityOfService : 1; 
        unsigned int requestSize : 1; 
        unsigned int responseSize : 1; 
        unsigned int allowsCellular : 1; 
        unsigned int allowsPowerNapScheduling : 1; 
        unsigned int cancelled : 1; 
        unsigned int connectionReused : 1; 
        unsigned int fastFail : 1; 
        unsigned int finalTryInRequest : 1; 
        unsigned int forceNondiscretionary : 1; 
        unsigned int inlineEdgeComplete : 1; 
        unsigned int powerPluggedInAtEnd : 1; 
        unsigned int powerPluggedInAtStart : 1; 
        unsigned int powerPluggedInWhenQueued : 1; 
        unsigned int proxyUsed : 1; 
        unsigned int requiresPowerPluggedIn : 1; 
        unsigned int timedOut : 1; 
        unsigned int transactionComplete : 1; 
    }  _has;
    NSMutableArray * _httpErrors;
    int  _httpStatus;
    bool  _inlineEdgeComplete;
    NSString * _interfaceIdentifier;
    NSString * _locatorHostname;
    NSString * _locatorPeerAddress;
    unsigned int  _locatorPort;
    NSString * _locatorScheme;
    long long  _networkServiceType;
    NSString * _networkUsed;
    bool  _powerPluggedInAtEnd;
    bool  _powerPluggedInAtStart;
    bool  _powerPluggedInWhenQueued;
    bool  _proxyUsed;
    int  _qualityOfService;
    int  _requestSize;
    bool  _requiresPowerPluggedIn;
    long long  _responseReceivedDuration;
    int  _responseSize;
    long long  _startTime;
    NSMutableArray * _tcpInfos;
    bool  _timedOut;
    bool  _transactionComplete;
}

@property (nonatomic) int adaptiveTcpReadTimeout;
@property (nonatomic) int adaptiveTcpWriteTimeout;
@property (nonatomic) bool allowsCellular;
@property (nonatomic) bool allowsPowerNapScheduling;
@property (nonatomic) bool cancelled;
@property (nonatomic) bool connectionReused;
@property (nonatomic) long long duration;
@property (nonatomic) int errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic) bool fastFail;
@property (nonatomic) bool finalTryInRequest;
@property (nonatomic) bool forceNondiscretionary;
@property (nonatomic) bool hasAdaptiveTcpReadTimeout;
@property (nonatomic) bool hasAdaptiveTcpWriteTimeout;
@property (nonatomic) bool hasAllowsCellular;
@property (nonatomic) bool hasAllowsPowerNapScheduling;
@property (nonatomic) bool hasCancelled;
@property (nonatomic) bool hasConnectionReused;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic) bool hasFastFail;
@property (nonatomic) bool hasFinalTryInRequest;
@property (nonatomic) bool hasForceNondiscretionary;
@property (nonatomic) bool hasHttpStatus;
@property (nonatomic) bool hasInlineEdgeComplete;
@property (nonatomic, readonly) bool hasInterfaceIdentifier;
@property (nonatomic, readonly) bool hasLocatorHostname;
@property (nonatomic, readonly) bool hasLocatorPeerAddress;
@property (nonatomic) bool hasLocatorPort;
@property (nonatomic, readonly) bool hasLocatorScheme;
@property (nonatomic) bool hasNetworkServiceType;
@property (nonatomic, readonly) bool hasNetworkUsed;
@property (nonatomic) bool hasPowerPluggedInAtEnd;
@property (nonatomic) bool hasPowerPluggedInAtStart;
@property (nonatomic) bool hasPowerPluggedInWhenQueued;
@property (nonatomic) bool hasProxyUsed;
@property (nonatomic) bool hasQualityOfService;
@property (nonatomic) bool hasRequestSize;
@property (nonatomic) bool hasRequiresPowerPluggedIn;
@property (nonatomic) bool hasResponseReceivedDuration;
@property (nonatomic) bool hasResponseSize;
@property (nonatomic) bool hasStartTime;
@property (nonatomic) bool hasTimedOut;
@property (nonatomic) bool hasTransactionComplete;
@property (nonatomic, retain) NSMutableArray *httpErrors;
@property (nonatomic) int httpStatus;
@property (nonatomic) bool inlineEdgeComplete;
@property (nonatomic, retain) NSString *interfaceIdentifier;
@property (nonatomic, retain) NSString *locatorHostname;
@property (nonatomic, retain) NSString *locatorPeerAddress;
@property (nonatomic) unsigned int locatorPort;
@property (nonatomic, retain) NSString *locatorScheme;
@property (nonatomic) long long networkServiceType;
@property (nonatomic, retain) NSString *networkUsed;
@property (nonatomic) bool powerPluggedInAtEnd;
@property (nonatomic) bool powerPluggedInAtStart;
@property (nonatomic) bool powerPluggedInWhenQueued;
@property (nonatomic) bool proxyUsed;
@property (nonatomic) int qualityOfService;
@property (nonatomic) int requestSize;
@property (nonatomic) bool requiresPowerPluggedIn;
@property (nonatomic) long long responseReceivedDuration;
@property (nonatomic) int responseSize;
@property (nonatomic) long long startTime;
@property (nonatomic, retain) NSMutableArray *tcpInfos;
@property (nonatomic) bool timedOut;
@property (nonatomic) bool transactionComplete;

+ (Class)httpErrorType;
+ (Class)tcpInfoType;

- (int)adaptiveTcpReadTimeout;
- (int)adaptiveTcpWriteTimeout;
- (void)addHttpError:(id)arg1;
- (void)addTcpInfo:(id)arg1;
- (bool)allowsCellular;
- (bool)allowsPowerNapScheduling;
- (bool)cancelled;
- (void)clearHttpErrors;
- (void)clearTcpInfos;
- (bool)connectionReused;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)duration;
- (int)errorCode;
- (id)errorDomain;
- (bool)fastFail;
- (bool)finalTryInRequest;
- (bool)forceNondiscretionary;
- (bool)hasAdaptiveTcpReadTimeout;
- (bool)hasAdaptiveTcpWriteTimeout;
- (bool)hasAllowsCellular;
- (bool)hasAllowsPowerNapScheduling;
- (bool)hasCancelled;
- (bool)hasConnectionReused;
- (bool)hasDuration;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasFastFail;
- (bool)hasFinalTryInRequest;
- (bool)hasForceNondiscretionary;
- (bool)hasHttpStatus;
- (bool)hasInlineEdgeComplete;
- (bool)hasInterfaceIdentifier;
- (bool)hasLocatorHostname;
- (bool)hasLocatorPeerAddress;
- (bool)hasLocatorPort;
- (bool)hasLocatorScheme;
- (bool)hasNetworkServiceType;
- (bool)hasNetworkUsed;
- (bool)hasPowerPluggedInAtEnd;
- (bool)hasPowerPluggedInAtStart;
- (bool)hasPowerPluggedInWhenQueued;
- (bool)hasProxyUsed;
- (bool)hasQualityOfService;
- (bool)hasRequestSize;
- (bool)hasRequiresPowerPluggedIn;
- (bool)hasResponseReceivedDuration;
- (bool)hasResponseSize;
- (bool)hasStartTime;
- (bool)hasTimedOut;
- (bool)hasTransactionComplete;
- (unsigned long long)hash;
- (id)httpErrorAtIndex:(unsigned long long)arg1;
- (id)httpErrors;
- (unsigned long long)httpErrorsCount;
- (int)httpStatus;
- (bool)inlineEdgeComplete;
- (id)interfaceIdentifier;
- (bool)isEqual:(id)arg1;
- (id)locatorHostname;
- (id)locatorPeerAddress;
- (unsigned int)locatorPort;
- (id)locatorScheme;
- (void)mergeFrom:(id)arg1;
- (long long)networkServiceType;
- (id)networkUsed;
- (bool)powerPluggedInAtEnd;
- (bool)powerPluggedInAtStart;
- (bool)powerPluggedInWhenQueued;
- (bool)proxyUsed;
- (int)qualityOfService;
- (bool)readFrom:(id)arg1;
- (int)requestSize;
- (bool)requiresPowerPluggedIn;
- (long long)responseReceivedDuration;
- (int)responseSize;
- (void)setAdaptiveTcpReadTimeout:(int)arg1;
- (void)setAdaptiveTcpWriteTimeout:(int)arg1;
- (void)setAllowsCellular:(bool)arg1;
- (void)setAllowsPowerNapScheduling:(bool)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setConnectionReused:(bool)arg1;
- (void)setDuration:(long long)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setFastFail:(bool)arg1;
- (void)setFinalTryInRequest:(bool)arg1;
- (void)setForceNondiscretionary:(bool)arg1;
- (void)setHasAdaptiveTcpReadTimeout:(bool)arg1;
- (void)setHasAdaptiveTcpWriteTimeout:(bool)arg1;
- (void)setHasAllowsCellular:(bool)arg1;
- (void)setHasAllowsPowerNapScheduling:(bool)arg1;
- (void)setHasCancelled:(bool)arg1;
- (void)setHasConnectionReused:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasFastFail:(bool)arg1;
- (void)setHasFinalTryInRequest:(bool)arg1;
- (void)setHasForceNondiscretionary:(bool)arg1;
- (void)setHasHttpStatus:(bool)arg1;
- (void)setHasInlineEdgeComplete:(bool)arg1;
- (void)setHasLocatorPort:(bool)arg1;
- (void)setHasNetworkServiceType:(bool)arg1;
- (void)setHasPowerPluggedInAtEnd:(bool)arg1;
- (void)setHasPowerPluggedInAtStart:(bool)arg1;
- (void)setHasPowerPluggedInWhenQueued:(bool)arg1;
- (void)setHasProxyUsed:(bool)arg1;
- (void)setHasQualityOfService:(bool)arg1;
- (void)setHasRequestSize:(bool)arg1;
- (void)setHasRequiresPowerPluggedIn:(bool)arg1;
- (void)setHasResponseReceivedDuration:(bool)arg1;
- (void)setHasResponseSize:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setHasTimedOut:(bool)arg1;
- (void)setHasTransactionComplete:(bool)arg1;
- (void)setHttpErrors:(id)arg1;
- (void)setHttpStatus:(int)arg1;
- (void)setInlineEdgeComplete:(bool)arg1;
- (void)setInterfaceIdentifier:(id)arg1;
- (void)setLocatorHostname:(id)arg1;
- (void)setLocatorPeerAddress:(id)arg1;
- (void)setLocatorPort:(unsigned int)arg1;
- (void)setLocatorScheme:(id)arg1;
- (void)setNetworkServiceType:(long long)arg1;
- (void)setNetworkUsed:(id)arg1;
- (void)setPowerPluggedInAtEnd:(bool)arg1;
- (void)setPowerPluggedInAtStart:(bool)arg1;
- (void)setPowerPluggedInWhenQueued:(bool)arg1;
- (void)setProxyUsed:(bool)arg1;
- (void)setQualityOfService:(int)arg1;
- (void)setRequestSize:(int)arg1;
- (void)setRequiresPowerPluggedIn:(bool)arg1;
- (void)setResponseReceivedDuration:(long long)arg1;
- (void)setResponseSize:(int)arg1;
- (void)setStartTime:(long long)arg1;
- (void)setTcpInfos:(id)arg1;
- (void)setTimedOut:(bool)arg1;
- (void)setTransactionComplete:(bool)arg1;
- (long long)startTime;
- (id)tcpInfoAtIndex:(unsigned long long)arg1;
- (id)tcpInfos;
- (unsigned long long)tcpInfosCount;
- (bool)timedOut;
- (bool)transactionComplete;
- (void)writeTo:(id)arg1;

@end
