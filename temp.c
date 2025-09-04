#include<stdio.h>

//Write a program to convert temperature from Celsius to Fahrenheit

int main()
{
    int cel = 34;

    printf("Temp at Celius is %d \n", cel);

    int far = cel * (9/5) + 32;
    

    printf("Temp at fahrenhrit %d \n", far);

    return 0;
}
