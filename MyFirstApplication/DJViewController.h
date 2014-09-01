//
//  DJViewController.h
//  MyFirstApplication
//
//  Created by David Johnson on 9/1/14.
//  Copyright (c) 2014 David Johnson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DJViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@property (strong, nonatomic) IBOutlet UITextField *textField;

- (IBAction)buttonPressed:(UIButton *)sender;

@end
