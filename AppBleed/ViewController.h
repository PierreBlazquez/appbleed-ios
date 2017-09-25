//
//  ViewController.h
//  AppBleed
//
//  Created by Pierre BLAZQUEZ on 13/02/2017.
//  Copyright © 2017 Pierre BLAZQUEZ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <dlfcn.h>

#import "PBLMobileCoreServicesHelper.h"

#import "AppTableViewCell.h"

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    PBLMobileCoreServicesHelper *mcsHelper;
}

@property (strong, atomic) NSArray *installedApps;

@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (weak, nonatomic) IBOutlet UILabel *lblInfo;

@end

