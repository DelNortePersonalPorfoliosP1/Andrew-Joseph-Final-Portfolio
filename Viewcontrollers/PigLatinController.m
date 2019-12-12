//
//  PigLatinController.m
//  Calculator
//
//  Created by Joseph, Andrew on 12/11/19.
//  Copyright © 2019 Sutherland, Zachary. All rights reserved.
//
#include "Control.h"
#include "egasseM.h"
#import "PigLatinController.h"

@implementation PigLatinController
@synthesize Latin, input;


-(void)viewDidLoad {
   [super viewDidLoad];
}


-(IBAction)Pig:(id)sender {
    
    
    const char *cInput = [input.text UTF8String];
        long Length = input.text.length;
     Latin.text = [NSString stringWithFormat:@"%s" , piglatin((char*)cInput, Length) ];
    
    
}


@end
