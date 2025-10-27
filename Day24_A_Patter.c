#include<stdio.h>

// Write a program to print the following pattern:

/*

*
**
***
****
*****

*/


int main()
{
    int n = 5, i, j;

    for (i = 1; i <= n; i++ )
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        
        }
        printf("\n");
    }
}