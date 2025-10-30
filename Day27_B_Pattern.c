#include <stdio.h>

//Q54: Write a program to print the following pattern:

/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/

int main() {
    
    
    int N = 4; 
    int i; 
    int j; 

    printf("Output:\n");

   
    for (i = 1; i <= N; i++) 
    {
        
        
        for (j = 1; j <= N - i; j++)
        {
            printf(" ");
        }
        
        
        int star_count = 2 * i - 1;
        for (j = 1; j <= star_count; j++) 
        {
            printf("*");
        }
        
        
        printf("\n"); 
    }

    
    for (i = 1; i <= N - 1; i++) 
    {
        
        
        for (j = 1; j <= i; j++) 
        {
            printf(" ");
        }
       
        int star_count = (2 * N - 1) - (2 * i);
        
       
        for (j = 1; j <= star_count; j++) 
        {
            printf("*");
        }
        
        
        printf("\n");
    }

    return 0;
}
