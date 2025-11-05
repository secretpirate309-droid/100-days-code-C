#include<stdio.h>

//Count vowels and consonants in a string.


int main()
{
    char str[100];
    int i, vowels=0, consonants=0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    for(i=0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch; 
            
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    
    return 0;
}