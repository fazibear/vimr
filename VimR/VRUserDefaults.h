/**
 * Tae Won Ha — @hataewon
 *
 * http://taewon.de
 * http://qvacua.com
 *
 * See LICENSE
 */

#import <Foundation/Foundation.h>


extern NSString *const qDefaultShowHiddenInFileBrowser;
extern NSString *const qDefaultSyncWorkingDirectoryWithVimPwd;
extern NSString *const qDefaultShowFoldersFirst;
extern NSString *const qDefaultDefaultOpeningBehavior;
extern NSString *const qDefaultShowStatusBar;
extern NSString *const qDefaultShowSideBar;
extern NSString *const qDefaultShowSideBarOnRight;

extern NSString *const qOpenModeInNewTabValue;
extern NSString *const qOpenModeInCurrentTabValue;
extern NSString *const qOpenModeInVerticalSplitValue;
extern NSString *const qOpenModeInHorizontalSplitValue;

typedef enum {
  VROpenModeInNewTab,
  VROpenModeInCurrentTab,
  VROpenModeInVerticalSplit,
  VROpenModeInHorizontalSplit
} VROpenMode;

OBJC_EXTERN inline VROpenMode open_mode_from_modifier(NSUInteger modifierFlags, VROpenMode defaultMode);
OBJC_EXTERN inline VROpenMode open_mode_from_event(NSEvent *curEvent, NSString *defaultModeString);

/**
* string of VROpenMode -> index (enum)
*/
@interface VROpenModeValueTransformer : NSValueTransformer
@end
