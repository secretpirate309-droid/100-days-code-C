#include<stdio.h>

//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

int main() 
{
    int n, i;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) 
    {
        float numerator = 2 * i;
        float denominator = (4 * i) - 1;
        sum += numerator / denominator;
    }

    printf("The sum of the series up to %d terms is: %.2f\n", n, sum);
    return 0;
}