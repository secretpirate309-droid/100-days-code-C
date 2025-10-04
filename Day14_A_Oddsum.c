#include<stdio.h>

//Write a program to print the sum of the first n odd numbers.

int main()
{

    int n, i, m, s = 0;

    printf("Enter Digit:");
    scanf("%d", &n);

    m = n;
    n = 0;

    for (i = 0; i <= m;)
    {
        if (n % 2 != 0)
        {
            s = s + n;
            n++;
        }

        else
        {

            n++;
            i++;
        }
        

    }

    printf("%d \n", s);


}