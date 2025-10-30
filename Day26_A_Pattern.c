#include<stdio.h>

//Write a program to print the following pattern:
   

/*

    5
   45
  345
 2345
12345

*/

int main()
{
    
    
    
    
    int N = 5; 
    int i; 
    int j;
    int k;  

    printf("Output 1:\n");


    for (i = 1; i <= N; i++) 
    {
        
        for (j = 1; j <= N - i; j++) 
    {
            printf(" ");
        }
        
        
        int start_digit = N - i + 1;
        for (k = start_digit; k <= N; k++) 
        {
            printf("%d", k);
        }
        
        
        printf("\n");
    }

    return 0;
}

