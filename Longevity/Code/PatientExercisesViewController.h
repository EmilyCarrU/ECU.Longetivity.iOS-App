//
//  PatientExercisesViewController.h
//  longevity
//
//  Created by Robert Werner on 2014-03-19.
//  Copyright (c) 2014 ECUAD. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MPMoviePlayerController.h>

@interface PatientExercisesViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate> {
    
    UIFont *latoBold14 ;
    UIFont *latoReg14 ;
    UIFont *latoBold19 ;
    UIFont *latoReg16 ;
    UIFont *latoBold15 ;
    
    NSArray *CardioArray;
    NSArray *BalanceArray;
    NSArray *StrengthArray;
    NSArray *ExerciseTitle;
    NSArray *ExerciseDetail;
    NSArray *ExerciseRepetitions;
    NSArray *ExerciseRepetitionsClass;
    NSArray *ExerciseTimesPerDay;
    NSArray *ExerciseTimesPerDayClass;
    NSArray *ExerciseTimesPerWeek;
    NSArray *ExerciseTimesPerWeekClass;
    NSArray *ExerciseVideos;
    NSArray *ExerciseScreenCaps ;
    
    MPMoviePlayerController *moviePlayer ;
    BOOL isPlaying;
    
    
}

@property (nonatomic, retain) NSTimer *timer;

@property (weak, nonatomic) IBOutlet UITableView *tableView1;
@property (weak, nonatomic) IBOutlet UITableView *tableView2;
@property (weak, nonatomic) IBOutlet UITableView *tableView3;

@property (weak, nonatomic) IBOutlet UITextView *exerciseDescriptionLabel;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@property (weak, nonatomic) IBOutlet UILabel *repetitions;
@property (weak, nonatomic) IBOutlet UILabel *repititionsClassLabel;
@property (weak, nonatomic) IBOutlet UILabel *timesPerDayNumber;
@property (weak, nonatomic) IBOutlet UILabel *timesPerDayClass;
@property (weak, nonatomic) IBOutlet UILabel *timesPerWeekNumber;
@property (weak, nonatomic) IBOutlet UILabel *timesPerWeekClass;

@property (weak, nonatomic) IBOutlet UIImageView *ScreenCapImages;
@property (weak, nonatomic) IBOutlet UIButton *noteButton;


- (IBAction)popupAlert:(id)sender ;
- (IBAction)popupText:(id)sender ;








@end
