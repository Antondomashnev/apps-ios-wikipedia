//
//  DataMigrationProgress.h
//  Wikipedia
//
//  Created by Brion on 1/13/15.
//  Copyright (c) 2015 Wikimedia Foundation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>

@class DataMigrationProgressViewController;
@class WMFProgressLineView;

@protocol DataMigrationProgressDelegate
- (void)dataMigrationProgressComplete:(DataMigrationProgressViewController*)viewController;
@end


@interface DataMigrationProgressViewController : UIViewController <UIActionSheetDelegate, MFMailComposeViewControllerDelegate>

@property (weak, nonatomic) IBOutlet WMFProgressLineView* progressIndicator;
@property (weak, nonatomic) IBOutlet UILabel* progressLabel;
@property (weak, nonatomic) id<DataMigrationProgressDelegate> delegate;

// TODO: refactor these into class methods
+ (BOOL)needsMigration;
+ (void)removeOldData;

@end
