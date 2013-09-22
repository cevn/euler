/**
 * Euler Project, Problem 2. 
 * Find the sum of the even terms of the fibonacci sequence up until 4 million. 
 * **/ 

#include <stdio.h> 

int isEven(int n); 
int fib1(int n); 
int fib2(int n); 

int main(){
    int sum = 0; 
    int i; 
    for (i = 0; i < 1000; i++) {
        if (isEven(fib1(i))) sum += fib1(i); 
        printf("fib: %d\n",fib1(i)); 
        printf("sum: %d\n",sum); 
        if (fib1(i) > 4000000) break; 
    }

    return 0; 
}

int isEven(int n){
    if (n%2 == 0) return 1; 
    else return 0;
}

int fib1(int n){ 
    int a_2; 
    int a_1; 
    int result; 

    if (n < 1) return 1;
    if (n == 1 || n == 2) return 1; 
    else {
    
        a_2 = 1; 
        a_1 = 1; 
        result = a_2 + a_1; 
        int i = 0;

        for (i = n-3; i < n; i++ ) {
            a_2 = a_1; 
            a_1 = result; 
            result = a_1 + a_2; 
        }

        return result; 
    }
}

int fib2(int n){ 
    if (n < 1) return 0; 
    if (n == 1) return 1; 
    else return (fib2(n-1)+fib2(n-2));
}
