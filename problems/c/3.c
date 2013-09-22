/** Euler Project, Problem 3. 
 *Find the largest prime factor of a number.
 * 
 * Currently, this number is 600851475143.  
 **/ 

 
#include <stdio.h> 
#include <math.h> 
#include <stdlib.h> 

int prime(long n); 

int main(){
    long NUMBER = 600851475143; 
    long i; 

    for (i = sqrt(NUMBER); i > 1; i--){
        if (NUMBER%i == 0) {
            printf("i = %ld\n", i);
            if (prime(i)) break; 
        }  
    }

    printf("The largest prime factor in %ld is %ld.\n",NUMBER,i); 

    return 0;
} 

/**
 * find the number of factors for n .
 **/ 
int prime (long n){ 
    int i; 
    for (i = 2; i < sqrt(n); i++) {
        if (n%i==0) return 0; 
    } 
    return 1; 
} 
