#include <stdio.h>
#include <stdlib.h>




//Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.



#define FILENAME "info.txt"
#define MAX_LINE_LENGTH 1024


int main() 
{
    FILE *file_pointer; 
    char line_buffer[MAX_LINE_LENGTH]; 

    
    printf("Attempting to open file: %s\n\n", FILENAME);

    
    file_pointer = fopen(FILENAME, "r");

    
    if (file_pointer == NULL) 
    {
        
        perror("Error opening file");
        printf("\nNOTE: Please ensure a file named '%s' exists in the same directory as the executable.\n", FILENAME);
        return 1;
    }

    printf("--- File Content ---\n");
   
    while (fgets(line_buffer, MAX_LINE_LENGTH, file_pointer) != NULL) 
    {
        printf("%s", line_buffer);
    }
    printf("--------------------\n");
    printf("\nEnd of file (EOF) reached. Reading complete.\n");

    
    fclose(file_pointer);

    return 0;
}