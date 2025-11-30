#include <stdio.h>

//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.


int main() 
{
    FILE *inputFile, *outputFile;
    char ch;


    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) 
    {
        printf("Error! Unable to open input.txt\n");
        return 1;
    }


    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) 
    {
        printf("Error! Unable to open output.txt\n");
        fclose(inputFile);
        return 1;
    }


    while ((ch = fgetc(inputFile)) != EOF) 
    {
        if (ch >= 'a' && ch <= 'z') 
        {
            ch = ch - 'a' + 'A';
        }
        fputc(ch, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Conversion complete. Check output.txt.\n");
    return 0;
}