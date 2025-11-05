#include<stdio.h>

//Check if two strings are anagrams of each other.


int main()
{
    char str1[100], str2[100];
    int count[256] = {0}, i;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    for(i = 0; str1[i] != '\0'; i++)
        count[(unsigned char)str1[i]]++;

    for(i = 0; str2[i] != '\0'; i++)
        count[(unsigned char)str2[i]]--;

    for(i = 0; i < 256; i++)
    {
        if(count[i] != 0)
        {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");
    return 0;
}