/**
 * Problem 10:
 * Find the sum of all the primes below two million. 
 **/ 

#include <stdio.h> 
#include <gmp.h> 

int main() {
    MP_INT prime; 
    mpz_init_set_ui(&prime,0); 

    long sum=0,i;

    for (i = 0; i < 2000000; i++) {
        if (mpz_probab_prime_p(&prime,5)) {
            long prime2 = mpz_get_ui(&prime);
            sum += (prime2); 
        } 
        
        mpz_set_ui(&prime,i); 
    } 
        printf("sum = %ld\n", sum); 

    return 0; 
} 
