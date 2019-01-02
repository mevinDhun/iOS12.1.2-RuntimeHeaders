/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualPairing.framework/VisualPairing
 */

@interface VPScannerViewController : UIViewController {
    UIButton * _cancelButton;
    UIView * _containerView;
    id /* block */  _eventHandler;
    UIButton * _pairManuallyButton;
    id /* block */  _scannedCodeHandler;
    VPScannerView * _scannerView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    NSString * _titleMessage;
    UIView * _viewfinderView;
}

@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, copy) id /* block */ eventHandler;
@property (nonatomic, retain) UIButton *pairManuallyButton;
@property (nonatomic, copy) id /* block */ scannedCodeHandler;
@property (nonatomic, retain) VPScannerView *scannerView;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, copy) NSString *titleMessage;
@property (nonatomic, retain) UIView *viewfinderView;

+ (id)instantiateViewController;

- (void).cxx_destruct;
- (id)cancelButton;
- (id)containerView;
- (id /* block */)eventHandler;
- (void)handleCancelButton:(id)arg1;
- (void)handlePairManuallyButton:(id)arg1;
- (id)pairManuallyButton;
- (id /* block */)scannedCodeHandler;
- (id)scannerView;
- (void)setCancelButton:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setPairManuallyButton:(id)arg1;
- (void)setScannedCodeHandler:(id /* block */)arg1;
- (void)setScannerView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleMessage:(id)arg1;
- (void)setViewfinderView:(id)arg1;
- (id)subtitleLabel;
- (unsigned long long)supportedInterfaceOrientations;
- (id)titleLabel;
- (id)titleMessage;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (id)viewfinderView;

@end
