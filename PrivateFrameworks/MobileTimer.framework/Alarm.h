/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@class NSDate, <AlarmDelegate>, UILocalNotification, NSDictionary, Alarm, NSString, NSURL, NSMutableDictionary, NSArray;

@interface Alarm : NSObject  {
    NSString *_id;
    NSURL *_idUrl;
    NSMutableDictionary *_settings;
    UILocalNotification *_notification;
    UILocalNotification *_weeklyNotifications[7];
    UILocalNotification *_snoozedNotification;
    unsigned int _hour;
    unsigned int _minute;
    unsigned int _daySetting;
    NSArray *_repeatDays;
    BOOL _allowsSnooze;
    int _soundType;
    NSString *_sound;
    NSString *_title;
    NSDate *_lastModified;
    unsigned int _revision;
    <AlarmDelegate> *_delegate;
    Alarm *_editingProxy;
    BOOL _pretendActiveIfProxy;
    int _snapshotSoundType;
    NSString *_snapshotSound;
}

@property(readonly) Alarm * editingProxy;
@property(readonly) NSString * alarmId;
@property(readonly) NSURL * alarmIdUrl;
@property(readonly) NSDictionary * settings;
@property(getter=isActive,readonly) BOOL active;
@property(getter=isSnoozed,readonly) BOOL snoozed;
@property unsigned int hour;
@property unsigned int minute;
@property(readonly) BOOL repeats;
@property(readonly) NSArray * repeatDays;
@property unsigned int daySetting;
@property BOOL allowsSnooze;
@property(readonly) int soundType;
@property(readonly) NSString * sound;
@property(readonly) int snapshotSoundType;
@property(readonly) NSString * snapshotSound;
@property(readonly) NSString * uiTitle;
@property(readonly) NSString * rawTitle;
@property(readonly) NSDate * lastModified;
@property(readonly) unsigned int revision;
@property <AlarmDelegate> * delegate;

+ (BOOL)_verifyNotificationSettings:(id)arg1 againstAlarmSettings:(id)arg2;
+ (BOOL)_verifyNotificationSettings:(id)arg1 againstUserInfo:(id)arg2;
+ (BOOL)verifyDaySetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyMinuteSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyHourSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyIdSetting:(id)arg1 withMessageList:(id)arg2;
+ (id)_newSettingsFromNotification:(id)arg1;
+ (BOOL)isSnoozeNotification:(id)arg1;
+ (BOOL)verifySettings:(id)arg1;

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)debugDescription;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (unsigned int)revision;
- (id)settings;
- (int)soundType;
- (void)setMinute:(unsigned int)arg1;
- (void)setHour:(unsigned int)arg1;
- (unsigned int)minute;
- (unsigned int)hour;
- (BOOL)isActive;
- (void)setTitle:(id)arg1;
- (id)snapshotSound;
- (int)snapshotSoundType;
- (id)editingProxy;
- (id)uiTitle;
- (id)repeatDays;
- (void)applyChangesFromEditingProxy;
- (void)prepareEditingProxy;
- (id)initWithDefaultValues;
- (id)initWithNotification:(id)arg1;
- (unsigned int)_notificationsCount;
- (BOOL)isSnoozed;
- (id)nextFireDateAfterDate:(id)arg1 notification:(id)arg2 day:(int)arg3;
- (void)prepareNotifications;
- (id)_newNotification:(int)arg1;
- (id)_newBaseDateComponentsForDay:(int)arg1;
- (id)timeZoneForOffsetCalculation;
- (BOOL)allowsSnooze;
- (unsigned int)daySetting;
- (void)dropEditingProxy;
- (id)nowDateForOffsetCalculation;
- (void)applySettings:(id)arg1;
- (void)handleAlarmFired:(id)arg1;
- (void)handleNotificationSnoozed:(id)arg1 notifyDelegate:(BOOL)arg2;
- (void)refreshActiveState;
- (void)dropNotifications;
- (BOOL)tryAddNotification:(id)arg1;
- (void)cancelNotifications;
- (id)nextFireDate;
- (id)alarmIdUrl;
- (id)rawTitle;
- (BOOL)repeats;
- (id)initWithSettings:(id)arg1;
- (void)scheduleNotifications;
- (int)compareTime:(id)arg1;
- (void)markModified;
- (void)setDaySetting:(unsigned int)arg1;
- (void)setSound:(id)arg1 ofType:(int)arg2;
- (void)setAllowsSnooze:(BOOL)arg1;
- (id)lastModified;
- (id)sound;
- (id)alarmId;

@end