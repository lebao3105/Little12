#import <Preferences/PSListController.h>
#import <Preferences/PSSpecifier.h>
#import <rootless.h>

@interface L12AppSettingsController : PSListController
@property (nonatomic, strong) NSString *displayName;
@property (nonatomic, strong) NSString *bundleIdentifier;
@end
