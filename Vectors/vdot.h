/*****************************************
 * Author: Rishabh Jain
 * Date: Oct'20
 * File: vdot.h
 * Description: Vector Dot Product
 * ***************************************/

#include <iostream>
#include <assert.h>

// Assuming Vector to be of same size
// If Vectors A and B have different sizes,
// use smaller size amongst the two

#define MIN(a, b) (a<b?a:b)

template <typename T, int S1, int S2>
T vdot (T *input1, T *input2) 
{
    assert(S1>0 && "Size should be greater than 0");
    assert(S2>0 && "Size should be greater than 0");

    assert((sizeof(input1)/sizeof(input1[0]))<=S1);
    assert((sizeof(input2)/sizeof(input2[0]))<=S2);

    const int SIZE = MIN(S1, S2);

    // Initializing local variable for Result
    int res = 0;

    VDOT: for(int iter=0; iter<SIZE; iter++) 
    {
       res += input1[iter] * input2[iter]; 
    }

    return res;
}