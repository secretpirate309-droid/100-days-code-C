#include<stdio.h>

//Write a program to swap two numbers using a third variable.


int main()
{
    int a, b;
    printf("Enter Digits To Swap: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("Before Swapping Numbers: %d, %d \n", a, b);
    int c;

    c = a;
    a = b;
    b = c;

    printf("Swapped Digits are: %d, %d \n", a, b);
}
