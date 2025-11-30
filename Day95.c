#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Return a structure containing top student's details from a function.



typedef struct {
    char name[50];
    int roll;
    int marks;
} Student;

Student findTopStudent(const Student students[], int count) {
    if (count <= 0) {
        Student empty = {"N/A", 0, -1};
        return empty;
    }

    Student topStudent = students[0];

    for (int i = 1; i < count; i++) {
        if (students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }

    return topStudent;
}

int main() {
    int n;
    int i;

    printf("Enter the number of students (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of students. Exiting.\n");
        return 1;
    }

    Student studentArray[n];
    
    while (getchar() != '\n'); 

    printf("\nEnter details for %d students (Format: Name Roll Marks):\n", n);
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        
        if (scanf("%49s %d %d", studentArray[i].name, &studentArray[i].roll, &studentArray[i].marks) != 3) {
            printf("Invalid input format. Please enter Name Roll Marks (e.g., Riya 101 89).\n");
            while (getchar() != '\n'); 
            return 1;
        }
    }

    Student bestStudent = findTopStudent(studentArray, n);

    if (bestStudent.marks != -1) {
        printf("\n--- Result ---\n");
        printf("Top Student: %s | Roll: %d | Marks: %d\n", 
               bestStudent.name, 
               bestStudent.roll, 
               bestStudent.marks);
        printf("--------------\n");
    } else {
        printf("\nNo student data provided to determine the top student.\n");
    }

    return 0;
}