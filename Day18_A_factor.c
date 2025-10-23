#include<stdio.h>

//Write a program to print all factors of a given number.

int main()
{
    int n;          
    int i;          
   
    printf("Enter a positive integer: ");
    
    
    if (scanf("%d", &n) != 1 || n <= 0) 
    {
        printf("Invalid input. Please enter a positive integer greater than 0.\n");
        return 1;
    }

    
    printf("Factors of %d are: ", n);

    
    for (i = 1; i <= n; ++i) 
    {
        
        if (n % i == 0) 
        {
           
            printf("%d", i);
            
            
            if (i < n) 
            {
                printf(", ");
            }
        }
    }

    printf("\n"); 

    return 0;
}
