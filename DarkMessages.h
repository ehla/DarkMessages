//
//  DarkMessages.h
//  DarkMessages
//
//  ©2017 Sticktron
//

#define kPrefsPlistPath 	@"/var/mobile/Library/Preferences/com.sticktron.darkmessages.plist"
#define kPrefsEnabledKey 	@"Enabled"

#define kNoctisAppID 		CFSTR("com.laughingquoll.noctis")
#define kNoctisEnabledKey 	CFSTR("LQDDarkModeEnabled")

#define kSettingsChangedNotification 	CFSTR("com.sticktron.darkmessages.settingschanged")
#define kRelaunchMobileSMSNotification 	CFSTR("com.sticktron.darkmessages.relaunchmobilesms")


// Private APIs

@interface UIApplication (DM)
- (BOOL)isSuspended;
- (void)terminateWithSuccess;
@end

@interface CKUITheme : NSObject
@end

@interface CKUIThemeDark : CKUITheme
- (UIColor *)entryFieldButtonColor;
- (UIColor *)entryFieldDarkStyleButtonColor;
@end

@interface NightModeControl : NSObject // from CoreBrightness
- (void)enableBlueLightReduction:(BOOL)arg1 withOption:(int)arg2;
@end

@interface AXBackBoardServer : NSObject
+ (id)server;
- (BOOL)blueLightStatusEnabled;
@end

@interface SBApplication : NSObject
@end

@interface SBApplicationController : NSObject
+ (id)sharedInstance;
- (id)applicationWithBundleIdentifier:(id)arg1;
- (void)applicationService:(id)arg1 suspendApplicationWithBundleIdentifier:(id)arg2;
@end