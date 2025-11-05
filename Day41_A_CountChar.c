#include<stdio.h>

//Count characters in a string without using built-in length functions.


int main()
{
    char str[100];
    int count = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
 
    if(count > 0 && str[count - 1] == '\n') {
        count--;
    }
    
    printf("Length of the string: %d\n", count);
    
    return 0;
}
