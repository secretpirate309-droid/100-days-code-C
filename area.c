#include<stdio.h>

//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


int main()
{
    int l = 10, b = 20;

    int area = l * b;

    int peri = 2*(l + b);

    printf("Area is %d", area);
    printf("Perimeter is %d", peri);


    return 0;
    
}