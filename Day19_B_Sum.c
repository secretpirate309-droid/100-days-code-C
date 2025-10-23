#include<stdio.h>

//Q38: Write a program to find the sum of digits of a number.


int main()
{
    int n,s = 0, r, t;

    printf("Enter Digit:");
    scanf("%d", &n);


    t = n;


    while (n)
    {

        r = t % 10;

        s = s + r;

        n = n / 10;
    }


    printf("Sum is :%d \n", s);
}