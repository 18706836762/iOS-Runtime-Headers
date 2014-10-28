/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@class NSString;

@interface TRKeyboardUserEntryPacketEvent : TRPacketEvent {
    int _commandType;
    unsigned long long _sessionID;
    NSString *_text;
}

@property(readonly) int commandType;
@property(readonly) unsigned long long sessionID;
@property(readonly) NSString * text;

+ (unsigned int)_packetEventType;

- (void).cxx_destruct;
- (id)_initWithVersion:(unsigned int)arg1 payloadDictionary:(id)arg2;
- (int)commandType;
- (id)description;
- (id)initWithCommandType:(int)arg1 sessionID:(unsigned long long)arg2 text:(id)arg3;
- (unsigned long long)sessionID;
- (id)text;

@end