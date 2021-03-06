/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImportFileManager : NSObject

+ (bool)isCameraDirectoryFolderName:(id)arg1;
+ (bool)isImportDirectoryFolderName:(id)arg1;

- (id)_DCIMFolderNameWithNumber:(long long)arg1;
- (id)_dcimDirectory;
- (id)nextAvailableFilePathInDirectory:(id)arg1 withExtension:(id)arg2;
- (bool)removeUnusedDCIMDirectoryAtPath:(id)arg1;
- (id)urlForNewDCIMFolderWithFolderNumber:(long long*)arg1;

@end
