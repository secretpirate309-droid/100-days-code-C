#include<stdio.h>

//Write a program to check if a number is a perfect number.



int main() 
{
    
    int num;
    int i;
    int sum_of_divisors = 0;

    
    printf("Enter a positive integer: ");
    
   
    if (scanf("%d", &num) != 1) 
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    
    if (num <= 0) 
    {
        printf("%d is not a perfect number (must be positive).\n", num);
        return 0;
    }

    
    
    for (i = 1; i <= num / 2; i++) 
    {
        
        if (num % i == 0) 
        {
            
            sum_of_divisors += i;
        }
    }

   
    if (sum_of_divisors == num) 
    {
        printf("Output: Perfect number\n");
    } else 
    {

        printf("Output: Not perfect number\n");
    }

    return 0;
}
