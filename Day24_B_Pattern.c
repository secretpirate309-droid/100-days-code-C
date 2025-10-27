#include<stdio.h>

//Q48: Write a program to print the following pattern:


/*

1
12
123
1234
12345

*/

int main()
{
    int n = 5, i, j;

    for (i = 1; i <= n; i++ )
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}