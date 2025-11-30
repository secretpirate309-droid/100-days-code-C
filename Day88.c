#include<stdio.h>



//Q138: Print all enum names and integer values using a loop.

enum names {
    sidhu,
    mahika,
    shaurya,
    harsha

};

int main() {
    enum names n;
    char *Names[] = {
        "sidhu", "mahika", "shaurya",
        "harsha"};

    printf("Enum values:\n");

    for (n = sidhu; n <= harsha; n++) {
        printf("%s = %d\n", Names[n], n);
    }

    return 0;
}