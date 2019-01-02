/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASPersonModelItem : NSObject <NSCopying> {
    MSASAlbum * _album;
    NSString * _albumGUID;
    int  _errorCount;
    <NSObject> * _object;
}

@property (nonatomic, retain) MSASAlbum *album;
@property (nonatomic, retain) NSString *albumGUID;
@property (nonatomic) int errorCount;
@property (nonatomic, retain) <NSObject> *object;

- (void).cxx_destruct;
- (id)album;
- (id)albumGUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)errorCount;
- (bool)isEqual:(id)arg1;
- (id)object;
- (void)setAlbum:(id)arg1;
- (void)setAlbumGUID:(id)arg1;
- (void)setErrorCount:(int)arg1;
- (void)setObject:(id)arg1;

@end