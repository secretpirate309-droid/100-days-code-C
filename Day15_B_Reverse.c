#include<stdio.h>

//Write a program to reverse a given number.


int main()
{

    
    int n, rn = 0, r;

    
    printf("Enter an integer: ");
    scanf("%d", &n);

    
    while (n != 0) {
        
        r = n % 10;

        
        rn = rn * 10 + r;

   
        n /= 10;
    }

    printf("Reversed number: %d\n", rn);

    return 0;
}

