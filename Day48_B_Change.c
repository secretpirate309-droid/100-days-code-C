#include<stdio.h>
#include<string.h>

//Reverse each word in a sentence without changing the word order.

int main()
{
    char str[100], temp;
    int i=0, start, end, len;
    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    
    len = strlen(str);
    if(str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }
    
    while(i <= len) {
        if(str[i] == ' ' || str[i] == '\0') {
            end = i - 1;
            start = i - 1;
            while(start < end) {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
        }
        i++;
    }
    
    printf("Reversed words: %s\n", str);
    
    return 0;
}