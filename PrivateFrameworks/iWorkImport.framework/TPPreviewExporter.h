/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPreviewExporter : TPRenderingExporter <TSKImageExporter>

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundsRect;
@property (nonatomic, readonly) bool canExportInBackground;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *documentSpecificTypeUTI;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long height;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) bool isExportSupported;
@property (nonatomic, readonly) bool needsSupplementalFiles;
@property (nonatomic, readonly) unsigned long long pageCount;
@property (nonatomic) bool paginate;
@property (nonatomic, readonly) TSUProgress *progress;
@property (nonatomic, readonly) double progressForCurrentPage;
@property (nonatomic, readonly) NSString *savePanelMessage;
@property (nonatomic) bool scaleToFit;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *typeUTI;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unscaledClipRect;
@property (nonatomic) unsigned long long width;

- (unsigned long long)height;
- (id)p_renderingExporterDelegate;
- (bool)scaleToFit;
- (void)setHeight:(unsigned long long)arg1;
- (void)setScaleToFit:(bool)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)width;

@end
