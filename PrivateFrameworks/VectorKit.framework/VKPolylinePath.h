/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolylinePath : NSObject {
    VKPolylineOverlay * _overlay;
    bool  _ownsPoints;
    unsigned int  _pointCount;
    struct Matrix<float, 2, 1> { float x1[2]; } * _points;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeEnd;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeStart;
    GEOComposedRouteSection * _section;
    double  _sectionLengthScaleFactor;
    GEOSnappedRoutePath * _snappedPath;
    double  _startDistance;
    unsigned char  _trafficSpeed;
}

@property (readonly) bool hasCompletedMapMatching;
@property (readonly) bool isMapMatched;
@property (nonatomic, readonly) unsigned int pointCount;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct *points; /* unknown property attribute:  1>=[2f]} */
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } routeEnd;
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } routeStart;
@property (nonatomic, readonly) GEOComposedRouteSection *section;
@property (nonatomic, readonly) GEOSnappedRoutePath *snappedPath;
@property (nonatomic) double startDistance;
@property (nonatomic) unsigned char trafficSpeed;

- (id).cxx_construct;
- (void)assignPoints:(struct Matrix<float, 2, 1> { float x1[2]; }*)arg1 count:(unsigned int)arg2;
- (void)assignTo:(id)arg1 withSegment:(const struct TrafficSegment { unsigned int x1; unsigned char x2; }*)arg2;
- (void)dealloc;
- (id)description;
- (bool)hasCompletedMapMatching;
- (id)initWithOverlay:(id)arg1 section:(id)arg2;
- (id)initWithOverlay:(id)arg1 section:(id)arg2 routeStartIndex:(unsigned int)arg3 routeEndIndex:(unsigned int)arg4;
- (id)initWithOverlay:(id)arg1 snappedPath:(id)arg2;
- (bool)isMapMatched;
- (unsigned int)pointCount;
- (struct Matrix<float, 2, 1> { float x1[2]; }*)points;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeEnd;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeStart;
- (id)section;
- (void)setRouteEnd:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setRouteStart:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setStartDistance:(double)arg1;
- (void)setTrafficSpeed:(unsigned char)arg1;
- (id)snappedPath;
- (void)splitTrafficSegmentationAndAddTo:(id)arg1 with:(struct TrafficSegmentsAlongRoute { struct vector<md::TrafficSegment, std::__1::allocator<md::TrafficSegment> > { struct TrafficSegment {} *x_1_1_1; struct TrafficSegment {} *x_1_1_2; struct __compressed_pair<md::TrafficSegment *, std::__1::allocator<md::TrafficSegment> > { struct TrafficSegment {} *x_3_2_1; } x_1_1_3; } x1; }*)arg2 shouldSnap:(bool)arg3;
- (double)startDistance;
- (unsigned char)trafficSpeed;

@end
