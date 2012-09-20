/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StocksPreferences : NSObject  {
    BOOL _changeColorSwapped;
}

@property(getter=isChangeColorSwapped,readonly) BOOL changeColorSwapped;

+ (id)sharedPreferences;
+ (void)clearSharedPreferences;

- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)synchronize;
- (BOOL)boolForKey:(id)arg1;
- (void)resetLocale;
- (BOOL)isChangeColorSwapped;

@end