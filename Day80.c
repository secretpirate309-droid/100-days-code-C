#include <stdio.h>

//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.



int main() {
    FILE *file;
    char name[50];
    int roll, n;
    float marks;
    file = fopen("students.txt", "a");
    if (file == NULL) {
        printf("Error\n");
        return 1;
    }
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i+1 );
        printf("Name: ");
        scanf("%s", name);
        printf("Roll Number: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%f", &marks);

        fprintf(file, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(file);
    printf("\nData successfully written to students.txt!\n");
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error\n");
        return 1;
    }

    printf("\nReading data from file:\n");
    while (fscanf(file, "%s %d %f", name, &roll, &marks) == 3) {
        printf("%s %d %.2f ", name, roll, marks);
    }
    fclose(file);
    return 0;
}