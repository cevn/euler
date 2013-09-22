/**
 * Problem 12
 * Find the first triangle number to have over 500 divisors. 
 **/ 

#include <math.h> 
#include <stdio.h> 

long factors(); 
long triangle(); 

int main() { 
    long i = 1; 

    while (factors(triangle(i)) < 600) {
        //printf("triangle(%ld) = %ld, factors(triangle(%ld) = %ld\n", i, triangle(i), i, factors(triangle(i))); 

        if (factors(triangle(i)) > 500) break; 
        i++;
    }  

        printf("triangle(%ld) = %ld, factors(triangle(%ld) = %ld\n", i, triangle(i), i, factors(triangle(i))); 
        return 0;
} 

long factors(long n){ 
    int i; 
    long sum2 = 0; 

    for (i = 1; i < sqrt(n); i++) {
        if (n%i==0) sum2++; 
    } 
    return sum2*2; 
} 

long triangle(long n) {
    long i, sum = 0; 
    for (i = 0; i <= n; i++){
        sum += i;  
    } 
    return sum; 
} 
