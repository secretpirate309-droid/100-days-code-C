#include<stdio.h>

//Write a program to check if a number is prime.


int main() {
    int n;          
    int i;          
    int is_prime = 1; 
   
    printf("Enter a positive integer: ");
    
    if (scanf("%d", &n) != 1 || n < 1) 
    {
        printf("Invalid input or number must be positive.\n");
        return 1;
    }

   
    if (n <= 1)
    {
        is_prime = 0; 
    } 
    
    else 
    {
       
        for (i = 2; i * i <= n; ++i) 
        {
            if (n % i == 0) 
            {
                
                is_prime = 0;
                break; 
            }
        }
    }

    if (is_prime == 1)
    {
        printf("Prime\n");
    } else 
    {
        printf("Not Prime\n");
    }

    return 0;
}
