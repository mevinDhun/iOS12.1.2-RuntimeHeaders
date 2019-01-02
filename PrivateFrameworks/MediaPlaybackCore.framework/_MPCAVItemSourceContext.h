/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCAVItemSourceContext : NSObject <MPAVItemPlaylistIdentifier> {
    <MPAVItemQueueIdentifier> * _itemIdentifier;
    MPQueueFeeder * _queueFeeder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MPAVItemQueueIdentifier> *itemIdentifier;
@property (nonatomic, retain) MPQueueFeeder *queueFeeder;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)itemIdentifier;
- (id)queueFeeder;
- (void)setItemIdentifier:(id)arg1;
- (void)setQueueFeeder:(id)arg1;

@end