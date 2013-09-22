/** 
 * Problem 13
 * find the first 10 digits of the sum of 100 50 digit numbers. 
 **/

#include <stdio.h> 
#include <gmp.h> 

int main() {
    FILE *fp;
    fp = fopen("13.txt", "r");  

    char array[100][51];  

    printf("line 1\n"); 
    int i; 
    for (i = 0; i < 100; i++) { 
        if (fscanf(fp, "%s\n", &array[i][0])) continue; 
    }



    mpz_t sum; 
    mpz_init(sum); 

    for (i = 0; i < 100; i++) {
        mpz_t thing; 
        mpz_set_str(thing, array[i], 10); 
        mpz_add(sum, sum, thing); 
    } 

    gmp_printf("sum = %Zd\n", sum); 

    return 0; 
} 
