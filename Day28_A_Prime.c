#include<stdio.h>
#include<math.h>

//Write a program to print all the prime numbers from 1 to n.



int main() {
    
    
    int n;       
    int i;        
    int j;        
    int is_prime; 

    
    printf("Enter the upper limit (n): ");
    
    
    if (scanf("%d", &n) != 1 || n < 2) 
    {
        printf("Invalid input. Please enter a positive integer greater than 1.\n");
        return 1; 
    }

    printf("\nPrime numbers from 1 to %d:\n\n", n);

    
    for (i = 2; i <= n; i++) 
    {
        is_prime = 1; 
        
        for (j = 2; j <= i / 2; j++) 
        {
            
            if (i % j == 0) 
            {
                is_prime = 0;
                break;       
            }
        }
        
       
        if (is_prime == 1) 
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
