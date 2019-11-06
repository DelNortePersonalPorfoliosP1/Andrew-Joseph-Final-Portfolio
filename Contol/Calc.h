//
//  Calc.h
//  Calculator
//
//  Created by Joseph, Andrew on 11/6/19.
//  Copyright © 2019 Sutherland, Zachary. All rights reserved.
//

#ifndef calc_h
#define calc_h

#define PLUS 0
#define MINUS 1
#define MULTIPLY 2
#define DIVIDE 3
#define MODULO 4
#define SIGNCNG 5
#define POWER2 6
#define POWER 7
#define PYTH 8


#include <stdio.h>
double calc(double arg1 ,int mathOp,double arg2, int arg1sqd, int arg2sqd);
#endif /* calc_h */
