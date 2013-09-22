/** 
 * Problem 8
 * Find the largest product of 5 consecutive numbers in a 1000 digit number.
 **/ 

#include <fcntl.h> 
#include <stdio.h> 
#include <stdlib.h> 

int comp(); 

int main(){
    FILE *fp;
    fp = fopen("8.txt", "r");  
    char NUMBER[1000]; 
    int productlist[1000] = { 0 }; 

    if (fscanf(fp, "%s", NUMBER)){}; 

    int a,b,c,d,e,product; 
    int i; 
    int charconst = (int)'0'; 

    for (i = 0; i < 996; i++) {
        a = (int)NUMBER[i]  -charconst; 
        b = (int)NUMBER[i+1]-charconst; 
        c = (int)NUMBER[i+2]-charconst; 
        d = (int)NUMBER[i+3]-charconst; 
        e = (int)NUMBER[i+4]-charconst; 

        if (a == 0) i += 9; 
        else if (b == 0) i += 8; 
        else if (c == 0) i += 7; 
        else if (d == 0) i += 6; 
        else if (e == 0) i += 5; 

        else { 
            product = a*b*c*d*e; 
            productlist[i] = product; 
        }
    //    printf ("a = %d, b = %d, c = %d, d = %d, e = %d\n", a, b, c, d, e); 
    } 

    qsort(productlist, sizeof(productlist)/sizeof(*productlist), sizeof(*productlist), comp);  

    printf("answer = %d\n", productlist[999]);

    fclose(fp); 

    return 0;
} 

int comp (const void * elem1, const void * elem2) {
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}
