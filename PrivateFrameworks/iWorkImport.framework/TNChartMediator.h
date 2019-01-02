/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNChartMediator : TSCHChartMediator <TSCECalculationEngineRegistration, TSCEFormulaOwning> {
    struct unordered_set<TSUCellCoord, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<TSUCellCoord> > { 
        struct __hash_table<TSUCellCoord, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<TSUCellCoord> > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *>, std::__1::allocator<std::__1::__hash_node<TSUCellCoord, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::hash<TSUCellCoord> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::equal_to<TSUCellCoord> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _formulasToRecalculate;
    TNChartFormulaStorage * mCleanFormulaStorage;
    TNMutableChartFormulaStorage * mEditingAccumulatedFormulas;
    TNMutableChartFormulaStorage * mEditingActiveFormulas;
    bool  mEditingHasIsPhantomOverride;
    bool  mEditingIsPhantomOverride;
    TNChartFormulaStorage * mEditingStorageOverride;
    struct UUIDData<TSP::UUIDData> { 
        union { 
            unsigned char _uuid[16]; 
            struct { 
                unsigned char byte0; 
                unsigned char byte1; 
                unsigned char byte2; 
                unsigned char byte3; 
                unsigned char byte4; 
                unsigned char byte5; 
                unsigned char byte6; 
                unsigned char byte7; 
                unsigned char byte8; 
                unsigned char byte9; 
                unsigned char byte10; 
                unsigned char byte11; 
                unsigned char byte12; 
                unsigned char byte13; 
                unsigned char byte14; 
                unsigned char byte15; 
            } _cfuuid; 
            struct { 
                unsigned long long _lower; 
                unsigned long long _upper; 
            } ; 
        } ; 
    }  mEntityUID;
    TSUIntToIntDictionary * mFormulaIndexToGridIndex;
    TNChartFormulaStorage * mFormulaStorage;
    bool  mHasBlittedSinceConditionVarSet;
    NSCondition * mImportUpgradeCondition;
    bool  mIsEditing;
    bool  mIsRegisteredWithCalcEngine;
    int  mScatterFormat;
    bool  mShouldFixAreaFormula;
}

@property (nonatomic, readonly) TSCECalculationEngine *calculationEngine;
@property (nonatomic, readonly) bool categoryLabelFormulasAreAllStatic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int direction;
@property (nonatomic, readonly) struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; } entityUID;
@property (nonatomic, readonly) TNChartFormulaStorage *formulaStorage;
@property (nonatomic, readonly) bool hasBlittedSinceConditionVarSet;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isEditing;
@property (nonatomic, readonly) bool labelFormulasAreAllStatic;
@property (retain) TNChartFormulaStorage *rawFormulaStorage;
@property (nonatomic, readonly) int scatterFormat;
@property (nonatomic, readonly) bool seriesLabelFormulasAreAllStatic;
@property (readonly) Class superclass;

+ (id)defaultErrorBarFormulaWrapper;
+ (id)propertiesThatInvalidateMediator;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)amendRewriteSpec:(id)arg1 withPostCellRefs:(const struct TSCEReferenceSet { struct unordered_set<TSCEReferenceType, std::__1::hash<TSCEReferenceType>, std::__1::equal_to<TSCEReferenceType>, std::__1::allocator<TSCEReferenceType> > { struct __hash_table<TSCEReferenceType, std::__1::hash<TSCEReferenceType>, std::__1::equal_to<TSCEReferenceType>, std::__1::allocator<TSCEReferenceType> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *>, std::__1::allocator<std::__1::__hash_node<TSCEReferenceType, void *> > > { struct __hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> { struct __hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; } x_1_1_1; } x1; }*)arg2 calcEngine:(id)arg3;
- (id)calculationEngine;
- (id)categoryLabelFormulas;
- (bool)categoryLabelFormulasAreAllStatic;
- (void)clearEditingIsPhantomOverride;
- (void)clearFormulasToRecalculate;
- (id)columnFormulas;
- (id)commandSetCategoryName:(id)arg1 forCategoryIndex:(unsigned long long)arg2;
- (id)commandSetSeriesName:(id)arg1 forSeriesIndex:(unsigned long long)arg2;
- (id)commandToChangeCategoryLabelFormulas:(id)arg1;
- (id)commandToChangeLabelFormulas:(id)arg1 forType:(unsigned long long)arg2 modelUpdateDataType:(int)arg3;
- (id)commandToSetChartGridDirection:(int)arg1 documentRoot:(id)arg2;
- (id)commandToSetErrorBarCustomFormula:(id)arg1 seriesIndex:(unsigned long long)arg2 dataType:(int)arg3;
- (id)commandToSetNewSeriesIndex:(unsigned long long)arg1 forSeriesIndex:(unsigned long long)arg2;
- (id)commandToSetSeriesDataFormula:(id)arg1 seriesDimension:(id)arg2;
- (id)commandToSetSeriesNameFormula:(id)arg1 seriesIndex:(unsigned long long)arg2;
- (void)copyValuesIntoChartModelOutOfBandUsingCalcEngine:(id)arg1 formulaMap:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customNegFormulas;
- (id)customNegScatterXFormulas;
- (id)customPosFormulas;
- (id)customPosScatterXFormulas;
- (id)dataFormatterForAxis:(id)arg1 documentRoot:(id)arg2;
- (id)dataFormatterForSeries:(id)arg1 index:(unsigned long long)arg2 axisType:(int)arg3 documentRoot:(id)arg4;
- (id)dataFormatterFromFormatStruct:(struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; struct { unsigned int x_4_3_1 : 1; int x_4_3_2; int x_4_3_3; int x_4_3_4; } x_4_2_4; struct { id x_5_3_1; unsigned int x_5_3_2; unsigned char x_5_3_3; } x_4_2_5; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_4_2_6; } x_2_1_4; } x2; })arg1 in:(id)arg2;
- (id)dataFormulas;
- (int)direction;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })entityUID;
- (id)errorBarCustomFormulaForSeriesIndex:(unsigned long long)arg1 dataType:(int)arg2;
- (struct vector<TSCERangeRef, std::__1::allocator<TSCERangeRef> > { struct TSCERangeRef {} *x1; struct TSCERangeRef {} *x2; struct __compressed_pair<TSCERangeRef *, std::__1::allocator<TSCERangeRef> > { struct TSCERangeRef {} *x_3_1_1; } x3; })expandSingleRangeForProposedCategoryLabels:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg1;
- (unsigned long long)formulaIndexForSeriesDimension:(id)arg1;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })formulaOwnerUID;
- (id)formulaStorage;
- (id)formulaStorageFromCatTable:(id)arg1 selection:(id)arg2 direction:(int)arg3;
- (id)formulaStorageFromTable:(id)arg1 selection:(id)arg2 direction:(int)arg3;
- (unsigned long long)formulaTypeFromDataType:(int)arg1;
- (int)formulasDirection;
- (bool)hasBlittedSinceConditionVarSet;
- (bool)hasCategoryReferences;
- (bool)hasTractReference;
- (id)hubFormulaPrecedentsWithCalcEngine:(id)arg1 hostOwnerUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (id)initFromArchive:(const struct ChartMediatorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ChartMediatorArchive {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct ChartMediatorFormulaStorage {} *x7; bool x8; bool x9; }*)arg1 unarchiver:(id)arg2;
- (id)initWithChartInfo:(id)arg1;
- (id)initWithChartInfo:(id)arg1 withTable:(id)arg2 direction:(int)arg3;
- (id)initWithChartInfo:(id)arg1 withTable:(id)arg2 selection:(id)arg3 direction:(int)arg4;
- (bool)interestedInRewrite:(id)arg1;
- (void)invalidateAndSynchronizeMediator;
- (void)invalidateForCalcEngine:(id)arg1;
- (bool)isEditing;
- (bool)isPhantom;
- (bool)labelFormulasAreAllStatic;
- (bool)labelFormulasAreAllStaticInFormulaStorage:(id)arg1;
- (id)labelFormulasForType:(unsigned long long)arg1;
- (unsigned long long)labelIndexForSeriesNameSeriesIndex:(unsigned long long)arg1;
- (id)linkedResolver;
- (void)localizeFormulaLiteralsWithBundle:(id)arg1;
- (id)nonDefaultDataFormatterForSeries:(id)arg1 index:(unsigned long long)arg2 axisType:(int)arg3 documentRoot:(id)arg4;
- (id)objectToArchiveInDependencyTracker;
- (int)ownerKind;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })ownerUID;
- (id)ownerUIDMapper;
- (id)p_chartFormulaStorageForEditingOverride;
- (id)p_commandToSetSeriesNameFormulaWrapper:(id)arg1 seriesIndex:(unsigned long long)arg2;
- (void)p_copyValuesIntoToChartModel:(id)arg1 formulaMap:(id)arg2;
- (void)p_detectAndRepairInsertedCategoryConditionFromPreviousState:(id)arg1 andEditingState:(id)arg2 rewriteSpec:(id)arg3;
- (void)p_detectAndRepairInsertedSeriesConditionFromPreviousState:(id)arg1 andEditingState:(id)arg2 rewriteSpec:(id)arg3;
- (void)p_disconnectLabelsInMap:(id)arg1 ofType:(unsigned long long)arg2;
- (unsigned long long)p_formulaComponents:(id)arg1;
- (unsigned long long)p_formulaComponentsInMap:(id)arg1 ofType:(unsigned long long)arg2;
- (id)p_formulaWrapperFromTSTFormula:(id)arg1;
- (void)p_hackSetCalcEngineLegacyGlobalID;
- (bool)p_isScatterOrBubble;
- (bool)p_labelsAreStaticInMap:(id)arg1 ofType:(unsigned long long)arg2;
- (id)p_newStaticNameForCategoryAvoidingExistingNames:(id)arg1 runningCount:(unsigned long long*)arg2;
- (void)p_promoteSpanningCategorizedCategoryLabelsInMap:(id)arg1;
- (void)p_registerAreaFormulaForMap:(id)arg1 withCalcEngine:(id)arg2;
- (void)p_registerFormulaeWithCalcEngine:(id)arg1;
- (void)p_registerHubFormulaWithCalcEngine:(id)arg1;
- (void)p_removeDeletedFormulas:(id)arg1;
- (void)p_repairMissingCategoryLabelsInMap:(id)arg1;
- (void)p_repairMissingStaticCategoryLabelsInMap:(id)arg1;
- (void)p_repairMissingTabularCategoryLabelsIrregularInMap:(id)arg1;
- (void)p_repairMissingTabularCategoryLabelsRegularInMap:(id)arg1;
- (void)p_reregister:(bool)arg1 withCalculationEngine:(id)arg2;
- (void)p_signalImportUpgradeCondition;
- (bool)p_tableHasCell:(struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })arg1 withCalcEngine:(id)arg2;
- (bool)p_tableHasRange:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })arg1 withCalcEngine:(id)arg2;
- (bool)p_tabularCategoryLabelsAppearRegularInMap:(id)arg1;
- (void)p_transposeSeriesAndCategoryLabelsInMap:(id)arg1;
- (id)p_tstFormulaFromForumulaWrapper:(id)arg1;
- (void)p_unregisterAllFormulaeFromCalcEngine:(id)arg1;
- (id)p_untitledLabelWithIndex:(unsigned long long)arg1;
- (void)pauseCalculationEngine;
- (void)prepareRewriteSpec:(id)arg1 withPreCellRefs:(const struct TSCEReferenceSet { struct unordered_set<TSCEReferenceType, std::__1::hash<TSCEReferenceType>, std::__1::equal_to<TSCEReferenceType>, std::__1::allocator<TSCEReferenceType> > { struct __hash_table<TSCEReferenceType, std::__1::hash<TSCEReferenceType>, std::__1::equal_to<TSCEReferenceType>, std::__1::allocator<TSCEReferenceType> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *>, std::__1::allocator<std::__1::__hash_node<TSCEReferenceType, void *> > > { struct __hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> { struct __hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; } x_1_1_1; } x1; }*)arg2 calcEngine:(id)arg3;
- (id)rawFormulaStorage;
- (struct { bool x1; bool x2; bool x3; })recalculateForCalcEngine:(id)arg1 atFormulaCoord:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg2 recalcOptions:(struct { bool x1; bool x2; })arg3;
- (id)referencedEntities;
- (id)referencedEntitiesInMap:(id)arg1;
- (bool)registerLast;
- (void)registerWithCalcEngineForDocumentLoad:(id)arg1;
- (void)repairBadRefsInFormulas:(id)arg1;
- (void)repairMissingCategoryLabelsInMap:(id)arg1;
- (void)repairMissingCategoryLabelsInMap:(id)arg1 ignoringNonVisibleLabels:(bool)arg2;
- (void)repairMissingSeriesLabelsInMap:(id)arg1;
- (void)resetFormulasForCellRefs:(const struct TSCEReferenceSet { struct unordered_set<TSCEReferenceType, std::__1::hash<TSCEReferenceType>, std::__1::equal_to<TSCEReferenceType>, std::__1::allocator<TSCEReferenceType> > { struct __hash_table<TSCEReferenceType, std::__1::hash<TSCEReferenceType>, std::__1::equal_to<TSCEReferenceType>, std::__1::allocator<TSCEReferenceType> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *>, std::__1::allocator<std::__1::__hash_node<TSCEReferenceType, void *> > > { struct __hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> { struct __hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; } x_1_1_1; } x1; }*)arg1 calcEngine:(id)arg2;
- (void)resumeCalculationEngine;
- (id)rowFormulas;
- (void)saveToArchive:(struct ChartMediatorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ChartMediatorArchive {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct ChartMediatorFormulaStorage {} *x7; bool x8; bool x9; }*)arg1 archiver:(id)arg2;
- (int)scatterFormat;
- (id)seriesDataFormulaForSeriesDimension:(id)arg1;
- (id)seriesDimensionForFormulaIndex:(unsigned long long)arg1;
- (bool)seriesLabelFormulasAreAllStatic;
- (id)seriesNameFormulaForSeriesIndex:(unsigned long long)arg1;
- (void)setEditingIsPhantomOverride:(bool)arg1;
- (void)setEditingStorageOverride:(id)arg1;
- (void)setFormulaOwnerUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (void)setFormulaStorage:(id)arg1;
- (void)setFormulaStorage:(id)arg1 doRegistration:(bool)arg2;
- (void)setImportUpgradeCondition:(id)arg1;
- (void)setIsEditing:(bool)arg1;
- (void)setRawFormulaStorage:(id)arg1;
- (void)synchronizeModelFromFormulaStorage;
- (void)synchronizeModelFromFormulaStorage:(id)arg1;
- (void)unregisterFromCalcEngine:(id)arg1;
- (id)untitledLabelOfType:(unsigned long long)arg1 formulaMap:(id)arg2 existingLabels:(id)arg3 runningIndex:(unsigned long long*)arg4;
- (void)updateForTableIDHistoryWithCalcEngine:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)writeResultsForCalcEngine:(id)arg1;

@end
