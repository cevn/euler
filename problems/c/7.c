/** 
 * Problem 7: find the 10,001st prime
 *
 **/ 




#include <gmp.h> 
#include <stdio.h> 
#include <math.h> 



int prime(); 
int main(){ 
    long i ;
    MP_INT k; 
    MP_INT j; 

    mpz_init_set_ui(&k,2); 
    mpz_init(&j); 
    for (i = 1; i <= 10001;) {
        if (mpz_probab_prime_p(&j,.25)) {
            i += 1; 
            mpz_add(&j, &j, &k); 
        }
        else  mpz_add(&j, &j, &k); 
    }


    gmp_printf("10001st prime = %Zd",j); 
    
    return 0; 
} 
