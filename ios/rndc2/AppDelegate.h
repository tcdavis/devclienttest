#import <React/RCTBridgeDelegate.h>
#import <UIKit/UIKit.h>
@import EXDevMenu;

@interface AppDelegate : UIResponder <UIApplicationDelegate, RCTBridgeDelegate, DevMenuDelegateProtocol>

@property (nonatomic, strong) UIWindow *window;

@end
