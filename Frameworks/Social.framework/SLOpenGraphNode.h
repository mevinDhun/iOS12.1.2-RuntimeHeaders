/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLOpenGraphNode : NSObject {
    NSURL * _URL;
    int  _fetchState;
    NSArray * _likedByFriends;
    bool  _likedByMe;
    unsigned long long  _numberOfFriendLikes;
    unsigned long long  _numberOfLikes;
}

@property (readonly) NSURL *URL;
@property (nonatomic) int fetchState;
@property (readonly) unsigned long long friendLikeCount;
@property (readonly) unsigned long long globalLikeCount;
@property (readonly) NSArray *likedByFriends;
@property (readonly) bool likedByMe;

- (void).cxx_destruct;
- (id)URL;
- (void)_startUpdateIfNeeded;
- (id)cache;
- (int)fetchState;
- (unsigned long long)friendLikeCount;
- (unsigned long long)globalLikeCount;
- (id)initWithURL:(id)arg1;
- (void)invalidate;
- (void)likeWithCompletion:(id /* block */)arg1;
- (id)likedByFriends;
- (bool)likedByMe;
- (void)setFetchState:(int)arg1;
- (void)unlikeWithCompletion:(id /* block */)arg1;

@end