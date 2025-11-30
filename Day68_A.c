#include<stdio.h>

//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

int findMissingNumber(const int arr[], int array_size) 
{
    
    int max_value = array_size; 
    
  
    long long expected_sum = (long long)max_value * (max_value + 1) / 2;

   
    long long actual_sum = 0;
    for (int i = 0; i < array_size; i++) 
    {
        actual_sum += arr[i];
    }

   
    return (int)(expected_sum - actual_sum);
}


int main() 
{
    int n; 
    int i; 

    
    printf("The problem states that the array size 'n' determines the range [0, n].\n");
    printf("Enter the size of the input array (n): ");
    
  
    if (scanf("%d", &n) != 1 || n <= 0) 
    {
        printf("Invalid size entered. Size must be a positive integer. Exiting.\n");
        return 1;
    }
    
   
    printf("\nExpected range of numbers is [0, %d]. Please enter the %d present numbers.\n", n, n);

   
    int arr[n];
    printf("Enter %d elements for the array (integers between 0 and %d):\n", n, n);
    for (i = 0; i < n; i++) 
    {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) 
        {
            printf("Invalid input. Exiting.\n");
            return 1;
        }
    }

   
    int missing_num = findMissingNumber(arr, n);

    printf("\nAnalysis Complete:\n");
    printf("The single missing number from the range [0, %d] is: %d\n", n, missing_num);

    return 0;
}