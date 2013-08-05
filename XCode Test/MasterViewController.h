//
//  MasterViewController.h
//  XCode Test
//
//  Created by Grafika on 8/5/13.
//  Copyright (c) 2013 Grafika. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
