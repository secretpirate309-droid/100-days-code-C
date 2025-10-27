#include<stdio.h>

//Write a program to print the following pattern:


/*

*****
 ****
  ***
   **
    *

*/


int main()
{
    int n = 5, i , j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j>=i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}