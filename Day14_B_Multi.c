#include<stdio.h>

//Write a program to print the product of even numbers from 1 to n.



int main()
{
    int n, p = 1, m;

    printf("Enter Digit:");
    scanf("%d", &n);

    m = n;

    n = 1;

    

    for(int i = 0; i < m; i++)
    {

        if ( n % 2 == 0 )
        {
            p = n * p;
           
            n++;
        }

        else
        {
            n++;
        }

       


    }

     

    printf("%d\n", p);



}