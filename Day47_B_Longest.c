#include<stdio.h>
#include<string.h>
//Find the longest word in a sentence.

int main()
{
    char str[100], longest[100];
    int i = 0, j = 0, maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if(str[i] == ' ' || str[i] == '\n')
        {
            if(j > maxLength)
            {
                maxLength = j;
                strncpy(longest, &str[i - j], j);
                longest[j] = '\0';
            }
            j = 0;
        }
        else
        {
            j++;
        }
        i++;
    }

    // Check the last word
    if(j > maxLength)
    {
        maxLength = j;
        strncpy(longest, &str[i - j], j);
        longest[j] = '\0';
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
