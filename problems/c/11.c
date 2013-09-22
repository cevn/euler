/**
 * Problem 11: 
 * Greatest product of four adjacent numbers in a grid. 
 **/ 

#include <stdio.h> 

int isInBounds(int * ptr); 

int main() { 
    FILE *fp;
    fp = fopen("11.txt", "r");  
    int the_grid[20][20]; 
    int max = 0; 

    int ROWS = 20; 
    int COLS = 20; 


    int i, j, x, y; 
    int a, b, c, d, product;

    for (i = 0; i < ROWS; i++) { 
        for (j = 0; j < COLS-1; j++) { 
            if(fscanf(fp, "%i", &the_grid[i][j])){}; 
        }
        if(fscanf(fp, "%d\n", &the_grid[i][j])){}; 
    }

    i = 0; 
    j = 0;

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            for (x = -1; x <= 1; x++) { 
                for (y = -1; y <= 1; y++) { 
                    if ((x || y) == 0) continue; 
                    int * ptr1 = &the_grid[i][j]; 
                    int * ptr2 = &the_grid[i+x][j+y]; 
                    int * ptr3 = &the_grid[i+x*2][j+y*2]; 
                    int * ptr4 = &the_grid[i+x*3][j+y*3]; 
                    
                    a = (ptr1 != NULL && isInBounds(ptr1)) ? *ptr1 : 0; 
                    b = (ptr2 != NULL && isInBounds(ptr2)) ? *ptr2 : 0; 
                    c = (ptr3 != NULL && isInBounds(ptr3)) ? *ptr3 : 0; 
                    d = (ptr4 != NULL && isInBounds(ptr4)) ? *ptr4 : 0; 

                    product = a*b*c*d; 
                    if (product > max) max = product; 
                }
            }
        }
    }

    printf("max = %d\n",max); 
    return 0; 
}

int isInBounds (int * ptr) { 
    return (*ptr < 100 && *ptr > 0); 
}
