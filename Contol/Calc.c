//
//  calc.c
//  CalcC3
//
//  Created by Szeto, Colin on 11/1/19.
//  Copyright © 2019 Joseph, Andrew. All rights reserved.
//

#include "Calc.h"
#include <math.h>



double calc(double arg1 ,int mathOp,double arg2){
     
    int arg1sqd = arg1*arg1;
    int arg2sqd = arg2*arg2;
    
double calcAnswer = 0.0;
    
     switch(mathOp)
    {
        case PLUS:
            calcAnswer = arg1 + arg2;
            break;
        case MINUS:
            calcAnswer = arg1 - arg2;
            break;
        case DIVIDE:
            calcAnswer = arg1 / arg2;
            break;
        case MULTIPLY:
            calcAnswer = arg1 * arg2;
            break;
        case SIGNCNG:
            calcAnswer = arg1 * -1;
            break;
        case POWER2:
      
            calcAnswer=arg1*arg1;
          
            break;
            case POWER:
            calcAnswer = arg1;
            if (arg2>1) {
                 while (arg2>1)
                 {
                       calcAnswer=calcAnswer*arg1;
                     arg2--;
                 }
            }
            else if  ((arg2=0)) {
                               calcAnswer=1;
            }
                       break;
         case PYTH:
            calcAnswer = sqrt(arg1sqd + arg2sqd);
            
            break;
            case SECONDS:
            calcAnswer = (arg1);
            break;
            case MINUTES:
                    calcAnswer = (arg1/60);
                    break;
            case HOURS:
                    calcAnswer = (arg1/3600);
                    break;
            case DAYS:
                    calcAnswer = (arg1/86400);
                    break;
        case -1:
            calcAnswer = arg1;
    }
    return calcAnswer;
}


