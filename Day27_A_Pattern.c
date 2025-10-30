#include<stdio.h>


//Q52: Write a program to print the following pattern:

/*

*
**
***
****
*****
******
*******
********
*******
******
*****
****
***
**
*


*/




int main()
{
    int n = 15 , i, j;

    for (i = 1; i <= n; i++)
    {
        if (i <= n / 2)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (j = n - i + 1; j >= 1; j--)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}