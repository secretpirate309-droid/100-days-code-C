#include<stdio.h>

//Write a program to print numbers from 1 to n.

int main()
{

    int n, i, m;

    printf("Enter Digit:");
    scanf("%d", &n);

    m = n;
    n = 0;

    

    for (i = 0; i < m;)
    {
        n = n + 1;

        printf("%d", n);
        printf("\n");

        i++;
    }
}