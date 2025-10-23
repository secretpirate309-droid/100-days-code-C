#include <stdio.h>

//Write a program to take a number as input and print its equivalent binary representation.



void printBinary(int n) 
{
    
    if (n == 0) 
    {
        printf("0\n");
        return;
    }

    
    char binaryString[33]; 
    int i = 0;
    int temp_n = n;

    
    while (temp_n > 0) 
    {
        
        binaryString[i] = (temp_n % 2) + '0'; 
        temp_n /= 2; 
        i++;
    }

    
    binaryString[i] = '\0'; 

    
    for (int j = i - 1; j >= 0; j--) 
    {
        printf("%c", binaryString[j]);
    }
    printf("\n");
}

int main() 
{
    int input_num;

    
    printf("Enter a non-negative integer: ");

   
    if (scanf("%d", &input_num) != 1) 
    {
        fprintf(stderr, "Error: Invalid input. Please enter a valid integer.\n");
        return 1; 
    }

    
    if (input_num < 0) 
    {
        printf("Error: Please enter a non-negative integer.\n");
        return 1;
    }

    
    printBinary(input_num);

    return 0;
}
