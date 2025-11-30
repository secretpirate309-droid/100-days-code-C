#include <stdio.h>

//Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.



int main() 
{
    FILE *fp;
    char name[50];
    int age;
    printf("enter name: ");
    fgets(name, 50, stdin);
    printf("enter age: ");
    scanf("%d", &age);
    fp = fopen("info.txt", "w");
    if (fp == NULL) 
    {
        printf("cannot open file\n");
        return 1;
    }
    fprintf(fp, "name: %s", name);
    fprintf(fp, "age: %d\n", age);
    fclose(fp);
    printf("data saved\n");
    return 0;
}