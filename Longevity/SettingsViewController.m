//
//  SettingsViewController.m
//  longevity
//
//  Created by Robert Werner on 2014-04-12.
//  Copyright (c) 2014 ECUAD. All rights reserved.
//

#import "SettingsViewController.h"

@interface SettingsViewController ()

@end

@implementation SettingsViewController

-(UIStatusBarStyle)preferredStatusBarStyle{
    return UIStatusBarStyleLightContent;
}






- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    
    
}


- (IBAction)popupOnboarding:(id)sender {
    UIAlertView *alert = [[UIAlertView alloc]
                          initWithTitle:@"Exercise Prescription"
                          message:@"Have you completed your exercise prescription. Click Ok to release for use."
                          delegate:self
                          cancelButtonTitle:@"Cancel"
                          otherButtonTitles:@"Ok", nil] ;
    
    [alert show] ;
    
}



- (IBAction)signOut:(id)sender {
    
    // PopUp
    
    
}

- (IBAction)tapped:(id)sender {
    NSLog(@"tapped");
}


@end
