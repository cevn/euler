/**
 * Problem 14
 * find the longest chain with a startnig number under 1 million.
 **/ 

#include <stdio.h> 

unsigned int next_collatz(unsigned int n); 

int main() {
    int lookup[1000000] = {0} ; 
    unsigned int longest_chain = 0; 
    unsigned int chain = 0; 
    unsigned int i,n,position; 

    for(i = 1; i < 1000000; i++) {
        chain = 0; 
        n = i; 
        while (n != 1) { 
            //printf("n = %d, i = %d\n",n,i); 
            ++chain; 
            n = next_collatz(n); 
            if (n >= 1000000) continue; 

            if (lookup[n] != 0) {
                chain += lookup[n]; 
                break ; 
            }
        } 

            lookup[i] = chain; 
            if (chain > longest_chain){
                position = i; 
                longest_chain = chain; 
            }
        }

    printf("longest chain = %d at position %d\n",longest_chain,position); 
    return 0; 
}

unsigned int next_collatz(unsigned int n) { 

    if (n % 2 == 0) n /= 2; 
    else n = 3*n+1; 

    return n ;
} 
