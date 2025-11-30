#include <stdio.h>

//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("Enter gender (0 = MALE, 1 = FEMALE, 2 = OTHER): ");
    scanf("%d", (int*)&p.gender);

    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);

    printf("Gender: ");
    switch (p.gender) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n"); break;
        default:     printf("Invalid\n");
    }

    return 0;
}