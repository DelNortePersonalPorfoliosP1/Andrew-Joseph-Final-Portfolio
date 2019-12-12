//
//  PigLatin.c
//  Calculator
//
//  Created by Joseph, Andrew on 12/11/19.
//  Copyright © 2019 Sutherland, Zachary. All rights reserved.
//
#include <stdio.h>
#include "Control.h"
#include "string.h"
char pigBuffer[1000];

 struct holder {
     char phrase[1000];
     char words[1000];
};


void bufferClear(void) {
    for (int i = 0; i < 1000; i++) {
        pigBuffer[i] = '\0';
    }
}


char *piglatin(const char* input, long length) {
    bufferClear();
    strncpy(pigBuffer, input, length);
    
     const char *space = " ";
           char *token;
           token = strtok(pigBuffer, space);   // 1st token   // 1st token
        while( token != NULL )
        {
            strcpy( " %s\n", token );
            token = strtok(NULL, space); }
    
    
    return pigBuffer;
}
