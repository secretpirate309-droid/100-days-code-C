#include<stdio.h>

//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

int main() 
{
    
    int n;          
    int i;          
    double sum = 0.0;

    
    printf("Enter the number of terms (n): ");
    
   
    if (scanf("%d", &n) != 1 || n <= 0) 
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    
    for (i = 1; i <= n; i++) {
        
        

       
        
        int numerator = 2 * i - 1;
        
        if (i == 1) 
        {
            
            
            sum += 1.0;
        }
         else 
        {
           
            
            int denominator = 2 * i;
            
           
            sum += (double)numerator / denominator;
        }
    }

   
    printf("Output: Approximate sum: %.1f\n", sum);

    return 0;
}
