#include<stdio.h>


int main()
{
    int a, b;
    
    printf("Enter Digits You Want to CAl:");

    scanf("%d", &a);
    scanf("%d", &b);


    int sum = a + b;

    int sub = a - b;

    int mut = a * b;

    int div = a / b;


    printf("Subtraction is %d \n", sub);

    printf("Multipliaction is %d \n", mut);

    printf("division is %d \n", div);

    printf("Sum is %d \n", sum);


    return 0;
}
