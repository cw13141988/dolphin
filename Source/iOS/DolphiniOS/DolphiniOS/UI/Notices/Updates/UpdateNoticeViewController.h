// Copyright 2020 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UpdateNoticeViewController : UIViewController

@property (nonatomic) NSDictionary* m_update_json;
@property (weak, nonatomic) IBOutlet UILabel* m_version_label;
@property (weak, nonatomic) IBOutlet UILabel* m_changes_label;
@property (weak, nonatomic) IBOutlet UILabel* m_save_states_warning_label;

@end

NS_ASSUME_NONNULL_END