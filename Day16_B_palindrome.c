#include<stdio.h>

//Write a program to check if a number is a palindrome.

int main()
{
    int n, r, s = 0, t;
    printf("Enter Digit To Check:");
    scanf("%d", &n);

    t = n;

    while (t)
    {
        r = t % 10;
        
        s = (s * 10) + r;

        t = t / 10;

    }

    if ( s == n )
    {
        printf("Palindrome \n");
    }

    else
    {
        printf("Not Palindrome \n");
    }

    return 0;
}