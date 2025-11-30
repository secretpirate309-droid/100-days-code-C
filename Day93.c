#include <stdio.h>

//Q143: Find and print the student with the highest marks.


struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i, maxIndex = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }
    for (i = 1; i < 5; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }
    printf("Name: %s\n", s[maxIndex].name);
    printf("Roll No: %d\n", s[maxIndex].roll_no);
    printf("Marks: %.2f\n", s[maxIndex].marks);

    return 0;
}