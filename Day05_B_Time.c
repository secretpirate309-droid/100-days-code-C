#include<stdio.h>

//Write a program to input time in seconds and convert it to hours:minutes:seconds format


int main()
{
    int t;
    printf("Enter time in seconds: ");
    scanf("%d", &t);

    int hours = t / 3600;
    int minutes = (t % 3600) / 60;
    int seconds = t % 60;

    printf("Time in hours:minutes:seconds format is %d:%d:%d\n", hours, minutes, seconds);
    return 0;
}
