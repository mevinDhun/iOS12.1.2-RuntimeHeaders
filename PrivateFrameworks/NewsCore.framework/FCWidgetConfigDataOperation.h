/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCWidgetConfigDataOperation : FCOperation {
    FCHeldRecords * _cachedRecords;
    <FCContentContext> * _context;
    NSArray * _recordSources;
    NSDictionary * _recordSourcesByRecordType;
    NSArray * _resultArticleIDs;
    NSArray * _resultArticleListIDs;
    NSDictionary * _resultHeldRecordsByType;
    NSDictionary * _resultWidgetSectionConfigDictionary;
    NSData * _widgetConfigData;
    id /* block */  _widgetConfigDataCompletionHandler;
}

@property (nonatomic, retain) FCHeldRecords *cachedRecords;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, retain) NSArray *recordSources;
@property (nonatomic, retain) NSDictionary *recordSourcesByRecordType;
@property (nonatomic, retain) NSArray *resultArticleIDs;
@property (nonatomic, retain) NSArray *resultArticleListIDs;
@property (nonatomic, retain) NSDictionary *resultHeldRecordsByType;
@property (nonatomic, retain) NSDictionary *resultWidgetSectionConfigDictionary;
@property (nonatomic, copy) NSData *widgetConfigData;
@property (nonatomic, copy) id /* block */ widgetConfigDataCompletionHandler;

- (void).cxx_destruct;
- (void)_collectRecordsFromJSONData:(id)arg1;
- (void)_finalizeResultFromCachedRecords;
- (id)_recordSourceForRecordType:(id)arg1;
- (id)cachedRecords;
- (id)context;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (id)recordSources;
- (id)recordSourcesByRecordType;
- (id)resultArticleIDs;
- (id)resultArticleListIDs;
- (id)resultHeldRecordsByType;
- (id)resultWidgetSectionConfigDictionary;
- (void)setCachedRecords:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setRecordSources:(id)arg1;
- (void)setRecordSourcesByRecordType:(id)arg1;
- (void)setResultArticleIDs:(id)arg1;
- (void)setResultArticleListIDs:(id)arg1;
- (void)setResultHeldRecordsByType:(id)arg1;
- (void)setResultWidgetSectionConfigDictionary:(id)arg1;
- (void)setWidgetConfigData:(id)arg1;
- (void)setWidgetConfigDataCompletionHandler:(id /* block */)arg1;
- (bool)validateOperation;
- (id)widgetConfigData;
- (id /* block */)widgetConfigDataCompletionHandler;

@end