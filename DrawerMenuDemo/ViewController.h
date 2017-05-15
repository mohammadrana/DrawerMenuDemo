//
//  ViewController.h
//  DrawerMenuDemo
//
//  Created by Rana on 6/15/16.
//  Copyright © 2016 Rana. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CCKFNavDrawer.h"

@interface ViewController : UIViewController<CCKFNavDrawerDelegate>

@property (strong, nonatomic) CCKFNavDrawer *rootNav;

- (IBAction)manuAction:(id)sender;

@end

