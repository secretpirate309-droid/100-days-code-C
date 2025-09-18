#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Enter side a: ");
    scanf("%f", &a);
    printf("Enter side b: ");
    scanf("%f", &b);
    printf("Enter side c: ");
    scanf("%f", &c);

    // Check triangle validity
    if (a + b > c && a + c > b && b + c > a) {
        printf("Triangle is valid.\n");
        // Check type
        if (a == b && b == c) {
            printf("Equilateral triangle\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles triangle\n");
        } else if (
            fabs(a*a + b*b - c*c) < 1e-6 ||
            fabs(a*a + c*c - b*b) < 1e-6 ||
            fabs(b*b + c*c - a*a) < 1e-6
        ) {
            printf("Right angle triangle\n");
        } else {
            printf("Scalene triangle\n");
        }
    } else {
        printf("Triangle is not valid.\n");
    }
    return 0;
}