/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPComponentWriter : NSObject {
    TSPReferenceOrderedSet * _analyzedCommandToModelReferences;
    TSPReferenceOrderedSet * _archivedObjects;
    NSMapTable * _archivedObjectsDictionary;
    TSPArchiverManager * _archiverManager;
    TSPReferenceOrderedSet * _commandToModelReferences;
    TSPComponent * _component;
    TSPMutableComponentObjectUUIDMap * _componentObjectUUIDMap;
    NSHashTable * _dataReferences;
    <TSPComponentWriterDelegate> * _delegate;
    NSObject<OS_dispatch_semaphore> * _delegateSemaphore;
    TSPReferenceOrderedSet * _externalReferences;
    NSMutableSet * _featureInfos;
    struct { 
        unsigned int success : 1; 
        unsigned int isErrorRecoverable : 1; 
        unsigned int calculatedObjectTargetType : 1; 
        unsigned int delegateRespondsToNeedsDocumentRecovery : 1; 
        unsigned int delegateRespondsToLocatorForClaimingComponent : 1; 
        unsigned int delegateRespondsToObjectBelongsToLinkedComponent : 1; 
        unsigned int delegateRespondsToExternalPackageDidWriteObject : 1; 
        unsigned int delegateRespondsToShouldDelayWritingObject : 1; 
    }  _flags;
    TSPReferenceOrderedSet * _indirectCommandToModelExternalReferences;
    NSHashTable * _lazyReferences;
    NSString * _locator;
    long long  _mode;
    TSPReferenceOrderedSet * _newCommandToModelReferences;
    TSPObjectReferenceMap * _objectReferenceMap;
    struct vector<TSP::ObjectStackEntry, std::__1::allocator<TSP::ObjectStackEntry> > { 
        struct ObjectStackEntry {} *__begin_; 
        struct ObjectStackEntry {} *__end_; 
        struct __compressed_pair<TSP::ObjectStackEntry *, std::__1::allocator<TSP::ObjectStackEntry> > { 
            struct ObjectStackEntry {} *__value_; 
        } __end_cap_; 
    }  _objectStack;
    unsigned long long  _objectTargetType;
    unsigned char  _packageIdentifier;
    TSPObject * _rootObject;
    TSPReferenceOrderedSet * _weakReferences;
    <TSPComponentWriteChannel> * _writeChannel;
    NSObject<OS_dispatch_group> * _writeGroup;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (nonatomic, readonly) TSPComponent *component;
@property (nonatomic, readonly) NSSet *featureInfos;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)acquireArchiverAccessLockAndWriteObjects:(id)arg1 parentObject:(id)arg2 isCommandToModelReference:(bool)arg3 isAnalyzingExternalComponent:(bool)arg4 completion:(id /* block */)arg5;
- (void)addCommandToModelReferences:(id)arg1 parentObject:(id)arg2;
- (void)analyzeCommandToModelReference:(id)arg1 isAnalyzingExternalComponent:(bool)arg2 archiver:(id)arg3 completion:(id /* block */)arg4;
- (bool)canSkipArchivingStronglyReferencedObject:(id)arg1 fromComponentRootObject:(id)arg2;
- (id)commandToModelReferencesToWrite;
- (id)component;
- (id)featureInfos;
- (id)init;
- (id)initWithComponent:(id)arg1 locator:(id)arg2 rootObject:(id)arg3 delegate:(id)arg4 mode:(long long)arg5 packageIdentifier:(unsigned char)arg6 objectReferenceMapOrNil:(id)arg7 writeChannel:(id)arg8 archiverManager:(id)arg9;
- (bool)isObjectExternal:(id)arg1 archiverOrNil:(id)arg2 parentObject:(id)arg3 validateAmbiguousObjectOwnership:(bool)arg4 hasArchiverAccessLock:(bool)arg5 claimingComponent:(id*)arg6 isOwnedByDifferentPackage:(bool*)arg7;
- (bool)isObjectExternalBecauseItAlreadyBelongsToAnotherComponent:(id)arg1 parentObject:(id)arg2 claimingComponent:(id*)arg3 claimingPackageIdentifier:(unsigned char*)arg4 claimingComponentWillBeLinked:(bool*)arg5;
- (bool)isObjectExternalBecauseOfExplicitComponentOwnership:(id)arg1 archiverOrNil:(id)arg2 claimingComponentOrNil:(id)arg3 hasArchiverAccessLock:(bool)arg4 explicitComponentRootObject:(id*)arg5 claimingComponent:(id*)arg6 isOwnedByDifferentPackage:(bool*)arg7;
- (bool)shouldAnalyzeCommandToModelReference:(id)arg1 isAnalyzingExternalComponent:(bool)arg2;
- (bool)shouldDelayWritingObject:(id)arg1;
- (bool)shouldWriteObject:(id)arg1;
- (void)validateAmbiguousObjectOwnershipForObject:(id)arg1 explicitComponentRootObject:(id)arg2 parentObject:(id)arg3 claimingComponent:(id)arg4 claimingPackageIdentifier:(unsigned char)arg5 claimingComponentWillBeLinked:(bool)arg6;
- (void)validateExplicitComponentOwnershipForObject:(id)arg1 archiverOrNil:(id)arg2 parentObject:(id)arg3 hasArchiverAccessLock:(bool)arg4;
- (bool)validateObjectContextForObject:(id)arg1;
- (void)writeArchiver:(id)arg1;
- (void)writeObject:(id)arg1 archiver:(id)arg2 parentObject:(id)arg3 completion:(id /* block */)arg4;
- (void)writeWithArchiverAccessLockForObjects:(id)arg1 parentObject:(id)arg2 isCommandToModelReference:(bool)arg3 isAnalyzingExternalComponent:(bool)arg4 completion:(id /* block */)arg5;
- (void)writeWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;

@end