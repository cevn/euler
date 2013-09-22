/** 
 *
 * Find difference between sum of squares of first 100
 * natural numbers and square of sum. 
 *
 **/ 

#include <stdio.h> 

int main(){ 

    int i; 
    int squaresum = 0; 
    int sumsquare = 0; 
    int sum = 0; 

    for (i = 1; i <= 100; i++) squaresum += i*i; 

    for (i = 1; i <= 100; i++) sum += i; 

    sumsquare = sum*sum; 

    printf("answer = %d\n", sumsquare-squaresum); 

    return 0; 
} 
