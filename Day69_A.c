#include<stdio.h>

//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.


int main() 
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (numbers from 1 to n-1 with one repetition): ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int xorArr = 0;
    int xorRange = 0;
    for (int i = 0; i < n; i++) 
    {
        xorArr ^= arr[i];
    }
    
    for (int i = 1; i <= n - 1; i++) 
    {
        xorRange ^= i;
    }
    int repeated = xorArr ^ xorRange;

    printf("Repeated element: %d\n", repeated);

    return 0;
}