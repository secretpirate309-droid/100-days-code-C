#include<stdio.h>

//Write a program to check if a number is a strong number.

int main() 
{
   
    int num;             
    int original_num;   
    int temp_num;        
    int sum_of_factorial_digits = 0; 
    int digit;           
    int i;             
    int factorial;       

   
    printf("Enter a positive integer: ");
    
   
    if (scanf("%d", &num) != 1) 
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (num <= 0) 
    {
        printf("%d is not a strong number (must be positive).\n", num);
        return 0;
    }

    
    
    original_num = num;
    temp_num = num;

    
    while (temp_num > 0) 
    {
        
        digit = temp_num % 10;
        
        
        factorial = 1;
      
        for (i = 1; i <= digit; i++) 
        {
            factorial = factorial * i;
        }
        
        
        sum_of_factorial_digits += factorial;
        
        
        temp_num = temp_num / 10;
    }

    
    if (sum_of_factorial_digits == original_num)
    {
        printf("Output: Strong number\n");
    } else 
    {
        printf("Output: Not strong number\n");
    }

    return 0;
}
