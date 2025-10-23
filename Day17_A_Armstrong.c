#include<stdio.h>

//Write a program to check if a number is an Armstrong number.


int main() 
{
    int n;          
    int original_n; 
    int temp_n;     
    int count = 0; 
    int remainder;  
    int result = 0; 
    int power;      
    int i;          

    
    printf("Enter a positive integer: ");
   
    if (scanf("%d", &n) != 1 || n < 0) 
    {
        printf("Invalid input.\n");
        return 1;
    }

    original_n = n;
    
   
    temp_n = original_n;
    while (temp_n != 0)
    {
        temp_n /= 10; 
        ++count;      
    }

    
    temp_n = original_n; 
    
    while (temp_n != 0) 
    {
        remainder = temp_n % 10; 

        
        power = 1;
        for (i = 0; i < count; ++i) 
        {

            power *= remainder;
        }

     
        result += power;

        
        temp_n /= 10;
    }

    
    if (result == original_n) 
    {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}


