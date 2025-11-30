#include<stdio.h>
#include<ctype.h>

//Write a program to take a string input. Change it to sentence case.


int main() 
{
    FILE *fp;
    char text[200];
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    fp = fopen("input.txt", "w");
    if (fp == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }
    fputs(text, fp);
    fclose(fp);
    fp = fopen("input.txt", "r");
    if (fp == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }
    fgets(text, sizeof(text), fp);
    fclose(fp);
    if (text[0] != '\0') 
    {
        text[0] = toupper(text[0]);
    }
    for (int i = 1; text[i] != '\0'; i++) 
    {
        text[i] = tolower(text[i]);
    }
    printf("Sentence case: %s", text);
    return 0;
}