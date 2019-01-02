/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLTFileThumbnailRequest : QLTThumbnailRequest {
    FPSandboxingURLWrapper * _genericSandboxWrapper;
    FPSandboxingURLWrapper * _quicklookSandboxWrapper;
}

@property (nonatomic, readonly) FPSandboxingURLWrapper *genericSandboxWrapper;
@property (nonatomic, readonly) FPSandboxingURLWrapper *quicklookSandboxWrapper;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)genericSandboxWrapper;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileAtURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 iconMode:(bool)arg5;
- (id)initWithFileAtURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 iconMode:(bool)arg5 error:(id*)arg6;
- (id)initWithFileAtURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 iconMode:(bool)arg4;
- (id)initWithFileAtURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 iconMode:(bool)arg4 error:(id*)arg5;
- (id)quicklookSandboxWrapper;

@end