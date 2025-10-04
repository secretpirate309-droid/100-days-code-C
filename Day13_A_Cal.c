#include<stdio.h>

//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


int main()
{

    int a, b, s, d, m, n, r;
    char am;

    
    printf("Enter First Digit :");
    scanf("%d", &a);


    printf("Enter First Digit :");
    scanf("%d", &b);


    printf("Enter Operation :");
    scanf("%s", &am);

    s = a + b;

    d = a / b;

    m = a * b;

    n = a - b;

    r = a % b;
    

    switch (am)
    {
        case '+' :
            printf("%d \n", s);
            break;


        case '-' : 
            printf("%d \n", n);
            break;


        case '*' :
            printf("%d \n", m);
            break;

            
        case '/' :
            printf("%d \n", d);
            break;

            
            
        case '%' : 
            printf("%d \n", r);
            break;
            
    
    }


}