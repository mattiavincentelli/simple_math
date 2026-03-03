/**    \file simple_math.h
       \brief a toy example of a header
       \author Mattia Vincentelli
*/
#include <math.h>




#ifndef _SIMPLEMATH_
    #define _SIMPLEMATH_
        
        typedef struct complex_n{
            float real;
            float imaginary;
        } complex;
        
        int sum(int a, int b);

        float avg(int a, int b);

        complex c_sum(complex a, complex b);
        
        complex c_avg(complex a, complex b);
#endif