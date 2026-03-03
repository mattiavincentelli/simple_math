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


 complex c_sum(complex a, complex b){
    complex c;
    c.real = a.real + b.real;
    c.imaginary = a.imaginary + b.imaginary;
    return c;
 }

 complex c_avg(complex a, complex b){
    complex sum = c_sum(a, b);
    sum.real /= 2;
    sum.imaginary /= 2;
    return sum;
 }