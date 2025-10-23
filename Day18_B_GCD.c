#include<stdio.h>



// Write a program to find the HCF (GCD) of two numbers.




int main()
{
    int num1, num2;

   
    if (scanf("%d %d", &num1, &num2) != 2)
    {
        
        return 1;
    }

    
    while (num1 != num2) 
    {
        
       
        if (num1 > num2) 
        {
            num1 = num1 - num2;
        } 
        else 
        {
            num2 = num2 - num1;
        }
    }

    
    printf("HCF is: %d\n", num1);
    return 0;
}
