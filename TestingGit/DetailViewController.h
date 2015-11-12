//
//  DetailViewController.h
//  TestingGit
//
//  Created by Mac1 on 12/11/2015.
//  Copyright © 2015 Self. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

