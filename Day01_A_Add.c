#include<stdio.h>

//Write a program to input two numbers and display their sum


int main()
{
    int a, b;

    printf("Enter Two Digits: \n");

    scanf("%d", &a);
    scanf("%d", &b);

    int sum = a + b;

    printf("Sum is: %d", sum);

    return 0;
}
