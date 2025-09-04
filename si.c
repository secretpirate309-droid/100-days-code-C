#include<stdio.h>

// Write a program to calculate simple and compound interest for given principal, rate, and time.


int main()
{
    int p , r, t;

    printf("Enter Your Principal Amount, Annual Interest, Time Period \n" );

    scanf("%d", &p);
    scanf("%d", &r);
    scanf("%d", &t);

    int s = (p*r*t)/100;

    int c = p*(1 + r/100)^t-p;

    printf("simple intrest is %d \n", s);
    printf("compound intrest is %d \n", c);

    return 0;
    

}