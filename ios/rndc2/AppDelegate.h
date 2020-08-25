#import <React/RCTBridgeDelegate.h>
#import <UIKit/UIKit.h>
#import <EXDevelopmentClientController.h>
@import EXDevMenu;

@interface AppDelegate : UIResponder <UIApplicationDelegate, RCTBridgeDelegate, EXDevelopmentClientControllerDelegate, DevMenuDelegateProtocol>

@property (nonatomic, strong) UIWindow *window;

@end
