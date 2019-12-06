#include <stdio.h>
#include "Control.h"
#include "string.h"
// persistent variables used after calling functions
char rev4XBuffer[1000];
char *isPali = "Is Palindrome";
char *noPali = "Not a Palindrome";

void bufferClear(void) {
    for (int i = 0; i < 1000; i++) {
        rev4XBuffer[i] = '\0';
    }
}


char *revXArray(const char* input, long length) {
    // copy string to buffer, don't disrupt original
        bufferClear();
    strncpy(rev4XBuffer, input, length);

    // reverse char's in by array reverence
    for(long start = 0, end = length-1; start < end; start++, end--) {
        long swap = rev4XBuffer[start];
        rev4XBuffer[start] = rev4XBuffer[end];
        rev4XBuffer[end] = swap;
        
    }
    return rev4XBuffer;
}
// recursion helper, recursive loop function
void recurse(char* input, long start, long end) {
    // recursion terminates
    if (start >= end)
      
        return;
    // recursion continues

    start = end;
    recurse(input, ++start, --end);
}
// recursion reverse function
char *revXRecurse(const char* input, long length){
    // copy string to buffer, don't disrupt original
     bufferClear();
    strncpy(rev4XBuffer, input, length);
     
    // recursion control variables
    long start = 0;
    long end = length-1;
    // call recursion function
    recurse(rev4XBuffer, start, end);
    return rev4XBuffer;
}
char *revXPointer(const char* input, long length) {
    // copy string to buffer, don't disrupt original
     bufferClear();
    strncpy(rev4XBuffer, input, length);
    // initialize pointer control variables
    char *begin = rev4XBuffer;
    char *end = rev4XBuffer;
    end += length - 1;  // pointer math is simple on char as it corresponds to memory
    // reverse char's in buffer by pointer referece
    while ( begin < end ) {
        // pointer address increment/decrement
        begin++;
        end--;
    }
    return rev4XBuffer;
}
// pali evaluation
// char *paliEval(const char* input, long length) {
    // call function above to reverse string
    // char *reverse = revXArray(input, length);
    // compare for equality, return message
    // return 1 ? isPali : noPali;
