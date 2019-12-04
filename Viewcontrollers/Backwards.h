//
//  Backwards.h
//  Calculator
//
//  Created by Joseph, Andrew on 12/3/19.
//  Copyright © 2019 Sutherland, Zachary. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BackController : UIViewController
{
 
}


// revx4 prototypes saved incase something happens
//char *revXArray(char* input, long length);
char *revXRecurse(char* input, long length);
char *revXPointer(char* input, long length);
char *paliEval(char* input, long length);




@property (strong, nonatomic) IBOutlet UITextField *input;
@property (strong, nonatomic) IBOutlet UILabel *revX1;
@property (strong, nonatomic) IBOutlet UILabel *revX2;
@property (strong, nonatomic) IBOutlet UILabel *revX3;
@property (strong, nonatomic) IBOutlet UILabel *revX4;

@end 
