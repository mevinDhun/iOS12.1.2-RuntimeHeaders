/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
 */

@interface ICQDaemonOfferStub : NSObject {
    ICQDaemonOfferConditions * _conditionsWhenChosen;
    NSDictionary * _serverDict;
}

@property (getter=isBuddyOffer, nonatomic, readonly) bool buddyOffer;
@property (nonatomic, copy) ICQDaemonOfferConditions *conditionsWhenChosen;
@property (nonatomic, readonly) ICQDaemonOfferCriteria *criteria;
@property (nonatomic, readonly) NSString *offerId;
@property (nonatomic, readonly) NSDictionary *serverDictionary;

- (void).cxx_destruct;
- (id)conditionsWhenChosen;
- (id)criteria;
- (id)initWithServerDictionary:(id)arg1;
- (bool)isBuddyOffer;
- (id)offerId;
- (id)serverDictionary;
- (void)setConditionsWhenChosen:(id)arg1;

@end
