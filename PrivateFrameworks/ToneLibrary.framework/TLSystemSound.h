/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLSystemSound : NSObject {
    bool  _shouldDisposeOfSoundID;
    NSURL * _soundFileURL;
    unsigned int  _soundID;
}

@property (nonatomic, readonly) NSURL *soundFileURL;
@property (nonatomic, readonly) unsigned int soundID;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithSoundFileURL:(id)arg1 soundID:(unsigned int)arg2;
- (id)soundFileURL;
- (unsigned int)soundID;

@end
