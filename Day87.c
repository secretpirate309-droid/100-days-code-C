#include <stdio.h>
#include <math.h>

//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.


int main() {
    float a, b, c;
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("The triangle is valid.\n");
        if (a == b && b == c) {
            printf("It is an equilateral triangle.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("It is an isosceles triangle.\n");
        }
        else {
            printf("It is a scalene triangle.\n");
        }
        if (fabs((a*a + b*b) - c*c) < 1e-6 || 
            fabs((a*a + c*c) - b*b) < 1e-6 || 
            fabs((b*b + c*c) - a*a) < 1e-6) {
            printf("It is also a right-angled triangle.\n");
        }
    } else {
        printf("The triangle is not valid.\n");
    }
    return 0;
}