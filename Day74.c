#include <stdio.h>
#include <stdlib.h>

#define MAX_FILENAME_LENGTH 100



//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().



int main() 
{
    FILE *source_fp = NULL; 
    FILE *dest_fp = NULL;  
    char source_filename[MAX_FILENAME_LENGTH];
    char dest_filename[MAX_FILENAME_LENGTH];
    int character; 

    
    printf("--- File Copy Program ---\n");
    printf("Enter the name of the SOURCE file to read from: ");
    if (scanf("%99s", source_filename) != 1) 
    {
        printf("Invalid input for source file.\n");
        return 1;
    }

    printf("Enter the name of the DESTINATION file to write to: ");
    if (scanf("%99s", dest_filename) != 1) 
    {
        printf("Invalid input for destination file.\n");
        return 1;
    }

    
    source_fp = fopen(source_filename, "r");
    if (source_fp == NULL) 
    {
        perror("Error opening SOURCE file for reading");
        printf("Ensure '%s' exists in the current directory.\n", source_filename);
        return 2;
    }
    
    
    dest_fp = fopen(dest_filename, "w");
    if (dest_fp == NULL) 
    {
        perror("Error opening DESTINATION file for writing");
        
        fclose(source_fp); 
        return 3;
    }

    printf("\nCopying content from '%s' to '%s'...\n", source_filename, dest_filename);

    
    while ((character = fgetc(source_fp)) != EOF) 
    {
       

        if (fputc(character, dest_fp) == EOF) 
        {
            perror("Error writing to destination file");
            
            break; 
        }
    }

    
    if (fclose(source_fp) == EOF) 
    {
        perror("Error closing source file");
    }

    
    if (fclose(dest_fp) == EOF) 
    {
        perror("Error closing destination file");
    }

    printf("\nSuccessfully copied all content.\n");
    printf("Content of '%s' is now in '%s'.\n", source_filename, dest_filename);

    return 0;
}