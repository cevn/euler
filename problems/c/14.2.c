/**
 * Problem 14
 * find the longest chain with a startnig number under 1 million.
 **/ 

#include <stdio.h> 

unsigned int next_collatz(unsigned int n); 
unsigned int collatz_number(unsigned int n); 
unsigned int LIMIT = 1000000;

int main() {
    unsigned int i;

    for(i = 1; i < LIMIT; i++) {
        if (collatz_number(i) > 500) printf("chain = %d, number = %d\n", collatz_number(i), i); 
    }

    return 0;
//printf("longest chain = %d at position %d\n",longest_chain,position); 
}

unsigned int next_collatz(unsigned int n) { 
    if (n % 2 == 0) n /= 2; 
    else n = 3*n+1; 

    return n ;
} 

unsigned int collatz_number(unsigned int n) { 
    //static unsigned int lookup[1000000] = {0} ; 
    unsigned int c = 1; 
    while (n != 1) {
//        if (lookup[n] != 0) {
          //  c += lookup[n];
//            break; 
 //       }

        while ((n&1)==1){
           // lookup[n] = c;
            n=(3*n+1)/2;
            c+=2; 
        }
        while ((n&1)==0) {
            //lookup[n] = c; 
            n /=2;
            c++; 
        }
    }

    return c; 
} 
