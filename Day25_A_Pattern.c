#include<stdio.h>

// Write a program to print the following pattern:

/*
5
45
345
2345
12345

*/

int main()
{
    int n = 5, i, j;
    for(i = 1; i <= n; i++)
    {
        for(j = n - i + 1; j <= n; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}