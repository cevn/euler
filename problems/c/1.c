#include <stdio.h> 

/* Program to solve problem 1 of the Euler Project. 
 *
 * Find the sum of all the multiples of 3 or 5 below 1000. */

int divisible(int n) {
    return ((n%3==0)||(n%5==0));
} 

int main() {
    int sum = 0;
    int i; 
    for (i = 0; i < 1000; i++) {
       if (divisible(i)) 
           sum += i; 
    }
    printf("Sum = %d\n" ,sum); 
    return 0; 

}

