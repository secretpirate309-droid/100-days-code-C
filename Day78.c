#include <stdio.h>


//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.


int main() 
{
    FILE *p;
    char c;
    int vowels = 0, consonants = 0;

    p = fopen("input.txt", "r");
    if (p == NULL) 
    {
        printf("Cannot open file.\n");
        return 1;
    }
    c = fgetc(p);
    while (c!= EOF) 
    {
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') 
        {

            vowels++;
        }
        else if (c >= 'a' && c <= 'z') 
        {
            consonants++;
        }

    }

    fclose(p);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}