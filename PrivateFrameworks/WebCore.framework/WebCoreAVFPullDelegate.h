/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreAVFPullDelegate : NSObject <AVPlayerItemOutputPullDelegate> {
    struct MediaPlayerPrivateAVFoundationObjC { int (**x1)(); struct WeakPtrFactory<WebCore::MediaPlayerPrivateAVFoundation> { struct RefPtr<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation> > > { struct WeakReference<WebCore::MediaPlayerPrivateAVFoundation> {} *x_1_2_1; } x_2_1_1; } x2; int (**x3)(); int (**x4)(); struct Vector<WTF::RefPtr<WebCore::InbandTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandTextTrackPrivateAVF> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::InbandTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandTextTrackPrivateAVF> > {} *x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; } x5; struct MediaPlayer {} *x6; struct Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase {} x7; } * m_callback;
    NSObject<OS_dispatch_semaphore> * m_semaphore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithCallback:(struct MediaPlayerPrivateAVFoundationObjC { int (**x1)(); struct WeakPtrFactory<WebCore::MediaPlayerPrivateAVFoundation> { struct RefPtr<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation> > > { struct WeakReference<WebCore::MediaPlayerPrivateAVFoundation> {} *x_1_2_1; } x_2_1_1; } x2; int (**x3)(); int (**x4)(); struct Vector<WTF::RefPtr<WebCore::InbandTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandTextTrackPrivateAVF> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::InbandTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandTextTrackPrivateAVF> > {} *x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; } x5; struct MediaPlayer {} *x6; struct Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase {} x7; }*)arg1;
- (void)outputMediaDataWillChange:(struct AVPlayerItemVideoOutput { Class x1; id x2; }*)arg1;
- (void)outputSequenceWasFlushed:(struct AVPlayerItemVideoOutput { Class x1; id x2; }*)arg1;
- (void)setCallback:(struct MediaPlayerPrivateAVFoundationObjC { int (**x1)(); struct WeakPtrFactory<WebCore::MediaPlayerPrivateAVFoundation> { struct RefPtr<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation> > > { struct WeakReference<WebCore::MediaPlayerPrivateAVFoundation> {} *x_1_2_1; } x_2_1_1; } x2; int (**x3)(); int (**x4)(); struct Vector<WTF::RefPtr<WebCore::InbandTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandTextTrackPrivateAVF> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::InbandTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandTextTrackPrivateAVF> > {} *x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; } x5; struct MediaPlayer {} *x6; struct Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase {} x7; }*)arg1;

@end
