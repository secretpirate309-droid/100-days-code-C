#include<stdio.h>

//Convert a lowercase string to uppercase without using built-in functions.


void convertToUppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }
}

int main() {
    char str[100];

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    convertToUppercase(str);

    printf("Uppercase string: %s\n", str);

    return 0;
}