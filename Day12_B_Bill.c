#include<stdio.h>

//Write a program to calculate electricity bill based on units consumed with these rates: 


int main()
{
    int n, p, q, r, s;

    printf("Enter Units :");
    scanf("%d", &n);

    p = n * 5;


    q = n * 7;


    r = n * 10;


    s = n * 12;

    int i = 1;


    

    while(i)
    {
        if ( n <= 100)
        {
            printf("Bill is : %d \n", p);
        }

        if ( n > 100 && n <= 200 )
        {
            q = q + p;

            printf("Bill is : %d \n", q);
        }

        if ( n > 200 && n <= 300 )
        {
            r = r + p + q;

            printf("Bill is : %d \n", r);

        }

        if ( n > 300 )
        {


            s = s + p + q + r;


            printf("Bill is : %d \n", s);


        }

         
        

        i--;


    }
}