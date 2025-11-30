#include<stdio.h>
#include <stdlib.h>
#include <string.h>


//Use malloc() to allocate structure memory dynamically and print details.



typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char name[50];
    int empId;
    float salary;
    Date joiningDate; 
} Employee;

int main() {
    Employee *e_ptr;

    e_ptr = (Employee *)malloc(sizeof(Employee));

    if (e_ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("--- Input Employee Details ---\n");
    printf("Name ID Salary Date(D M Y): ");
    
    if (scanf("%49s %d %f %d %d %d", 
              e_ptr->name, &e_ptr->empId, &e_ptr->salary, 
              &e_ptr->joiningDate.day, &e_ptr->joiningDate.month, &e_ptr->joiningDate.year) != 6) {
        printf("Invalid input.\n");
        free(e_ptr);
        return 1;
    }

    printf("\n--- Employee Details (Dynamic) ---\n");
    printf("Name: %s\n", e_ptr->name);
    printf("ID: %d\n", e_ptr->empId);
    printf("Salary: %.2f\n", e_ptr->salary);
    printf("Joining Date: %d/%d/%d\n", 
           e_ptr->joiningDate.day, 
           e_ptr->joiningDate.month, 
           e_ptr->joiningDate.year);
    printf("--------------------------------\n");

    free(e_ptr);

    return 0;
}