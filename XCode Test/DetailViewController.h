//
//  DetailViewController.h
//  XCode Test
//
//  Created by Grafika on 8/5/13.
//  Copyright (c) 2013 Grafika. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
