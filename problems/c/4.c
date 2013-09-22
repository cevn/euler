/**
 *
 * Euler Project, problem 4: find the largest palindromic number which is the result of 
 * a 3 digit by 3 digit multiplication. 
 *
 **/ 

#include <stdio.h> 

int palindrome(int n); 

int main(){
    int i,j,x;
    int k=0;
    int LISTSIZE = 2470; 
    int list[LISTSIZE]; 
    for (i = 100; i <= 999; i++){ 
        for (j = 100; j <= 999; j++){ 
            x = i*j; 
            if (palindrome(x)) list[k++] = x; 
        }
    } 

    for (i = 0; i < LISTSIZE; i++) printf("list[i] = %d\n",list[i]);
    int max = 0; 
    for (i = 0; i < LISTSIZE; i++)
        if (list[i] > max){
            max = list[i]; 
            j = i;
        }

    printf("max palindrome = %d\n", list[j]); 

    //if (palindrome(1001)) printf("pal = %d\n", palindrome(1001)); 

    return 0; 
}

int palindrome (int n) { 
    int copy = n;
    int reverse=0; 
    while (copy != 0) {
        reverse = reverse *10; 
        reverse += copy%10; 
        copy /= 10; 
    } 
    //printf("reverse = %d, n = %d\n",reverse,n); 
    if (reverse == n){ 
        return 1; 
    }
    return 0; 
} 
