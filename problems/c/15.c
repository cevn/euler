/** 
 * Euler Project, probelm 15: lattice paths 
 **/ 

#include<stdio.h> 

unsigned long long factorial(); 

int main() { 
    unsigned long long n = 20; 
    long long result = factorial(2*n)/factorial(n); 
    printf("result = %lld\n", result); 

    return 0; 
} 

unsigned long long factorial(long long n) { 
    int i; 
    for (i = n-1; i > 0; i--) {
        printf("i = %d, n = %lld\n",i,n); 
        n *= i;
    } 
    return n; 
}
