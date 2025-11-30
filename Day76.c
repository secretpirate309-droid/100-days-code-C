#include<stdio.h>


//QAsk the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.



int main() 
{
    FILE *p;
    char filename[50];
    char text[200];
    printf("Enter file name: ");
    scanf("%s", filename);
    getchar();
    p = fopen(filename, "r");
    if (p == NULL) 
    {
        printf("Cannot open file.\n");
        return 1;
    }
    else
    {
    fprintf(p,"%d",text);
    fclose(p);
    return 0;
    }
}