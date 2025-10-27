#include<stdio.h>

//Write a program to swap the first and last digit of a number.

#include <stdlib.h>


int main() {
    int n; 
    int last; 
    int first; 
    int temp; 
    int power_of_10 = 1; 

    printf("Enter a number: ");

    if (scanf("%d", &n) != 1) 
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    
    if (n >= 0 && n < 10) 
    {
        printf("Swapped number: %d\n", n);
        return 0;
    }

   
    last = n % 10;

    
    temp = n;
    while (temp >= 10) {
        temp /= 10;
        power_of_10 *= 10;
    }
    first = temp; 

    
    int middle = (n % power_of_10) / 10;

    
    long long new_n = (long long)last * power_of_10 + middle * 10 + first;

    printf("Swapped number: %lld\n", new_n);

    return 0;
}
