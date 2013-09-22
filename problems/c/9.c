/** 
 * Problem 9: find pythagorean triplet for which a + b + c = 1000 and its product. 
 **/ 

#include <stdio.h> 

int main() { 
    int a,b,c; 
    
    for(a = 2; a < 1000; a++) {
        for(b = a+1; b < 1000; b++) {
            for(c = 2; c < 1000; c++) {
                if (( a*a + b*b == c*c) && ((a + b + c) == 1000)) printf("abc = %d\n", a*b*c);
            } 
        }
    }

    return 0; 
} 
