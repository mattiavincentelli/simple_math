/**    \file simple_math.h
       \brief a toy example of
       \author Mattia Vincentelli
*/


#include "simple_math.h"
#include <stdio.h>
 
int sum(int a, int b){
    return a + b;
 }

float avg(int a, int b){
    return (float)(sum(a, b))/2;
 }

 