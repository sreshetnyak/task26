//
//  TTViewController.h
//  Controls
//
//  Created by sergey on 3/30/14.
//  Copyright (c) 2014 sergey. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TTViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIView *canvas;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (strong,nonatomic) NSMutableArray *switchState;
@property (weak, nonatomic) IBOutlet UISlider *slider;
- (IBAction)imageSwitcher:(id)sender;
- (IBAction)speedSlider:(id)sender;
- (IBAction)animationSwitcher:(id)sender;

@end
