//
//  SettingsViewController.h
//  longevity
//
//  Created by Robert Werner on 2014-04-12.
//  Copyright (c) 2014 ECUAD. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SettingsViewController : UIViewController {

    
}
@property (strong, nonatomic) IBOutlet UITapGestureRecognizer *tap;

- (IBAction)signOut:(id)sender;
- (IBAction)tapped:(id)sender;


@end
