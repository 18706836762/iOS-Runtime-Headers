/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
 */

@interface AITransactionLog : NSObject {
    NSObject<OS_os_log> * _log;
}

+ (id)_defaultLog;
+ (void)initializeWithLog:(id)arg1;
+ (void)logScenario:(id)arg1 step:(unsigned int)arg2 success:(BOOL)arg3 forBundleID:(id)arg4 description:(id)arg5;

- (void).cxx_destruct;
- (id)_initWithLog:(id)arg1;
- (void)_logScenario:(id)arg1 step:(unsigned int)arg2 success:(BOOL)arg3 forBundleID:(id)arg4 description:(id)arg5;

@end
