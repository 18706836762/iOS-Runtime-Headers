/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface AVHapticSequence : NSObject {
    double  _lastStartTime;
    BOOL  _loopIsEnabled;
    AVHapticPlayer * _player;
    unsigned int  _seqID;
}

@property double lastStartTime;
@property BOOL loopingEnabled;
@property AVHapticPlayer *player;
@property unsigned int seqID;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithData:(id)arg1 player:(id)arg2 error:(id*)arg3;
- (id)initWithDictionary:(id)arg1 player:(id)arg2 error:(id*)arg3;
- (double)lastStartTime;
- (BOOL)loopingEnabled;
- (BOOL)playAtTime:(double)arg1 offset:(double)arg2 error:(id*)arg3;
- (id)player;
- (BOOL)prepareToPlayAndReturnError:(id*)arg1;
- (unsigned int)seqID;
- (void)setLastStartTime:(double)arg1;
- (void)setLoopingEnabled:(BOOL)arg1;
- (BOOL)setLoopingEnabled:(BOOL)arg1 error:(id*)arg2;
- (void)setPlayer:(id)arg1;
- (void)setSeqID:(unsigned int)arg1;
- (BOOL)stopAtTime:(double)arg1 error:(id*)arg2;

@end
