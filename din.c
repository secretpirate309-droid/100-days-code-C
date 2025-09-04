#include <stdio.h>

// Write a program to find and display the sum of the first n natural numbers.


int main() 
{
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d \n", sum);
    return 0;
}


