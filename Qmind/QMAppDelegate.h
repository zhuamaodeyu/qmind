/**
 * Tae Won Ha
 * http://qvacua.com
 * https://github.com/qvacua
 *
 * See LICENSE
 */

#import <Cocoa/Cocoa.h>

/**
* The NSApp delegate.
*
* @implements NSApplicationDelegate
*/
@interface QMAppDelegate : NSObject <NSApplicationDelegate>

@property (weak) IBOutlet NSMenuItem *insertNewChildNodeMenuItem;
@property (weak) IBOutlet NSMenuItem *insertNewLeftChildNodeMenuItem;
@property (weak) IBOutlet NSButton *automaticUpdateCheckbox;
@property (weak) IBOutlet NSTextField *lastCheckedLabel;
@property (unsafe_unretained) IBOutlet NSWindow *preferencesWindow;

@property NSUserDefaults *userDefaults;
@property NSBundle *mainBundle;
@property NSDocumentController *documentController;

- (IBAction)toggleAutomaticUpdateCheck:(id)sender;
- (IBAction)checkForUpdateNow:(id)sender;
- (IBAction)showPreferencesWindow:(id)sender;

@end
