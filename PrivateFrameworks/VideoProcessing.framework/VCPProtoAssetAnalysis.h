/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPProtoAssetAnalysis : PBCodable <NSCopying> {
    NSString * _assetAdjustedFingerprint;
    NSString * _assetIdentifier;
    NSString * _assetMasterFingerprint;
    double  _assetModificationDate;
    double  _date;
    unsigned int  _flags;
    struct { 
        unsigned int quality : 1; 
        unsigned int statsFlags : 1; 
    }  _has;
    NSMutableArray * _imageBlurResults;
    NSMutableArray * _imageCompositionResults;
    NSMutableArray * _imageExposureResults;
    NSMutableArray * _imageFaceResults;
    NSMutableArray * _imageFeatureResults;
    NSMutableArray * _imageJunkResults;
    NSMutableArray * _imagePetsResults;
    NSMutableArray * _imageSaliencyResults;
    NSMutableArray * _imageShotTypeResults;
    NSMutableArray * _livePhotoEffectsResults;
    NSMutableArray * _livePhotoRecommendationResults;
    NSMutableArray * _livePhotoSharpnessResults;
    NSMutableArray * _movieActivityLevelResults;
    NSMutableArray * _movieCameraMotionResults;
    NSMutableArray * _movieClassificationResults;
    NSMutableArray * _movieFaceResults;
    NSMutableArray * _movieFaceprintResults;
    NSMutableArray * _movieFeatureResults;
    NSMutableArray * _movieFineSubjectMotionResults;
    NSMutableArray * _movieHighlightResults;
    NSMutableArray * _movieInterestingnessResults;
    NSMutableArray * _movieMovingObjectResults;
    NSMutableArray * _movieMusicResults;
    NSMutableArray * _movieObstructionResults;
    NSMutableArray * _movieOrientationResults;
    NSMutableArray * _moviePreEncodeResults;
    NSMutableArray * _movieQualityResults;
    NSMutableArray * _movieSaliencyResults;
    NSMutableArray * _movieSceneResults;
    NSMutableArray * _movieSubjectMotionResults;
    NSMutableArray * _movieSummaryResults;
    NSMutableArray * _movieUtteranceResults;
    NSMutableArray * _movieVoiceResults;
    double  _quality;
    unsigned long long  _statsFlags;
    unsigned int  _types;
    unsigned int  _version;
}

@property (nonatomic, retain) NSString *assetAdjustedFingerprint;
@property (nonatomic, retain) NSString *assetIdentifier;
@property (nonatomic, retain) NSString *assetMasterFingerprint;
@property (nonatomic) double assetModificationDate;
@property (nonatomic) double date;
@property (nonatomic) unsigned int flags;
@property (nonatomic, readonly) bool hasAssetAdjustedFingerprint;
@property (nonatomic) bool hasQuality;
@property (nonatomic) bool hasStatsFlags;
@property (nonatomic, retain) NSMutableArray *imageBlurResults;
@property (nonatomic, retain) NSMutableArray *imageCompositionResults;
@property (nonatomic, retain) NSMutableArray *imageExposureResults;
@property (nonatomic, retain) NSMutableArray *imageFaceResults;
@property (nonatomic, retain) NSMutableArray *imageFeatureResults;
@property (nonatomic, retain) NSMutableArray *imageJunkResults;
@property (nonatomic, retain) NSMutableArray *imagePetsResults;
@property (nonatomic, retain) NSMutableArray *imageSaliencyResults;
@property (nonatomic, retain) NSMutableArray *imageShotTypeResults;
@property (nonatomic, retain) NSMutableArray *livePhotoEffectsResults;
@property (nonatomic, retain) NSMutableArray *livePhotoRecommendationResults;
@property (nonatomic, retain) NSMutableArray *livePhotoSharpnessResults;
@property (nonatomic, retain) NSMutableArray *movieActivityLevelResults;
@property (nonatomic, retain) NSMutableArray *movieCameraMotionResults;
@property (nonatomic, retain) NSMutableArray *movieClassificationResults;
@property (nonatomic, retain) NSMutableArray *movieFaceResults;
@property (nonatomic, retain) NSMutableArray *movieFaceprintResults;
@property (nonatomic, retain) NSMutableArray *movieFeatureResults;
@property (nonatomic, retain) NSMutableArray *movieFineSubjectMotionResults;
@property (nonatomic, retain) NSMutableArray *movieHighlightResults;
@property (nonatomic, retain) NSMutableArray *movieInterestingnessResults;
@property (nonatomic, retain) NSMutableArray *movieMovingObjectResults;
@property (nonatomic, retain) NSMutableArray *movieMusicResults;
@property (nonatomic, retain) NSMutableArray *movieObstructionResults;
@property (nonatomic, retain) NSMutableArray *movieOrientationResults;
@property (nonatomic, retain) NSMutableArray *moviePreEncodeResults;
@property (nonatomic, retain) NSMutableArray *movieQualityResults;
@property (nonatomic, retain) NSMutableArray *movieSaliencyResults;
@property (nonatomic, retain) NSMutableArray *movieSceneResults;
@property (nonatomic, retain) NSMutableArray *movieSubjectMotionResults;
@property (nonatomic, retain) NSMutableArray *movieSummaryResults;
@property (nonatomic, retain) NSMutableArray *movieUtteranceResults;
@property (nonatomic, retain) NSMutableArray *movieVoiceResults;
@property (nonatomic) double quality;
@property (nonatomic) unsigned long long statsFlags;
@property (nonatomic) unsigned int types;
@property (nonatomic) unsigned int version;

+ (id)imageAnalysisFromLegacyDictionary:(id)arg1;
+ (Class)imageBlurResultsType;
+ (Class)imageCompositionResultsType;
+ (Class)imageExposureResultsType;
+ (Class)imageFaceResultsType;
+ (Class)imageFeatureResultsType;
+ (Class)imageJunkResultsType;
+ (Class)imagePetsResultsType;
+ (Class)imageSaliencyResultsType;
+ (Class)imageShotTypeResultsType;
+ (Class)livePhotoEffectsResultsType;
+ (Class)livePhotoRecommendationResultsType;
+ (Class)livePhotoSharpnessResultsType;
+ (Class)movieActivityLevelResultsType;
+ (id)movieAnalysisFromLegacyDictionary:(id)arg1;
+ (Class)movieCameraMotionResultsType;
+ (Class)movieClassificationResultsType;
+ (Class)movieFaceResultsType;
+ (Class)movieFaceprintResultsType;
+ (Class)movieFeatureResultsType;
+ (Class)movieFineSubjectMotionResultsType;
+ (Class)movieHighlightResultsType;
+ (Class)movieInterestingnessResultsType;
+ (Class)movieMovingObjectResultsType;
+ (Class)movieMusicResultsType;
+ (Class)movieObstructionResultsType;
+ (Class)movieOrientationResultsType;
+ (Class)moviePreEncodeResultsType;
+ (Class)movieQualityResultsType;
+ (Class)movieSaliencyResultsType;
+ (Class)movieSceneResultsType;
+ (Class)movieSubjectMotionResultsType;
+ (Class)movieSummaryResultsType;
+ (Class)movieUtteranceResultsType;
+ (Class)movieVoiceResultsType;

- (void).cxx_destruct;
- (void)addImageBlurResults:(id)arg1;
- (void)addImageCompositionResults:(id)arg1;
- (void)addImageExposureResults:(id)arg1;
- (void)addImageFaceResults:(id)arg1;
- (void)addImageFeatureResults:(id)arg1;
- (void)addImageJunkResults:(id)arg1;
- (void)addImagePetsResults:(id)arg1;
- (void)addImageSaliencyResults:(id)arg1;
- (void)addImageShotTypeResults:(id)arg1;
- (void)addLivePhotoEffectsResults:(id)arg1;
- (void)addLivePhotoRecommendationResults:(id)arg1;
- (void)addLivePhotoSharpnessResults:(id)arg1;
- (void)addMovieActivityLevelResults:(id)arg1;
- (void)addMovieCameraMotionResults:(id)arg1;
- (void)addMovieClassificationResults:(id)arg1;
- (void)addMovieFaceResults:(id)arg1;
- (void)addMovieFaceprintResults:(id)arg1;
- (void)addMovieFeatureResults:(id)arg1;
- (void)addMovieFineSubjectMotionResults:(id)arg1;
- (void)addMovieHighlightResults:(id)arg1;
- (void)addMovieInterestingnessResults:(id)arg1;
- (void)addMovieMovingObjectResults:(id)arg1;
- (void)addMovieMusicResults:(id)arg1;
- (void)addMovieObstructionResults:(id)arg1;
- (void)addMovieOrientationResults:(id)arg1;
- (void)addMoviePreEncodeResults:(id)arg1;
- (void)addMovieQualityResults:(id)arg1;
- (void)addMovieSaliencyResults:(id)arg1;
- (void)addMovieSceneResults:(id)arg1;
- (void)addMovieSubjectMotionResults:(id)arg1;
- (void)addMovieSummaryResults:(id)arg1;
- (void)addMovieUtteranceResults:(id)arg1;
- (void)addMovieVoiceResults:(id)arg1;
- (id)assetAdjustedFingerprint;
- (id)assetIdentifier;
- (id)assetMasterFingerprint;
- (double)assetModificationDate;
- (void)clearImageBlurResults;
- (void)clearImageCompositionResults;
- (void)clearImageExposureResults;
- (void)clearImageFaceResults;
- (void)clearImageFeatureResults;
- (void)clearImageJunkResults;
- (void)clearImagePetsResults;
- (void)clearImageSaliencyResults;
- (void)clearImageShotTypeResults;
- (void)clearLivePhotoEffectsResults;
- (void)clearLivePhotoRecommendationResults;
- (void)clearLivePhotoSharpnessResults;
- (void)clearMovieActivityLevelResults;
- (void)clearMovieCameraMotionResults;
- (void)clearMovieClassificationResults;
- (void)clearMovieFaceResults;
- (void)clearMovieFaceprintResults;
- (void)clearMovieFeatureResults;
- (void)clearMovieFineSubjectMotionResults;
- (void)clearMovieHighlightResults;
- (void)clearMovieInterestingnessResults;
- (void)clearMovieMovingObjectResults;
- (void)clearMovieMusicResults;
- (void)clearMovieObstructionResults;
- (void)clearMovieOrientationResults;
- (void)clearMoviePreEncodeResults;
- (void)clearMovieQualityResults;
- (void)clearMovieSaliencyResults;
- (void)clearMovieSceneResults;
- (void)clearMovieSubjectMotionResults;
- (void)clearMovieSummaryResults;
- (void)clearMovieUtteranceResults;
- (void)clearMovieVoiceResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)exportResultsWithPropertyKey:(id)arg1 toLegacyDictionary:(id)arg2 withKey:(id)arg3;
- (id)exportToLegacyDictionary;
- (unsigned int)flags;
- (bool)hasAssetAdjustedFingerprint;
- (bool)hasQuality;
- (bool)hasStatsFlags;
- (unsigned long long)hash;
- (id)imageBlurResults;
- (id)imageBlurResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageBlurResultsCount;
- (id)imageCompositionResults;
- (id)imageCompositionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageCompositionResultsCount;
- (id)imageExposureResults;
- (id)imageExposureResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageExposureResultsCount;
- (id)imageFaceResults;
- (id)imageFaceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageFaceResultsCount;
- (id)imageFeatureResults;
- (id)imageFeatureResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageFeatureResultsCount;
- (id)imageJunkResults;
- (id)imageJunkResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageJunkResultsCount;
- (id)imagePetsResults;
- (id)imagePetsResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imagePetsResultsCount;
- (id)imageSaliencyResults;
- (id)imageSaliencyResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageSaliencyResultsCount;
- (id)imageShotTypeResults;
- (id)imageShotTypeResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageShotTypeResultsCount;
- (bool)isEqual:(id)arg1;
- (id)livePhotoEffectsResults;
- (id)livePhotoEffectsResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)livePhotoEffectsResultsCount;
- (id)livePhotoRecommendationResults;
- (id)livePhotoRecommendationResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)livePhotoRecommendationResultsCount;
- (id)livePhotoSharpnessResults;
- (id)livePhotoSharpnessResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)livePhotoSharpnessResultsCount;
- (void)mergeFrom:(id)arg1;
- (id)movieActivityLevelResults;
- (id)movieActivityLevelResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieActivityLevelResultsCount;
- (id)movieCameraMotionResults;
- (id)movieCameraMotionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieCameraMotionResultsCount;
- (id)movieClassificationResults;
- (id)movieClassificationResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieClassificationResultsCount;
- (id)movieFaceResults;
- (id)movieFaceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieFaceResultsCount;
- (id)movieFaceprintResults;
- (id)movieFaceprintResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieFaceprintResultsCount;
- (id)movieFeatureResults;
- (id)movieFeatureResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieFeatureResultsCount;
- (id)movieFineSubjectMotionResults;
- (id)movieFineSubjectMotionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieFineSubjectMotionResultsCount;
- (id)movieHighlightResults;
- (id)movieHighlightResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieHighlightResultsCount;
- (id)movieInterestingnessResults;
- (id)movieInterestingnessResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieInterestingnessResultsCount;
- (id)movieMovingObjectResults;
- (id)movieMovingObjectResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieMovingObjectResultsCount;
- (id)movieMusicResults;
- (id)movieMusicResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieMusicResultsCount;
- (id)movieObstructionResults;
- (id)movieObstructionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieObstructionResultsCount;
- (id)movieOrientationResults;
- (id)movieOrientationResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieOrientationResultsCount;
- (id)moviePreEncodeResults;
- (id)moviePreEncodeResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)moviePreEncodeResultsCount;
- (id)movieQualityResults;
- (id)movieQualityResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieQualityResultsCount;
- (id)movieSaliencyResults;
- (id)movieSaliencyResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieSaliencyResultsCount;
- (id)movieSceneResults;
- (id)movieSceneResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieSceneResultsCount;
- (id)movieSubjectMotionResults;
- (id)movieSubjectMotionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieSubjectMotionResultsCount;
- (id)movieSummaryResults;
- (id)movieSummaryResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieSummaryResultsCount;
- (id)movieUtteranceResults;
- (id)movieUtteranceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieUtteranceResultsCount;
- (id)movieVoiceResults;
- (id)movieVoiceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieVoiceResultsCount;
- (double)quality;
- (bool)readFrom:(id)arg1;
- (void)setAssetAdjustedFingerprint:(id)arg1;
- (void)setAssetIdentifier:(id)arg1;
- (void)setAssetMasterFingerprint:(id)arg1;
- (void)setAssetModificationDate:(double)arg1;
- (bool)setAttributesFromLegacyDictionary:(id)arg1;
- (void)setDate:(double)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setHasQuality:(bool)arg1;
- (void)setHasStatsFlags:(bool)arg1;
- (void)setImageBlurResults:(id)arg1;
- (void)setImageCompositionResults:(id)arg1;
- (void)setImageExposureResults:(id)arg1;
- (void)setImageFaceResults:(id)arg1;
- (void)setImageFeatureResults:(id)arg1;
- (void)setImageJunkResults:(id)arg1;
- (void)setImagePetsResults:(id)arg1;
- (void)setImageSaliencyResults:(id)arg1;
- (void)setImageShotTypeResults:(id)arg1;
- (void)setLivePhotoEffectsResults:(id)arg1;
- (void)setLivePhotoRecommendationResults:(id)arg1;
- (void)setLivePhotoSharpnessResults:(id)arg1;
- (void)setMovieActivityLevelResults:(id)arg1;
- (void)setMovieCameraMotionResults:(id)arg1;
- (void)setMovieClassificationResults:(id)arg1;
- (void)setMovieFaceResults:(id)arg1;
- (void)setMovieFaceprintResults:(id)arg1;
- (void)setMovieFeatureResults:(id)arg1;
- (void)setMovieFineSubjectMotionResults:(id)arg1;
- (void)setMovieHighlightResults:(id)arg1;
- (void)setMovieInterestingnessResults:(id)arg1;
- (void)setMovieMovingObjectResults:(id)arg1;
- (void)setMovieMusicResults:(id)arg1;
- (void)setMovieObstructionResults:(id)arg1;
- (void)setMovieOrientationResults:(id)arg1;
- (void)setMoviePreEncodeResults:(id)arg1;
- (void)setMovieQualityResults:(id)arg1;
- (void)setMovieSaliencyResults:(id)arg1;
- (void)setMovieSceneResults:(id)arg1;
- (void)setMovieSubjectMotionResults:(id)arg1;
- (void)setMovieSummaryResults:(id)arg1;
- (void)setMovieUtteranceResults:(id)arg1;
- (void)setMovieVoiceResults:(id)arg1;
- (void)setQuality:(double)arg1;
- (bool)setResults:(id)arg1 withClass:(Class)arg2 forPropertyKey:(id)arg3;
- (void)setStatsFlags:(unsigned long long)arg1;
- (void)setTypes:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned long long)statsFlags;
- (unsigned int)types;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
