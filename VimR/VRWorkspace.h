/**
 * Tae Won Ha — @hataewon
 *
 * http://taewon.de
 * http://qvacua.com
 *
 * See LICENSE
 */

#import <Cocoa/Cocoa.h>


@class VRMainWindowController;
@class MMVimController;
@class VRFileItemManager;
@class VROpenQuicklyWindowController;


@interface VRWorkspace : NSObject

@property VRFileItemManager *fileItemManager;
@property VROpenQuicklyWindowController *openQuicklyWindowController;
@property VRMainWindowController *mainWindowController;
@property NSURL *workingDirectory;

#pragma mark Public
- (void)setUpWithVimController:(MMVimController *)vimController;
- (void)cleanUpAndClose;

@end
