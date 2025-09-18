#include<stdio.h>

//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 


int main()
{
    float g;
    printf("Enter grade: ");
    scanf("%f", &g);

    if (g >= 90 && g <= 100) {
        printf("Grade A\n");
    } 
    else if (g >= 80 && g < 90) {
        printf("Grade B\n");
    } 
    else if (g >= 70 && g < 80) {
        printf("Grade C\n");
    } 
    else if (g >= 60 && g < 70) {
        printf("Grade D\n");
    } 
    else if (g >= 50 && g < 60) {
        printf("Grade E\n");
    } 
    else if (g >= 0 && g < 50) {
        printf("Grade F\n");
    } 
    else {
        printf("Please enter a percentage between 0 and 100.\n");
    }
}