/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioPlaybackContext : NSObject <NSCopying, NSMutableCopying> {
    int  _numberOfSkipsUsed;
    NSArray * _trackPlaybackDescriptorQueue;
}

@property (nonatomic, readonly) int numberOfSkipsUsed;
@property (nonatomic, readonly, copy) NSArray *trackPlaybackDescriptorQueue;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (int)numberOfSkipsUsed;
- (id)playbackContextDictionary;
- (id)trackPlaybackDescriptorQueue;

@end
