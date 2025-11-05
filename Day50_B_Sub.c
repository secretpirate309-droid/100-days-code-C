#include<stdio.h>
#include<string.h>

//Q100: Print all sub-strings of a string.

int main()
{
    char str[100];
    int i, j, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    if(str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }

    printf("All sub-strings of the string are:\n");
    for(i = 0; i < len; i++) {
        for(j = i; j < len; j++) {
            for(int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            putchar('\n');
        }
    }

    return 0;
}