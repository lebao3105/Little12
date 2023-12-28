#import <UIKit/UIKit.h>
#define CGRectSetY(rect, y) CGRectMake(rect.origin.x, y, rect.size.width, rect.size.height)

/*
    SpringBoard hooks
*/

@interface CSQuickActionsView : UIView
- (UIEdgeInsets)_buttonOutsets;
@property (nonatomic, retain) UIControl *flashlightButton;
@property (nonatomic, retain) UIControl *cameraButton;
@end

@interface CSFullscreenNotificationView : UIView
@end

@interface CSTeachableMomentsContainerView : UIView
@property (retain, nonatomic) UIView *controlCenterGrabberView;
@property (retain, nonatomic) UIView *controlCenterGrabberEffectContainerView;
@property (retain, nonatomic) UIImageView *controlCenterGlyphView;
@end

@interface _UIRootWindow : UIView
@property (setter=_setContinuousCornerRadius:, nonatomic) double _continuousCornerRadius;
@end

@interface SBDashBoardMesaUnlockBehaviorConfiguration : NSObject
- (BOOL)_isAccessibilityRestingUnlockPreferenceEnabled;
@end

@interface SBDashBoardBiometricUnlockController : NSObject
@end

@interface SBLockScreenController : NSObject
+ (id)sharedInstance;
- (BOOL)_finishUIUnlockFromSource:(int)arg1 withOptions:(id)arg2;
@end

@interface WGWidgetGroupViewController : UIViewController
@end

/*
    Private UIScreen hook
*/

@interface UIScreen (Private)
@property (atomic, assign, readonly) NSInteger screenSizeCategory;
@end