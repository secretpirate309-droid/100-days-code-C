#include<stdio.h>

//Write a program to calculate the factorial of a number.

int main()
{

    int n, i, m = 1;

    printf("Enter Digit:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        m = m * i;
    }

    printf("Factorial is %d\n", m);
}
