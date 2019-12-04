//
//  Backwards.m
//  Calculator
//
//  Created by Joseph, Andrew on 12/3/19.
//  Copyright © 2019 Sutherland, Zachary. All rights reserved.
//

#include "Control.h"
#include "egasseM.h"
#import "Backwards.h"

@implementation BackController
@synthesize input, revX1, revX2, revX3, revX4;



-(void)viewDidLoad {
   [super viewDidLoad];
}

-(IBAction)Rev:(id)sender {
    const char *cInput = [input.text UTF8String];
     long inputLength = input.text.length;
     // Method 1 - Array method
     revX1.text = [NSString stringWithFormat:@"%s" , revXArray((char*)cInput, inputLength) ];
}



@end
