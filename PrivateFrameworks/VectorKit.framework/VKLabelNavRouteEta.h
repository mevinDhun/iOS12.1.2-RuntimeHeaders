/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelNavRouteEta : NSObject <VKLabelNavFeature> {
    VKRouteEtaDescription * _displayEtaDescription;
    VKLabelNavRoadLabel * _etaLabel;
    unsigned long long  _etaLabelArtworkKey;
    bool  _isAwayFromRoute;
    bool  _isOnRoute;
    bool  _isPicked;
    bool  _isRepositioning;
    unsigned char  _orientation;
    VKRouteInfo * _routeInfo;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeOffset;
    bool  _selected;
}

@property (nonatomic, readonly) VKRouteEtaDescription *displayEtaDescription;
@property (nonatomic, readonly) unsigned char etaComparisonToMain;
@property (nonatomic, readonly) long long intraRoadPriority;
@property (nonatomic, readonly) bool isAwayFromRoute;
@property (nonatomic, readonly) bool isEtaFeature;
@property (nonatomic, readonly) bool isGuidanceStepStart;
@property (nonatomic, readonly) bool isInGuidance;
@property (nonatomic, readonly) bool isOnRoute;
@property (nonatomic) bool isPicked;
@property (nonatomic, readonly) bool isRamp;
@property (nonatomic) bool isRepositioning;
@property (nonatomic, readonly) bool isStartOfRoadName;
@property (nonatomic, readonly) bool isTrafficCameraFeature;
@property (nonatomic, readonly) VKLabelNavRoadLabel *label;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) unsigned char orientation;
@property (nonatomic, retain) VKRouteInfo *routeInfo;
@property (nonatomic, readonly) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;
@property (nonatomic) bool selected;
@property (nonatomic, readonly) NSString *shieldDisplayGroup;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  worldPoint; /* unknown property attribute:  1>=[3d]} */

+ (id)artworkForEtaDescription:(id)arg1 navContext:(const struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg2 styleQuery:(struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > { struct StylesheetQuery<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg3 orientation:(unsigned char)arg4 artworkCache:(struct VKLabelNavArtworkCache { struct unique_ptr<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_1_1_1; } x1; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_2_1_1; } x2; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_3_1_1; } x3; }*)arg5 selected:(bool)arg6;
+ (struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > { struct StylesheetQuery<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })styleQueryForNavContext:(const struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1 selected:(bool)arg2 etaComparison:(unsigned char)arg3 transportType:(unsigned char)arg4;
+ (unsigned char)toStyleEtaComparison:(unsigned char)arg1;

- (id).cxx_construct;
- (void)_clearLabel;
- (void)createLabelWithNavContext:(const struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1 orientation:(unsigned char)arg2 etaDescription:(id)arg3 selected:(bool)arg4 artworkCache:(struct VKLabelNavArtworkCache { struct unique_ptr<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_1_1_1; } x1; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_2_1_1; } x2; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_3_1_1; } x3; }*)arg5;
- (void)dealloc;
- (id)displayEtaDescription;
- (unsigned char)etaComparisonToMain;
- (id)initWithRouteInfo:(id)arg1 routeCoord:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (long long)intraRoadPriority;
- (bool)isAwayFromRoute;
- (bool)isEtaFeature;
- (bool)isGuidanceStepStart;
- (bool)isInGuidance;
- (bool)isOnRoute;
- (bool)isPicked;
- (bool)isRamp;
- (bool)isRepositioning;
- (bool)isStartOfRoadName;
- (bool)isTrafficCameraFeature;
- (id)label;
- (struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; })labelRectForOrientation:(unsigned char)arg1 styleQuery:(const struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > { struct StylesheetQuery<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; }*)arg2 navContext:(const struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg3 anchorPosition:(struct Matrix<float, 2, 1> { float x1[2]; })arg4 artworkCache:(struct VKLabelNavArtworkCache { struct unique_ptr<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_1_1_1; } x1; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_2_1_1; } x2; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_3_1_1; } x3; }*)arg5;
- (void)layoutWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1;
- (id)name;
- (unsigned char)orientation;
- (void)prepareStyleVarsWithContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1;
- (void)repositionAtRouteCoord:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (id)routeInfo;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (bool)selected;
- (void)setIsPicked:(bool)arg1;
- (void)setIsRepositioning:(bool)arg1;
- (void)setOrientation:(unsigned char)arg1;
- (void)setRouteInfo:(id)arg1;
- (void)setSelected:(bool)arg1;
- (id)shieldDisplayGroup;
- (struct _retain_ptr<VKLabelNavRoadLabel *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x1)(); id x2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x3; const void*x4; void*x5; void*x6; int x7; in void*x8; out unsigned int x9/* : ? */; void*x10; BOOL x11; void*x12; })updateRoadSignWithNavContext:(const struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1 artworkCache:(struct VKLabelNavArtworkCache { struct unique_ptr<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_1_1_1; } x1; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_2_1_1; } x2; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_3_1_1; } x3; }*)arg2;
- (struct Matrix<double, 3, 1> { double x1[3]; })worldPoint;

@end
