#include<stdio.h>

//Show that enums store integers by printing assigned values.


enum Example {
    A = 5,
    B = 10,
    C = 15
};

int main() {
    printf("Value of A = %d\n", A);
    printf("Value of B = %d\n", B);
    printf("Value of C = %d\n", C);

    return 0;
}